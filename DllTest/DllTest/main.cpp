#include "stdio.h"
#include "windows.h"

typedef int (*lpAddFun)(int ,int );//宏定义函数指针类型

int main()
{
	HINSTANCE hDll;//DLL 句柄
	lpAddFun addFun;//函数指针
	hDll = LoadLibrary(L"DllLib.dll");//动态获取dll文件的路径
	if (hDll!=NULL)
	{
		addFun =(lpAddFun)GetProcAddress(hDll,"add");//根据函数名在dll文件中获取该函数的地址	
		if (addFun!=NULL)
		{
			int result =addFun(2,3);
			printf("2+3=%d",result);
		}

	FreeLibrary(hDll);
	}
	return 0;
}
