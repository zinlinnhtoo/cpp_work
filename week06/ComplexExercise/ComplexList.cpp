#include <iostream>
#include "ComplexList.h"

using std::cout;
using std::endl;

ComplexList::ComplexList(int s) {
	size = s;
	arr = new Complex[size];
}

ComplexList::ComplexList(const ComplexList& c): size(c.size) {
	cout << "Copy Constructor called" << endl;
	arr = new Complex[c.size];
	for (int i = 0; i < size; ++i) {
		arr[i] = c.arr[i];
	}
}

ComplexList::~ComplexList() {
	delete[] arr;
}

void ComplexList::Set(int n, double r, double i) {
	if (n >= 0 && n < size)
	{
		arr[n].SetComplex(r, i);
	}
	else
	{
		cout << "Index out of range" << endl;
	}
}

Complex& ComplexList::Get(int n) {
	if (n >= 0 && n < size)
	{
		return arr[n];
	}
	else
	{
		cout << "Index out of range" << endl;
		return arr[0];
	}
}

int ComplexList::Length() const {
	return size;
}