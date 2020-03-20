#include "Database.h"
#include "Account.h"

bool Database::find(int accountNumber) {
	
	for (int i = 0; i < accounts.size(); i++) {
		if (accounts[i].accountNumber == accountNumber) {
			return true;
		}

	} return false;
	//look in the vector and find the account with matching numbers
}