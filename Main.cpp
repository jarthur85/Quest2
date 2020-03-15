#include<iostream>;
#include "Account.cpp";
using namespace std;

//test

int main() {
	Account TestAccount;
	TestAccount.accountBalance = 100.00;
	TestAccount.accountNumber = 1;
	cout << accountBalance << endl;

	TestAccount.payIn();
	TestAccount.payOut();




	return 0;
}