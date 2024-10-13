#include <iostream>
#include "Child.h"

using std::cout;
using std::endl;

int Child::getMarbles() const {
	return marbles;
}

void Child::addMarbles(int count) {
	if (count > 0)
	{
		marbles += count;
	}
}

void Child::removeMarbles(int count) {
	if (count > 0 && count <= marbles)
	{
		marbles -= count;
	}
	else if (count > marbles) {
		marbles = 0;
	}
}