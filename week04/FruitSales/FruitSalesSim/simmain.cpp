#include "FruitBuyer.h"
#include "FruitSeller.h"
#include <iostream>

using std::cout;

int main(void) {

	FruitSeller seller;
	seller.numOfApple = 20;
	seller.money = 0;

	FruitBuyer buyer;
	buyer.money = 5000;
	buyer.numOfApple = 0;

	int m = 2000;
	buyer.BuyApple(seller, m);
	seller.SaleApple(m);

	cout << "seller: \n";
	seller.ShowResult();

	cout << "buyer: \n";
	buyer.ShowResult();

}