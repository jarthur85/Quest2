#include "Account.h"
#include "Database.h"
#include "Interaction.h"
#include <vector>



Account::Account() {
	accountBalance = 0.0f;
	accountNumber = 0;
	secretNumber = 0;
}



bool Account::payIn(float depositAmount, int currentAccount) {
	Account::accountNumber = currentAccount;
	if (depositAmount > 0) {
		Account::accountBalance = Account::accountBalance + depositAmount;
		return true;
	}
	else return false;

}

bool Account::payOut( float withdrawAmount, int currentAccount) {
	Account::accountNumber = currentAccount;
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
	account.accountNumber = firstAccount;
	if (account.accountBalance > transferAmount) {
		account.payOut(transferAmount, firstAccount);
	}
	account.accountNumber = secondAccount;
	if(account.accountBalance)
	account.payIn(transferAmount, secondAccount);

	if (!false) {
		return true;
	}
	else return false;

};







