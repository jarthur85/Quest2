#pragma once
#include <iostream>

class Account {

public:
	Account();

	int accountNumber;
	float accountBalance;
	bool payIn();
	bool payOut();

private:
	int secretNumber;

};
