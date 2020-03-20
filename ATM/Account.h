#pragma once
#include <iostream>

class Account {

public:
	Account();

	int accountNumber;
	int currentAccount;
	float accountBalance;
	float currentAmount;
	bool payIn(float, int);
	bool payOut(float, int);
	void setSecretNumber(int sn);



private:
	int secretNumber;//pin
};

bool transferMoney(float transferAmount, int firstAccount, int secondAccount);

