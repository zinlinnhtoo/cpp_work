#ifndef _CreditLineAccount_H
#define _CreditLineAccount_H
#include "Account.h"

class CreditLineAccount: public Account
{
	int creditLine;

public:
	CreditLineAccount(
		int accountNo,
		const String& name,
		int balance,
		int creditLimit
	);

	int withdraw(int amount);

};

#endif // !_CreditLineAccount_H



