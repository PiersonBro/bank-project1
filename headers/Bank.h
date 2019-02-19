#ifndef Bank_h
#define Bank_h
#include "Account.h"

using namespace std;
class Bank {
private: 
	Account* accArray[];
public:
	Account* addAccount();
	double MakeDeposit();
	double MakeWithdrawal();
	Account* GetAccount();

};
#endif

