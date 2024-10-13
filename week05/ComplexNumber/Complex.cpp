#include <iostream>
#include "Complex.h"

using std::cout;
using std::endl;
using std::cin;

double Complex::GetReal(void) const {
	return real;
}

double Complex::GetImage(void) const {
	return image;
}

void Complex::SetComplex(double r, double i) {
	real = r;
	image = i;
}

void Complex::ShowComplex(void) const {
	cout << real << "+" << image << "i" << endl;
}

Complex Complex::AddComplex(const Complex& other) const {
	return Complex(real + other.real, image + other.image);
}

void Complex::InputComplex() {
	double r, i;
	cout << "Enter real part: ";
	cin >> r;
	cout << "Enter imaginary part: ";
	cin >> i;
	SetComplex(r, i);
}

//void static InputComplex(Complex* c) {
//	double r, i;
//	cout << "Enter real part: ";
//	cin >> r;
//	cout << "Enter imaginary part: ";
//	cin >> i;
//	c->SetComplex(r, i);
//}
//
//void static InputComplex(Complex& c) {
//	double r, i;
//	cout << "Enter real part: ";
//	cin >> r;
//	cout << "Enter imaginary part: ";
//	cin >> i;
//	c.SetComplex(r, i);
//}
//
//static Complex& InpAndRetComplex(Complex& c) {
//	InputComplex(c);
//	return c;
//}
