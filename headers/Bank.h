///////////////////////
// name: Karen and Ezekiel
// last date modified: 2/21/2019
////////////////////////

#ifndef Bank_h
#define Bank_h
#include "Account.h"
#include <vector>
#include "CheckingsAccount.h"
#include "SavingsAccount.h"

using namespace std;
// The Bank class is how a consumer interacts with the banking infrastructure.
class Bank {
private: 
	vector<Account *> accVector;
	void addAccount(Account * account);
public:
	// Construct a bank object.
	Bank();
	// Create a new account for the given user with the given initialDeposit.
	// If savings is true create a new savings account
	// otherwise create a checking account.
	Account * createAccount(Customer * customer, double initialDeposit, bool savings);
	// Make a deposit specified by amount to the given account.
	// Returns the accounts new balance.
	// Will throw an error if amount is negative.
	double MakeDeposit(double amount, Account * account);
	// Make a withdrawal specified by amount to the given account.
	// Returns the accounts new balance.
	// Will throw a domain_error if amount is negative.
	double MakeWithdrawal(double amount, Account * account);
	// Get the account associated with the customer.
	// Will search for a savings account if savings is true otherwise will search for a checking account.
	// Throws an invalid_argument if customer is not in the vector. 
	Account * GetAccount(Customer * customer, bool savings);
};
#endif

