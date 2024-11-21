#include "Triangle.h"

using namespace std;

Triangle::Triangle(double b, double h) : Polygon(b, h, "Triganle") {}

void Triangle::ShowInfo() const {
	cout << "Type: " << type << endl;
	cout << "Base: " << width << endl;
	cout << "Height: " << height << endl;
}

double Triangle::GetArea() const {
	return 0.5 * width * height;
}
				