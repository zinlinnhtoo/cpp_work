#include "FruitBuyer.h"
#include <iostream>

using std::cout;
using std::endl;

void FruitBuyer::BuyApple(int m) {
	
	money -= m;
	numOfApple += m / 1000;

}

void FruitBuyer::ShowResult() {

	cout << "Total amout: " << money << endl;
	cout << "Number of apple: " << numOfApple << endl;

}