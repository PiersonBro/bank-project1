#ifndef SavingsAccount_h
#define SavingsAccount_h
#include "Account.h"

class SavingsAccount {
public:
	double deposit( Transaction transaction);
	double withdraw(Transaction transaction2);
	double addInterest(Transaction transaction3);
};

#endif