#ifndef _COMPLEXLIST_H
#define _COMPLEXLIST_H

#include <vector>
#include "ComplexNumber.h"


class ComplexList
{
	std::vector<ComplexNumber*> complexList;

public:
	ComplexList();

	void Add(double r, double i);
	void Display();

	~ComplexList();
};

#endif // !_COMPLEXLIST_H



