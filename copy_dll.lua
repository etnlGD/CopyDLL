require "lfs"

local filename = "C:\\Program Files (x86)\\Blizzard App\\Battle.net.9093\\vivoxsdk.dll"
local outputDir = "vivox\\"
lfs.mkdir(outputDir)

local fileBasename = filename
local sepIdx = string.find(filename, "\\[^\\]*$")
if sepIdx then
	fileBasename = string.sub(filename, sepIdx + 1)
end

local fileBaseNoDll = string.sub(fileBasename, 1, string.find(fileBasename, ".dll") - 1)

os.execute(string.format('dumpbin /exports "%s" > temp.txt', filename))

local exports = {}
do
	local tmpFile = io.open("temp.txt")
	local exportTableBegin = false
	for line in tmpFile:lines() do
		if not exportTableBegin then
			if string.match(line, "^%s*ordinal%s+hint%s+RVA%s+name%s*$") then
				exportTableBegin = true
			end
		else
			local ordinal, hint, RVA, name = string.match(line, "%s*(%d+)%s+(%x+)%s+(%x+)%s+([%a_][%w_]*)")
			if ordinal and hint and RVA and name then
				table.insert(exports, name)
			end
		end
	end
	io.close(tmpFile)
end

do 
	local outputDef = io.open(outputDir..fileBaseNoDll..".def", "w")

	outputDef:write(string.format("LIBRARY %s\n\n", fileBasename))
	outputDef:write("EXPORTS\n")
	for _, name in ipairs(exports) do
		outputDef:write(string.format("\t%s\n", name))
	end
	io.close(outputDef)
end

local codeTemplate1 = [[
#include "HookUtil.h"
#include <map>
#include <string>

extern CHAR* g_OriginalModulePath;
extern HMODULE g_OriginalModule = 0;
extern std::map<std::string, DetourHookInfo> g_ExportFunctionHooks = std::map<std::string, DetourHookInfo>();
static void HookAllExports(HMODULE hCurrentModule)
{
	g_OriginalModule = LoadLibraryEx(g_OriginalModulePath, NULL, 0);
	if (g_OriginalModule == 0)
		return;
]]

local codeTemplate2 = [[
	
	for (auto it = g_ExportFunctionHooks.begin(); it != g_ExportFunctionHooks.end(); ++it)
	{
		it->second.InstallHook();
	}
]]

local codeTemplate3 = [[
extern void InitWhenProcessAttach(HMODULE hModule);
BOOL APIENTRY DllMain(HMODULE hModule,
                      DWORD   ul_reason_for_call,
                      LPVOID lpReserved
					  )
{
	switch (ul_reason_for_call)
	{
	case DLL_PROCESS_ATTACH:
		HookAllExports(hModule);
		InitWhenProcessAttach(hModule);
		break;
	case DLL_THREAD_ATTACH:
	case DLL_THREAD_DETACH:
	case DLL_PROCESS_DETACH:
		break;
	}
	return TRUE;
}]]


do
	local outputCpp = io.open(outputDir.."template.cpp", "w+")
	outputCpp:write("#include <cstdio>\n")
	outputCpp:write("#include <wtypes.h>\n\n")
	for _, name in ipairs(exports) do
		outputCpp:write(string.format('int WINAPI %s() { printf("%s"); return 0; }\n', name, name))
	end
	
	outputCpp:write(codeTemplate1)
	for _, name in pairs(exports) do
		outputCpp:write(string.format('\tg_ExportFunctionHooks["%s"] = DetourHookInfo(hCurrentModule, "%s", g_OriginalModule);\n', name, name))
	end
	outputCpp:write(codeTemplate2)
	outputCpp:write("}\n\n")
	
	outputCpp:write(string.format("\n%s\n", codeTemplate3));
	io.close(outputCpp)
end

do
	local outputCpp = io.open(outputDir..fileBaseNoDll..".cpp", "r")
	io.close(outputCpp)
end

do
	local outputCMakeLists = io.open(outputDir.."CMakeLists.txt", "w")
	outputCMakeLists:write("CMAKE_MINIMUM_REQUIRED (VERSION 2.6)\n\n")
	outputCMakeLists:write(
		string.format("add_library(%s SHARED template.cpp %s.cpp %s.def ../shared/HookUtil.h ../shared/HookUtil.cpp)\n", 
		fileBaseNoDll, fileBaseNoDll, fileBaseNoDll))
	outputCMakeLists:write("include_directories(${CMAKE_SOURCE_DIR}/../shared/PolyHook)\n")
	outputCMakeLists:write("include_directories(${CMAKE_SOURCE_DIR}/../shared)\n")
	outputCMakeLists:write(string.format("target_link_libraries(%s ${CMAKE_SOURCE_DIR}/../shared/PolyHook/capstone/msvc/Release/capstone.lib)\n", fileBaseNoDll))
	io.close(outputCMakeLists)
end

local currentDir = lfs.currentdir()
lfs.mkdir(outputDir.."build")
lfs.chdir(outputDir.."build")
os.execute("cmake ..")
lfs.chdir(currentDir)
