#include "Account.h"
#include "Database.h"
#include "Interaction.h"
#include <vector>



Account::Account() {
	accountBalance = 0.0f;
	accountNumber = 0;
	secretNumber = 0;
}



bool Account::payIn(float depositAmount) {
	
	
	//std::cout << "Amount to deposit: " << std::endl;
	//std::cin >> depositAmount;

	if (depositAmount > 0) {
		Account::accountBalance = Account::accountBalance + depositAmount;
		return true;
	}
	else return false;

}

bool Account::payOut( float withdrawAmount) {
	float withdrawAmount;
	std::cout << "Amount to withdraw:" << std::endl;
	std::cin >> withdrawAmount;

	if (withdrawAmount > 0) {
		Account::accountBalance = Account::accountBalance - withdrawAmount;
	}
	if (accountBalance > 0) {
		return true;
	}
	else return false;

}
bool transferMoney(float transferAmount, int firstAccountNumber, int secondAccountNumber) {

	//add definition

};



