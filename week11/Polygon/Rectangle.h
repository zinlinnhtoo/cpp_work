#ifndef _RECTANGLE_H
#define _RECTANGLE_H

#include "Polygon.h"

class Rectangle : public Polygon
{
public:
	Rectangle(double w, double h);
	void ShowInfo() const override;
	double GetArea() const override;

	bool IsSquare() const;

};

#endif // !_RECTANGLE_H



