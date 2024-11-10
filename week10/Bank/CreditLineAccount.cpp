#include "CreditLineAccount.h"
#include <iostream>

using namespace std;

CreditLineAccount::CreditLineAccount(
	int accountNo,
	const String& name,
	int balance,
	int creditLimit
) : Account(accountNo, name, balance), creditLine(creditLimit) {}

int CreditLineAccount::withdraw(int amount) {
	int maxLimit = balance + creditLine;

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
		cout << "Withdraw exceeds limit. Remaining Credit limit: " << maxLimit << endl;
		return 0;
	}

}