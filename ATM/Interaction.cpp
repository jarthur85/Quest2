#include "Interaction.h"
#include"Account.h"


char Interaction::displayScreen() {
	std::cout << "What would you like to do? Pick a letter." << std::endl;
	std::cout << "{A} Create New Account" << std::endl;
	std::cout << "{B} Get Account Balance" << std::endl;
	std::cout << "{M} Make a Deposit" << std::endl;
	std::cout << "{W} Withdraw Money" << std::endl;
	std::cout << "{T} Transfer Money" << std::endl;
	std::cout << "{L} Log Out" << std::endl;
	std::cout << "{E} Exit Program" << std::endl;
	char choice;
	std::cin >> choice;
	return choice;
}
Interaction interaction;
char userChoice = interaction.displayScreen();
void Interaction::screenInteraction(char userChoice){
	Account account ;
	letter = userChoice;
	
	switch (letter)
	{
	case 'A'://creat a new accout-
	case 'a':
		
		break;

	case 'B': std::cout << account.accountBalance << std::endl;
	case 'b':
		
		break;
	case 'M':
	case'm': std::cout << "How much would you like to deposit?" << std::endl;
		float deposit;
		std::cin >> deposit;
		account.accountBalance = account.accountBalance + deposit;
		break;

	case 'W':std::cout << "How much would you like to withdraw" << std::endl;
		float withdraw;
		std::cin >> withdraw;
	case 'w': account.payOut(withdraw ,account.accountNumber );

	case 'T':
	case 't':

		std::cout << "What is the account number you want to transfer money from: " << std::endl;
		std::cin >> Interaction::firstAccountNumber;
		std::cout << "What is the account number you want to transfer money too: " << std::endl;
		std::cin >> Interaction::secondAccountNumber;
		std::cout << " What is the amount you want to transfer: " << std::endl;
		std::cin >> Interaction::transferAmount;
		std::cout << "Transferring " << Interaction::transferAmount << "from " 
			<< Interaction::firstAccountNumber <<"to " << Interaction::secondAccountNumber << std::endl;
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
