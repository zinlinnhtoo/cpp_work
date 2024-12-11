#ifndef _COMPLEXNUMBER_H
#define _COMPLEXNUMBER_H

class ComplexNumber
{
public:
	double real;
	double imag;

	ComplexNumber(double r, double i);

	void display() const;
};


#endif // !_COMPLEXNUMBER_H


