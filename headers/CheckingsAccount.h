///////////////////////
// name: Karen and Ezekiel
// last date modified: 2/21/2019
////////////////////////
#ifndef CheckingsAccount_h
#define CheckingsAccount_h
#include "Account.h"

class CheckingsAccount {
public:
	double deposit(Transaction transaction);
	double withdraw(Transaction transaction2);
	double addInterest(Transaction transaction3);
};
#endif 
