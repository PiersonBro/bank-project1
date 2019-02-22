///////////////////////
// name: Karen and Ezekiel
// last date modified: 2/21/2019
////////////////////////
#ifndef SavingsAccount_h
#define SavingsAccount_h
#include "Account.h"

class SavingsAccount: protected Account {
public:
SavingsAccount ( Customer* customer, int balance, int accountNum);
	double deposit(Transaction transaction);
	double withdraw(Transaction transaction);
	double addInterest();
};

#endif
