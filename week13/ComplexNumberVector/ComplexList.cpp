#include "ComplexList.h"
#include <iostream>
using namespace std;

ComplexList::ComplexList() {}

void ComplexList::Add(double r, double i) {
	ComplexNumber* c = new ComplexNumber(r, i);
	complexList.push_back(c);
}

void ComplexList::Display() {
	vector<ComplexNumber*>::iterator it;
	for (it = complexList.begin(); it != complexList.end(); ++it) {
		(*it)->display();
	}
}

ComplexList::~ComplexList() {
	vector<ComplexNumber*>::iterator it;
	for (it = complexList.begin(); it != complexList.end(); ++it) {
		delete* it;
	}
}