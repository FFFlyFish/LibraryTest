#include "circle.h"
#include "stdio.h"

//.lib文件中仅仅是关于其对应DLL文件中函数的定位信息
#pragma comment(lib,"DllExportClass.lib")

int main()
{
    circle c;
	point p(2.0,2.0);
	c.SetCenter(p);
	c.SetRadius(1.0);
	printf("area:%f,girth:%f",c.GetArea(),c.GetGirth());
	scanf("%d");
	return 0;
}

