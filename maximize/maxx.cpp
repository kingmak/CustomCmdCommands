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
*/
 
int main()
{
	LPCSTR windowName = "Command Prompt"; // this changes to select Command Prompt when u r selecting in cmd
	ShowWindow(FindWindow(0, windowName), SW_MAXIMIZE);
    
  return 0;
}	
