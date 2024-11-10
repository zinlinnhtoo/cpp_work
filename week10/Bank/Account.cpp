#include "Account.h"
#include <iostream>
#include "String.h"

using namespace std;

Account::Account(int accountNo, const String& name, int balance) :
	accountNo(accountNo), name(name), balance(balance)
{
}

void Account::check() const {
	cout << "Account No: " << accountNo << endl;
	cout << "Name: " << name << endl;
	cout << "Balance: " << balance << "\n" << endl;
}

void Account::deposit(int amount) {
	if (amount > 0)
	{
		balance += amount;
		cout << "Deposite successful." << endl;
	}
	else
	{
		cout << "Invalid deposit amount.\n" << endl;
	}
}

int Account::withdraw(int amount) {
	if (balance >= amount && amount > 0)
	{
		balance -= amount;
		cout << "Withdraw successful" << endl;
	}
	else {
		cout << "Insufficient balance or invalid withdraw amount.\n" << endl;
		return 0;
	}
}
