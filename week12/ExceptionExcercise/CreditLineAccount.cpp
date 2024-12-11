#include "CreditLineAccount.h"
#include <iostream>
#include "MyException.h"
#include "BalanceOutOfBoundsException.h"

using namespace std;

CreditLineAccount::CreditLineAccount(
	int accountNo,
	const String& name,
	int balance,
	int creditLimit
) : Account(accountNo, name, balance), creditLine(creditLimit) {}

int CreditLineAccount::withdraw(int amount) {
	int maxLimit = balance + creditLine;

	try
	{
		if (amount > 0 && amount <= maxLimit)
		{
			balance -= amount;
			cout << "Withdraw Successful." << endl;
			if (balance < 0)
			{
				cout << "Credit used. Remaining Credit limit: " << maxLimit << endl;
			}
			return amount;
		}
		else {
			throw BalanceOutOfBoundsException();
			//cout << "Withdraw exceeds limit. Remaining Credit limit: " << maxLimit << endl;
			return 0;
		}
	}
	catch (const MyException& e)
	{
		cout << e.getMessage() << endl;
	}

}