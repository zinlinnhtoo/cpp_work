#ifndef _FRUITBUYER_H_
#define _FRUITBUYER_H_
#include "FruitSeller.h"

class FruitBuyer {
public:
	int money;
	int numOfApple;

	void BuyApple(FruitSeller& s, int m);
	void ShowResult(void);
};

#endif // _FRUITBUYER_H_

