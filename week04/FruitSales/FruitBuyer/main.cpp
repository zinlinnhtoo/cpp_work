#include "FruitBuyer.h"

int main(void) {

	FruitBuyer buyer;
	buyer.money = 5000;
	buyer.numOfApple = 0;

	buyer.BuyApple(2000);
	buyer.ShowResult();

	return 0;
}