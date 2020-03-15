#include "Account.h"
 
float accountBalance = 0.0;
int accountNumber = 0;

Account::payIn(float a) {
	float amount;
	cout << "Amount to deposit:" << endl;
	cin >> amount;
	amount = amount + accountBalance;
	return amount;
};

Account::payOut(float) {
	float amount;
	cout << "Amount to withdraw:" << endl;
	cin >> amount;
	amount = accountBalance - amount;
	return amount;

}
