#pragma once
#include <iostream>

class Account {

public:
	Account();

	int accountNumber;
	float accountBalance;
	float currentAmount;
	bool payIn(float);
	bool payOut(float);
	

private:
	int secretNumber;
	

};
//bool transferMoney(float moneyAmount, int checkingAccount, int otherCheckingAccount) {};

