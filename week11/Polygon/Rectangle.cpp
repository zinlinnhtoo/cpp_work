#include "Rectangle.h"

using namespace std;

Rectangle::Rectangle(double w, double h)
	: Polygon(w, h, "Rectangle") {}

void Rectangle::ShowInfo() const {
	cout << "Type: " << type << endl;
	cout << "Width: " << width << endl;
	cout << "Height: " << height << endl;
}

double Rectangle::GetArea() const {
	return width * height;
}

bool Rectangle::IsSquare() const {
	return width == height;
}