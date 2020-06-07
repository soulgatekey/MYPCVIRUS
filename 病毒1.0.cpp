#include<iostream> 
#include<cstdio>
#include<windows.h>

int main()
{
	HWND hwnd;
	hwnd=FindWindow("ConsoleWindowClass",NULL);	
	if(hwnd)
	{
		ShowWindow(hwnd,SW_HIDE);//设置指定窗口的显示状态
	}
	MessageBox(NULL,"本病毒作者:SoulGateKey QQ:2772023146 仅在Xiderow病毒体验大师、Github发布，在其他地方看到的皆为盗版。版本1.0","须知",MB_OK); 
	MessageBox(NULL,"这个病毒将对您的电脑造成不可逆的永久损害，请在虚拟机下运行！","警告",MB_YESNO); //first
	MessageBox(NULL,"这个病毒将对您的电脑造成不可逆的永久损害，请在虚拟机下运行！","第二次警告",MB_YESNO); //second
	MessageBox(NULL,"这个病毒将对您的电脑造成不可逆的永久损害，请在虚拟机下运行！这是您最后一次的机会！","最后警告",MB_YESNO); //last
	return 0; 
}
