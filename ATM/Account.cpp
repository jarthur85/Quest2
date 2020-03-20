#include "Account.h"
#include "Database.h"
#include "Interaction.h"
#include <vector>



Account::Account() {
	accountBalance = 0.0f;
	accountNumber = 0;
	secretNumber = 0;
}


//check account number?
bool Account::payIn(float depositAmount) {
	
	if (depositAmount > 0) {
		Account::accountBalance = Account::accountBalance + depositAmount;
		return true;
	}
	else return false;

}

bool Account::payOut( float withdrawAmount) {
	
	if (withdrawAmount < Account::accountBalance) {
		Account::accountBalance = Account::accountBalance - withdrawAmount;

		if (accountBalance > 0) {
			return true;
		}
	}
	 return false;

}
void Account::setSecretNumber(int sn) {
	secretNumber = sn;
}
Account account;
bool transferMoney(float transferAmount, int firstAccount, int secondAccount) {
	//add account info to know where to take and put money
	account.payOut(transferAmount);
	account.payIn(transferAmount);

};







