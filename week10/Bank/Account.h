#ifndef _ACCOUNT_H
#define _ACCOUNT_H
#include "String.h"

class Account
{
protected:
	int accountNo;
	String name;
	int balance;

public:
	Account(int accountNo,const String& name, int balance = 0);

	void deposit(int amount);
	int withdraw(int amount);
	void check() const;
};

#endif // !_ACCOUNT_H



