#include <iostream>
using namespace std;

class Circle {
public:
	const double PI = 3.14159265;
	double radius;

	bool setRadius(double);
	double getArea(void);
};

bool Circle::setRadius(double r) {
	if (r >= 0) {
		radius = r;
		return true;
	}
	else
	{
		return false;
	}
}

double Circle::getArea(void) {
	double area;
	area = PI * (radius * radius);
	return area;
}

int main(void) {
	double areaOfC1;
	double areaOfC10;
	Circle c1;
	if (!c1.setRadius(1))
	{
		cout << "Invalid input for c1" << endl;
		return -1;
	}
	areaOfC1 = c1.getArea();
	cout << "Circle of area 1 is " << areaOfC1 << endl;
	
	

	Circle c10;
	if (!c10.setRadius(-10))
	{
		cout << "Invalid input for c10" << endl;
		return -1;
	}
	areaOfC10 = c10.getArea();
	cout << "Circle of area 10 is " << areaOfC10 << endl;
	return 0;
}