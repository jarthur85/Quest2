#pragma once
class Account{

public:
	int accountNumber;
	float accountBalance;
	bool payIn(float a);
	bool payOut();
	Account();
private:
	int secretNumber;
	
};

