#include <iostream>
#include "Rectangle.h"

using std::cout;
using std::endl;

bool Rectangle::Init(Point& leftTop, Point& rightBottom) {
	if (leftTop.GetX() > rightBottom.GetX() || leftTop.GetY() > rightBottom.GetY())
	{
		cout << "invalid rectangle point" << endl;
		return false;
	}
	lt = leftTop;
	rb = rightBottom;
	return true;
}

int Rectangle::getHeight(void) const {
	return rb.GetX() - lt.GetX();
}

int Rectangle::getWidth(void) const {
	return rb.GetY() - lt.GetY();
}

int Rectangle::getArea(void) const {
	return getWidth() * getHeight();
}

int Rectangle::getPerimeter(void) const {
	return 2 * (getWidth() + getHeight());
}

Rectangle::~Rectangle() {
	cout << "Rectangle destructed" << endl;
}