#ifndef _COMPLEXLIST_H_
#define _COMPLEXLIST_H_

#include "Complex.h"

class ComplexList {
	Complex* arr;
	int size;

public:
	ComplexList(int s = 10);

	~ComplexList();

	void Set(int n, double r, double i);

	Complex& Get(int n);

	int Length() const;

};


#endif // !_COMPLEXLIST_H_

