#include<iostream> 
#include<cstdio>
#include<windows.h>

int main()
{
	HWND hwnd;
	hwnd=FindWindow("ConsoleWindowClass",NULL);	
	if(hwnd)
	{
		ShowWindow(hwnd,SW_HIDE);//����ָ�����ڵ���ʾ״̬
	}
	MessageBox(NULL,"����������:SoulGateKey QQ:2772023146 ����Xiderow���������ʦ��Github�������������ط������Ľ�Ϊ���档�汾1.0","��֪",MB_OK); 
	MessageBox(NULL,"��������������ĵ�����ɲ�����������𺦣���������������У�","����",MB_YESNO); //first
	MessageBox(NULL,"��������������ĵ�����ɲ�����������𺦣���������������У�","�ڶ��ξ���",MB_YESNO); //second
	MessageBox(NULL,"��������������ĵ�����ɲ�����������𺦣���������������У����������һ�εĻ��ᣡ","��󾯸�",MB_YESNO); //last
	return 0; 
}
