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
		//当在Def文件中指定函数序号时，可以通过序号导出，否则只能通过函数名称导出
		//fun = (FUN)GetProcAddress(hInstance, MAKEINTRESOURCE(1));
		if (fun!=NULL)
		{
				printf("1+2=%d",fun(1, 2));
		}
	}
	FreeLibrary(hInstance);
	return 0;
}