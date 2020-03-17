#include "Account.h"

Account::Account() {
	accountBalance = 0.0f;
	accountNumber = 0;
	secretNumber = 0;
}



bool Account::payIn() {
	float depositAmount;
	depositAmount = 0;
	std::cout << "Amount to deposit: " << std::endl;
	std::cin >> depositAmount;

	if (depositAmount > 0) {
		Account::accountBalance = Account::accountBalance + depositAmount;
		return true;
	}
	else return false;

}

/*Account::Account.payOut(float b) {
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
