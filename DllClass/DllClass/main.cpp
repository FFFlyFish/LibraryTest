#include "circle.h"
#include "stdio.h"

//.lib�ļ��н����ǹ������ӦDLL�ļ��к����Ķ�λ��Ϣ
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

