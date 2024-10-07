#ifndef _RECTANGLE_H_
#define _RECTANGLE_H_

#include "Point.h"

class Rectangle {
	Point lt, rb; //left top, right bottom

public:
	bool Init(Point& leftTop, Point& rightBottom);

	Rectangle(Point& leftTop, Point& rightBottom);
	
	~Rectangle();

	int getWidth(void) const;
	int getHeight(void) const;
	int getArea(void) const;
	int getPerimeter(void)	const;

};

inline Rectangle::Rectangle(Point& leftTop, Point& rightBottom)
	:	lt(leftTop.GetX(), leftTop.GetY()),
		rb(rightBottom.GetX(), rightBottom.GetY())
{
	/*lt.SetX(leftTop.GetX());
	lt.SetY(leftTop.GetY());

	rb.SetX(rightBottom.GetX());
	rb.SetY(rightBottom.GetY());*/


}

#endif // !_RECTANGLE_H_
