#pragma once
#include <windows.h>
#include <cstdint>

struct DetourHookInfo
{
public:
	HMODULE hTargetModule;
	LPCSTR  sTargetFunc;
	FARPROC m_pSourceFunc;
	bool	m_bInstalledHook;

private:
	void*	m_pDetour;

public:
	DetourHookInfo() {}

	DetourHookInfo(HMODULE targetModule, LPCSTR targetFunc,
				   HMODULE sourceModule, LPCSTR sourceFunc = NULL);

	DetourHookInfo(HMODULE targetModule, LPCSTR targetFunc, FARPROC pSourceFunc);

	bool InstallHook();

	FARPROC GetOriginal();
};

