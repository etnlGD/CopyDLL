#include "HookUtil.h"

#pragma warning (push)
#pragma warning (disable: 4244)
#pragma warning (disable: 4018)
#include "PolyHook/PolyHook.hpp"
#pragma warning (pop)

DetourHookInfo::DetourHookInfo(HMODULE targetModule, LPCSTR targetFunc,
							   HMODULE sourceModule, LPCSTR sourceFunc) :
							   hTargetModule(targetModule), sTargetFunc(targetFunc),
							   m_pDetour(new PLH::Detour), m_bInstalledHook(false)
{
	if (sourceFunc == NULL)
		sourceFunc = targetFunc;

	m_pSourceFunc = (FARPROC)GetProcAddress(sourceModule, sourceFunc);
}

DetourHookInfo::DetourHookInfo(HMODULE targetModule, LPCSTR targetFunc, FARPROC pSourceFunc) :
	hTargetModule(targetModule), sTargetFunc(targetFunc),
	m_pSourceFunc(pSourceFunc),
	m_pDetour(new PLH::Detour), m_bInstalledHook(false)
{
}

bool DetourHookInfo::InstallHook()
{
	uint8_t* pTargetFunc = (uint8_t*)GetProcAddress(hTargetModule, sTargetFunc);

	CHAR targetModulePath[MAX_PATH];
	GetModuleFileName(hTargetModule, targetModulePath, MAX_PATH);
	if (pTargetFunc == NULL)
	{
		return false;
	}

	if (m_pSourceFunc == NULL)
	{
		return false;
	}

	PLH::Detour* pDetour = static_cast<PLH::Detour*>(m_pDetour);
	pDetour->SetupHook(pTargetFunc, (uint8_t*)m_pSourceFunc);
	m_bInstalledHook = pDetour->Hook();
	return m_bInstalledHook;
}

FARPROC DetourHookInfo::GetOriginal()
{
	PLH::Detour* pDetour = static_cast<PLH::Detour*>(m_pDetour);
	return m_bInstalledHook ?
		pDetour->GetOriginal<FARPROC>() : GetProcAddress(hTargetModule, sTargetFunc);
}
