#include <iostream>
#include "Complex.h"

using namespace std;


Complex::Complex(const Complex& c) : real(c.real), imag(c.imag) {
    cout << "Copy Constructor called." << endl;
}

Complex::~Complex() {
    cout << "Object Destructed";
    ShowComplex();
    cout << "\n";
}


void Complex::SetComplex(double r, double i) {
    real = r;
    imag = i;
}


double Complex::GetReal() const {
    return real;
}


double Complex::GetImaginary() const {
    return imag;
}

void Complex::ShowComplex() const {
    cout << real << " + " << imag << "i" << endl;
}

void Complex::InputComplex() {
    double r, i;
    cout << "Enter real part: ";
    cin >> r;
    cout << "Enter imaginary part: ";
    cin >> i;
    SetComplex(r, i);
}

void Complex::InputComplex(Complex* c) {
    if (c != nullptr) {
        double r, i;
        cout << "Enter real part: ";
        cin >> r;
        cout << "Enter imaginary part: ";
        cin >> i;
        c->SetComplex(r, i);
    }
}
void Complex::InputComplex(Complex& c) {
    double r, i;
    cout << "Enter real part: ";
    cin >> r;
    cout << "Enter imaginary part: ";
    cin >> i;
    c.SetComplex(r, i);
}

Complex& Complex::InpAndRetComplex() {
    double r, i;
    cout << "Enter real part: ";
    cin >> r;
    cout << "Enter imaginary part: ";
    cin >> i;
    SetComplex(r, i);
    return *this;
}

Complex Complex::AddComplex(const Complex& other) const {
    return Complex(real + other.real, imag + other.imag);
}
