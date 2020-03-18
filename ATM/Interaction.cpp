#include "Interaction.h"
#include"Account.h"

switch (Interaction::letter)
{
case 'A':
	break;
case 'B':
	break;
case 'T':

	std::cout << "What is the account number you want to transfer money from: " << std::endl;
	std::cin >> firstAccountNumber;
	std::cout << "What is the account number you want to transfer money too: " << std::endl;
	std::cin >> secondAccountNumber;
	std::cout << " What is the amount you want to transfer: " << std::endl;
	std::cin >> transferAmount;
	std::cout << "Transferring " << transferAmount << "from " << firstAccountNumber << "to " << secondAccountNumber << std::endl;
	transferMoney(transferAmount, firstAccountNumber, secondAccountNumber) {};
	break;
case 'L':
	break;
case 'E':
	break;
default:
	break;
};