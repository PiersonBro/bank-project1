///////////////////////
// name: Karen and Ezekiel
// last date modified: 2/22/2019
////////////////////////
#ifndef CheckingsAccount_h
#define CheckingsAccount_h
#include "Account.h"

class CheckingsAccount: protected Account {
public:
 	CheckingsAccount (Customer* customer ,int  balance, int accountNum);
	virtual double deposit(Transaction transaction);
	virtual double withdraw(Transaction transaction);
	virtual double addInterest();
};
#endif 
