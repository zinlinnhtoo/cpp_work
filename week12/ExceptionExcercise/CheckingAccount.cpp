#include "CheckingAccount.h"
#include <iostream>
#include "BalanceOutOfBoundsException.h"
#include "MyException.h"

using namespace std;

CheckingAccount::CheckingAccount(
	int accountNo,
	const String& name,
	int balance,
	const String& cardNo) :
	Account(accountNo, name, balance), cardNo(cardNo) {}

int CheckingAccount::pay(const String& cardNumber, int amount) {
	if (cardNo == cardNumber)
	{
		cout << "Account is match." << endl;
	}
	else
	{
		cout << "Account is mixmatch." << endl;
		return 0;
	}

	try
	{
		if (amount > 0 && amount <= balance)
		{
			balance -= amount;
			cout << "Payment successful." << endl;
			return amount;
		}
		else {
			throw BalanceOutOfBoundsException();
			return 0;
		}
	}
	catch (const MyException& e)
	{
		cout << e.getMessage() << endl;
	}
}