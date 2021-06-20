#ifndef DLL_FILE
#define DLL_FILE
#endif
#include"circle.h"
#define  PI 3.1415926
//类circle的缺省构造函数
circle::circle()
{
	center =point(0,0);
	radius =0;
}
//得到圆的面积
float circle::GetArea()
{
	return PI*radius*radius;
}
//得到圆从周长
float circle::GetGirth()
{
	return 2*PI*radius;
}
//设置圆心坐标
void circle::SetCenter(const point crePoint)
{
	center =crePoint;
}
//设置圆的半径
void circle::SetRadius(float r)
{
	radius	 =r;
}