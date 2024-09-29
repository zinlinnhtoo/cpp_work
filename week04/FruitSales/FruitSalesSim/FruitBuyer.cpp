#include "FruitBuyer.h"
#include <iostream>

using std::cout;
using std::endl;

void FruitBuyer::BuyApple(FruitSeller& s,int m) {
	
	money -= m;
	numOfApple += s.SaleApple(m);

}

void FruitBuyer::ShowResult() {

	cout << "Total amout: " << money << endl;
	cout << "Number of apple: " << numOfApple << endl;

}