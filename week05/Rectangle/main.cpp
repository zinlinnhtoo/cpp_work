#include <iostream>
#include "Rectangle.h"

using std::cout;
using std::endl;

void show(Rectangle);

int main(void) {

	Point lt(5, 9);
	Point rb(12, 14);

	Rectangle rect(lt, rb);

	cout << "before show()" << endl;
	show(rect);

	cout << "after show()" << endl;

	return 0;

}

void show(Rectangle r) {
	cout << "Area: " << r.getArea() << endl;
	cout << "Perimeter: " << r.getPerimeter() << endl;
}


