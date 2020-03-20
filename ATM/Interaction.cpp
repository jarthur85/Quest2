#include "Interaction.h"
#include"Account.h"

//Interaction interaction;
void Interaction::displayScreen() {
	Account account ;
	//char letter ='z';
	switch (letter)
	{
	case 'A'://creat a new accout-also add withdraw and deposit
	case 'a':
		break;

	case 'B': std::cout << account.accountBalance << std::endl;
	case 'b':
		break;

	case 'T':
	case 't':

		std::cout << "What is the account number you want to transfer money from: " << std::endl;
		std::cin >> interaction.firstAccountNumber;
		std::cout << "What is the account number you want to transfer money too: " << std::endl;
		std::cin >> interaction.secondAccountNumber;
		std::cout << " What is the amount you want to transfer: " << std::endl;
		std::cin >> interaction.transferAmount;
		std::cout << "Transferring " << interaction.transferAmount << "from " << interaction.firstAccountNumber <<
			"to " << interaction.secondAccountNumber << std::endl;
		bool transferMoney(float transferAmount, int firstAccount, int secondAccount);
		break;
	case 'L':
	case'l': account.accountNumber = NULL;
		break;

	case 'E': //return 0;
	case 'e':
		break;

	default:
		break;
	};
};
