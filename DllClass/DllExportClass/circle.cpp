#ifndef DLL_FILE
#define DLL_FILE
#endif
#include"circle.h"
#define  PI 3.1415926
//��circle��ȱʡ���캯��
circle::circle()
{
	center =point(0,0);
	radius =0;
}
//�õ�Բ�����
float circle::GetArea()
{
	return PI*radius*radius;
}
//�õ�Բ���ܳ�
float circle::GetGirth()
{
	return 2*PI*radius;
}
//����Բ������
void circle::SetCenter(const point crePoint)
{
	center =crePoint;
}
//����Բ�İ뾶
void circle::SetRadius(float r)
{
	radius	 =r;
}