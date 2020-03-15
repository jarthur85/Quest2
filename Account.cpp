#include "Account.h"

Account::Account();
 

Account::payIn(float a) {
	float depositAmount;
	depositAmount = a;
	cout << "Amount to deposit: " << endl;
	cin >> depositAmount;

	if (depositAmount > 0;) {
		Account::accountBalance = Account::accountBalance + depositAmount;
		return true;
	}
	else return false;
	
}

/*Account::Account.payOut(float) {
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

}*/
