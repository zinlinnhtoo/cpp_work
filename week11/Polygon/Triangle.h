#ifndef _TRIANGLE_H
#define _TRIANGLE_H

#include "Polygon.h"

class Triangle : public Polygon
{
public:
	Triangle(double b, double h);
	void ShowInfo() const override;
	double GetArea() const override;
};

#endif // !_TRIANGLE_H



