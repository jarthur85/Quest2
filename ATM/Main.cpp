#include<iostream>
#include "Account.h"
using namespace std;

//test
//update  needed
int main() {
	Account TestAccount;
	TestAccount.accountBalance = 100.00;
	TestAccount.accountNumber = 1;
	TestAccount.setSecretNumber(1234);
	cout <<"Your balance is: " << TestAccount.accountBalance << endl;
	float money;
	TestAccount.payIn(money = 1.00,TestAccount.accountNumber);
	




	return 0;
}