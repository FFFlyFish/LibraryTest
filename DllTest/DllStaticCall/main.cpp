#include "stdio.h"

//.lib�ļ��н����ǹ������ӦDLL�ļ��к����Ķ�λ��Ϣ
#pragma comment(lib,"DllLib.lib")

extern "C" int __declspec(dllimport) add(int a,int b);

int main()
{
	int result =add(2,3);
    printf("2+3=%d",result);
	scanf("%d");
	return 0;
}
