#include <stdio.h>
#include <windows.h>

typedef int (__stdcall *FUN)(int, int);
HINSTANCE hInstance;

FUN   fun;

int main()
{
	hInstance = LoadLibrary(L"DllLib.dll");
	if(hInstance!=NULL)
	{
		fun = (FUN)GetProcAddress(hInstance, "Add");
		//����Def�ļ���ָ���������ʱ������ͨ����ŵ���������ֻ��ͨ���������Ƶ���
		//fun = (FUN)GetProcAddress(hInstance, MAKEINTRESOURCE(1));
		if (fun!=NULL)
		{
				printf("1+2=%d",fun(1, 2));
		}
	}
	FreeLibrary(hInstance);
	return 0;
}