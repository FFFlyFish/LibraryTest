#include "stdio.h"
#include "windows.h"

typedef int (*lpAddFun)(int ,int );//�궨�庯��ָ������

int main()
{
	HINSTANCE hDll;//DLL ���
	lpAddFun addFun;//����ָ��
	hDll = LoadLibrary(L"DllLib.dll");//��̬��ȡdll�ļ���·��
	if (hDll!=NULL)
	{
		addFun =(lpAddFun)GetProcAddress(hDll,"add");//���ݺ�������dll�ļ��л�ȡ�ú����ĵ�ַ	
		if (addFun!=NULL)
		{
			int result =addFun(2,3);
			printf("2+3=%d",result);
		}

	FreeLibrary(hDll);
	}
	return 0;
}
