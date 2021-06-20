#include "stdio.h"

//.lib文件中仅仅是关于其对应DLL文件中函数的定位信息
#pragma comment(lib,"DllLib.lib")

extern "C" int __declspec(dllimport) add(int a,int b);

int main()
{
	int result =add(2,3);
    printf("2+3=%d",result);
	scanf("%d");
	return 0;
}
