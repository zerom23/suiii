#include <Windows.h>
#include <iostream>
#include <tlhelp32.h>

int main()
{
	HWND ng_window = FindWindowA(NULL, "AnyGamehere");
	DWORD window_thread = 0;
	GetWindowThreadProcessId(ng_window, &window_thread);

	DWORD Whateveryouwanttoput = 0;
	HANDLE nig_window = OpenProcess(PROCESS_ALL_ACCESS, FALSE, Whateveryouwanttoput);

	//this is if you want to change health or ammo
	DWORD newValue = 0;

	WriteProcessMemory(hProcess,(LPCVOID*)(base + addressyouwantoput),&newValue,sizeof(newValue));
}
