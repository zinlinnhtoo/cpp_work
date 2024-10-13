#ifndef _COMPLEX_H_
#define _COMPLEX_H_

class Complex {
	double real, image;

public:
	Complex(double r = 0, double i = 0) : real(r), image(i) {};

	void SetComplex(double r, double i);

	double GetReal(void) const;
	double GetImage(void) const;

	void ShowComplex(void) const;

	void InputComplex();

	Complex AddComplex(const Complex& other) const;
	
};

#endif // !_COMPLEX_H_

