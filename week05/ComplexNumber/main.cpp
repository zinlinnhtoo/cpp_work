#include "Complex.h"
#include <iostream>
#include "Complex.cpp"

using std::cout;
using std::endl;

int main(void) {

    Complex c1, c2;

    cout << "Input first complex number:\n";
    c1.InputComplex();

    cout << "Input second complex number:\n";
    c2.InputComplex();

    Complex sum = c1.AddComplex(c2);

    cout << "First complex number: ";
    c1.ShowComplex();
    cout << "Second complex number: ";
    c2.ShowComplex();
    cout << "Sum: ";
    sum.ShowComplex();

    return 0;
}