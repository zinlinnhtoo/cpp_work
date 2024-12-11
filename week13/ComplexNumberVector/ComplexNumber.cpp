#include "ComplexNumber.h"
#include <iostream>
using namespace std;

ComplexNumber::ComplexNumber(double r = 0, double i = 0) : real(r), imag(i) {}

void ComplexNumber::display() const {
	cout << "(" << real << ", i" << imag << ")" << endl;
}