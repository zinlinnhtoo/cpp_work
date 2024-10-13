#ifndef COMPLEX_H
#define COMPLEX_H

class Complex {
private:
    double real;  // Real part
    double imag;  // Imaginary part

public:
    Complex(double r = 0.0, double i = 0.0);

    void SetComplex(double r, double i);

    double GetReal() const;

    double GetImaginary() const;

    void ShowComplex() const;

    void InputComplex();

    void InputComplex(Complex* c);

    void InputComplex(Complex& c);

    Complex& InpAndRetComplex();

    Complex AddComplex(const Complex& other) const;
};

inline Complex::Complex(double r, double i) : real(r), imag(i) {

}

#endif
