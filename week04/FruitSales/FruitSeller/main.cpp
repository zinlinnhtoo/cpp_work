#include "FruitSeller.h"


int main(void) {
	
	FruitSeller seller;

	seller.numOfApple = 20;
	seller.money = 0;

	seller.SaleApple(2000);
	seller.ShowResult();

	return 0;
}

