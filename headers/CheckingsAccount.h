///////////////////////
// name: Karen and Ezekiel
// last date modified: 2/21/2019
////////////////////////
#ifndef CheckingsAccount_h
#define CheckingsAccount_h
#include "Account.h"

class CheckingsAccount: protected Account {
public:
 CheckingsAccount (Customer* customer ,int  balance, int accountNum);
	double deposit(Transaction transaction);
	double withdraw(Transaction transaction);
	double addInterest();
};
#endif 
