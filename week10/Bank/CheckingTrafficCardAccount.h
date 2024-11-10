#ifndef _CheckingTrafficCardAccount_H
#define _CheckingTrafficCardAccount_H

#include "CheckingAccount.h"

class CheckingTrafficCardAccount: public CheckingAccount
{
	bool hasTrafficCard;

public:
	CheckingTrafficCardAccount(
		int accountNo,
		const String& name,
		int balance,
		const String& cardNo,
		bool hasTraffic
	);

	int payTrafficCard(const String& cardNo, int amount);
};


#endif // !_CheckingTrafficCardAccount_H



