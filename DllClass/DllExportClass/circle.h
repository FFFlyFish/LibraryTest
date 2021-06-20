#ifndef __CIRCLE_H__
#define __CIRCLE_H__
#include "point.h"
#ifdef DLL_FILE
class _declspec (dllexport) circle //������circle
#else 
class _declspec(dllimport) circle //������circle
#endif
{
public: 
	void SetCenter(const point crePoint);
	void SetRadius(float r);
	float GetGirth();
	float GetArea();
	circle();
private:
	float radius;
	point center;
};

#endif
