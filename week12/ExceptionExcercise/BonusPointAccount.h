#ifndef _BonusPointAccount_H
#define _BonusPointAccount_H

#include "Account.h"

class BonusPointAccount: public Account 
{
	int bonusPoint;

public:
	BonusPointAccount(
		int accountNo,
		const String& name,
		int balance
	);

	void deposit(int amount);
	void check() const;
};


#endif // !_BonusPointAccount_H


