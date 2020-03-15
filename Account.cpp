#include "Account.h"
 
float accountBalance = 0.0;
int accountNumber = 0;

Account::payIn(float a) {
	float depositAmount;
	cout << "Amount to deposit:" << endl;
	cin >> depositAmount;
	if (depositAmount > 0) {
		accountBalance= accountBalance + depositAmount;
	}
	if (accountBalance > 0) {
	
		return true;
	}
	else return false;
};

Account::payOut(float) {
	float withdrawAmount;
	cout << "Amount to withdraw:" << endl;
	cin >> withdrawAmount;
	if (withdrawAmount > 0) {
		accountBalance = accountBalance - withdrawAmount;
	}
	if (accountBalance > 0) {
		return true;
	}
	else return false;

}
