#include <iostream>
#include "Point.h"

using std::cout;
using std::endl;

int Point::GetX(void) const {
	return x;
}

int Point::GetY(void) const {
	return y;
}

bool Point::SetX(int xPos) {
	if (xPos < 0 || xPos > 100)
	{
		cout << "invalid x position " << xPos << endl;
		return false;
	}
	x = xPos;
	return true;
}

bool Point::SetY(int yPos) {
	if (yPos < 0 || yPos > 100)
	{
		cout << "invalid y position " << yPos << endl;
		return false;
	}
	y = yPos;
	return true;
}

Point::~Point() {
	cout << "(" << x << "," << y << ") deconstruct" << endl;
}