#include "CheckingTrafficCardAccount.h"
#include <iostream>

using namespace std;

CheckingTrafficCardAccount::CheckingTrafficCardAccount(
	int accountNo,
	const String& name,
	int balance,
	const String& cardNo,
	bool hasTraffic
) : CheckingAccount(accountNo, name, balance, cardNo), hasTrafficCard(hasTraffic) {}

int CheckingTrafficCardAccount::payTrafficCard(const String& cardNumber, int amount) {
	if (!hasTrafficCard)
	{
		cout << "This card is not traffic card." << endl;
		return 0;
	}

	if (cardNo == cardNumber)
	{
		cout << "Card Number is match." << endl;
	}
	else {
		cout << "Card Number is mixmatch." << endl;
		return 0;
	}

	if (amount > 0 && amount <= balance)
	{
		balance -= amount;
		cout << "Payment successful." << endl;
		return amount;
	}
	else {
		cout << "Insufficent balance or Invalid payment amount." << endl;
		return 0;
	}
}
