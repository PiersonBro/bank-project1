///////////////////////
// name: Karen and Ezekiel
// last date modified: 2/21/2019
////////////////////////

#ifndef Bank_h
#define Bank_h
#include "Account.h"
#include <vector>

using namespace std;
class Bank {
private: 
	vector<Account> accVector;
public:
	void addAccount(Account account);
	double MakeDeposit(double amount, Account account);
	double MakeWithdrawal(double amount, Account account);
	Account GetAccount(Customer * customer);
	Bank();
};
#endif

