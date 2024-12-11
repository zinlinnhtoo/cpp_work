#ifndef _CHECKING_ACCOUNT_H
#define _CHECKING_ACCOUNT_H

#include "Account.h"

class CheckingAccount: public Account 
{
protected:
	String cardNo;

public: 
	CheckingAccount(
		int accountNo,
		const String& name,
		int balance,
		const String& cardNo);

	int pay(const String& cardNo, int amount);
};

#endif // !_CHECKING_ACCOUNT_H



