///////////////////////
// name: Karen and Ezekiel
// last date modified: 2/21/2019
////////////////////////
#ifndef SavingsAccount_h
#define SavingsAccount_h
#include "Account.h"
// SavingsAccount is a concrete subclass of account.
// See account for more documentation
class SavingsAccount: public Account {
public:
	SavingsAccount ( Customer* customer, int balance, int accountNum);
	virtual double deposit(Transaction transaction);
	virtual double withdraw(Transaction transaction);
	virtual double addInterest();
};

#endif
