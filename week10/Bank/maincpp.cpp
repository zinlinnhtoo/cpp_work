#include <iostream>
#include "String.h"
#include "Account.h"
#include "CheckingAccount.h"
#include "CheckingTrafficCardAccount.h"
#include "CreditLineAccount.h"
#include "BonusPointAccount.h"

using std::cout;
using std::endl;



int main() {

	//Account
	/*Account ac1(123, "zinlinnhtoo", 1000);
	Account ac2(1234, "linnhtoo");
	ac1.check();
	ac1.deposit(1000);
	ac1.check();
	ac1.withdraw(1000);
	ac1.check();
	ac1.withdraw(3000);
	ac1.check();

	ac2.check();*/

	//Checking Account
	/*CheckingAccount cka1(1234, "htoo", 1000, "445");
	
	cka1.deposit(1000);
	cka1.check();

	cka1.pay("445", 200);
	cka1.check();

	cka1.pay("446", 200);
	cka1.check();

	cka1.pay("445", 10000);
	cka1.check();*/

	//Checking Traffic Account
	/*CheckingTrafficCardAccount trafficCard(1234, "Linn", 1000, "332", true);

	trafficCard.check();
	trafficCard.payTrafficCard("332", 500);
	trafficCard.check();
	trafficCard.payTrafficCard("330", 500);
	trafficCard.check();

	CheckingTrafficCardAccount notrafficCard(12345, "Linn", 1000, "335", false);
	notrafficCard.check();
	notrafficCard.payTrafficCard("332", 500);
	notrafficCard.check();*/

	//Credit Line Account
	/*CreditLineAccount overDraftAccount(12345, "Zin", 500, 300);
	overDraftAccount.check();

	overDraftAccount.withdraw(400);
	overDraftAccount.check();

	overDraftAccount.withdraw(300);
	overDraftAccount.check();

	overDraftAccount.withdraw(200);
	overDraftAccount.check();

	overDraftAccount.deposit(200);
	overDraftAccount.check();*/

	//Bonus Point Account
	/*BonusPointAccount bpAcc(123456, "Zin Linn Htoo", 1000);
	bpAcc.check();

	bpAcc.deposit(1000);
	bpAcc.check();

	bpAcc.deposit(1000);
	bpAcc.check();*/


	return 0;
}