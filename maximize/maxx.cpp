#include <Windows.h>

/*
To disable console window: 

Tools-> Compiler Options-> Settings-> Linker
then change the fourth box to yes.

But you have to change it back for you're normal console apps.

////////////////////////////////////////////////////////////////////

name of this file = cmd command
need a batch script to run command

////////////////////////////////////////////////////////////////////

batch code:
@echo off
start minn.exe

////////////////////////////////////////////////////////////////////
command is min
maxx.exe is placed in C:\Windows\System32\
can do where max in cmd
*/
 
int main()
{
	LPCSTR windowNames[4] = {
								"Command Prompt",
								"C:\\Windows\\system32\\cmd.exe",
								"Select Command Prompt",
								"Select C:\\Windows\\system32\\cmd.exe"
							};  // arranged my most likely						 
						 
	for (int i = 0; i < 4; i++)
	{
		if (FindWindow(0, windowNames[i])) // if window found [return type of FindWindow is HWND (window handle)]
		{
			ShowWindow(FindWindow(0, windowNames[i]), SW_MAXIMIZE); // maximize the window
			return 0; // exit main
		}
	}
	
	return 0; // window not found, exit :(-
}	
