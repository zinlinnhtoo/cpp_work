#include <iostream>
#include "Complex.h"
#include "ComplexList.h"

using namespace std;

int main() {
    //Complex c1, c2;

    //cout << "Input first complex number using method:\n";
    //c1.InputComplex();

    //cout << "Input second complex number using pointer:\n";
    //c2.InputComplex(&c2);

    //Complex sum = c1.AddComplex(c2);

    //cout << "First complex number: ";
    //c1.ShowComplex();
    //cout << "Second complex number: ";
    //c2.ShowComplex();
    //cout << "Sum: ";
    //sum.ShowComplex();

    //cout << "Input third complex number using reference:\n";
    //Complex c3;
    //c3.InputComplex(c3);

    //Complex sum2 = c1.AddComplex(c3);
    //cout << "Sum of first and third complex number: ";
    //sum2.ShowComplex();

    //// Using InpAndRetComplex
    //cout << "Input fourth complex number using InpAndRetComplex:\n";
    //Complex c4;
    //c4.InpAndRetComplex();
    //cout << "Fourth complex number: ";
    //c4.ShowComplex();


    ComplexList cl1(10);
    ComplexList cl2(5);

    for (int i = 0; i < cl1.Length(); i++)
    {
        cl1.Set(i, i + 1, (i + 1) * 2);
    }

    cout << "Complex number in cl1: " << endl;
    for (int i = 0; i < cl1.Length(); i++)
    {
        cout << "Element " << i << ":";
        cl1.Get(i).ShowComplex();
    }

    for (int i = 0; i < cl2.Length(); i++)
    {
        cl2.Set(i, (i + 1) * 2, i + 1);
    }

    cout << "Complex number in cl2: " << endl;
    for (int i = 0; i < cl2.Length(); i++)
    {
        cout << "Element " << i << ":";
        cl2.Get(i).ShowComplex();
    }

    return 0;
}
