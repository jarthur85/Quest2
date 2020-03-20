#pragma once
#include <iostream>

class Account {

public:
	Account();

	int accountNumber;
	int currentAccount;
	float accountBalance;
	float currentAmount;
	bool payIn(float);
	bool payOut(float);
	void setSecretNumber(int sn);



private:
	int secretNumber;//pin
};

bool transferMoney(float transferAmount, int firstAccount, int secondAccount);

