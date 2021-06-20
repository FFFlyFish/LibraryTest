#include <stdio.h>
#include "lib.h"
#pragma comment (lib,"staticlabrary.lib")//指定与静态库一起连接

int main()
{
	printf("2+3=%d",add(2,3));
}