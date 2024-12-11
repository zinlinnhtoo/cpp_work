#include "BonusPointAccount.h"
#include <iostream>
#include "MyException.h"
#include "MalformedData.h"
#include "BalanceOutOfBoundsException.h"

using namespace std;

BonusPointAccount::BonusPointAccount(int accountNo,
	const String& name,
	int balance
) : Account(accountNo, name, balance), bonusPoint(0) {}

void BonusPointAccount::deposit(int amount) {
	try
	{
		if (amount > 0)
		{
			balance += amount;
			int pointEarned = amount * 0.001;
			bonusPoint += pointEarned;
			cout << "Deposit Successful.\n" << endl;
		}
		else {
			throw MalformedData();
		}
	}
	catch (const MyException& e)
	{
		cout << e.getMessage() << endl;
	}
}

void BonusPointAccount::check() const {
	cout << "Account Number: " << accountNo << endl;
	cout << "Name: " << name << endl;
	cout << "Balance: " << balance << endl;
	cout << "Bonus point: " << bonusPoint << endl;
}
