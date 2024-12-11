#include "Account.h"
#include <iostream>
#include "String.h"
#include "MyException.h"
#include "MalformedData.h"
#include "BalanceOutOfBoundsException.h"

using namespace std;

Account::Account(int accountNo, const String& name, int balance) :
	accountNo(accountNo), name(name), balance(balance)
{
}

void Account::check() const {
	cout << "Account No: " << accountNo << endl;
	cout << "Name: " << name << endl;
	cout << "Balance: " << balance << endl;
}

void Account::deposit(int amount) {

	try
	{
		if (amount > 0)
		{
			balance += amount;
			cout << "Deposite successful." << endl;
		}
		else
		{
			throw MalformedData();
		}
	}
	catch (const MyException& e)
	{
		cout << e.getMessage() << endl;
	}

	
}

int Account::withdraw(int amount) {
	try
	{
		if (balance >= amount && amount > 0)
		{
			balance -= amount;
			cout << "Withdraw successful" << endl;
			return 1;
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
