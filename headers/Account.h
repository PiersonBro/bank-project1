///////////////////////
// name: Karen and Ezekiel
// last date modified: 2/22/2019
////////////////////////

#include <iostream>
#include <vector>
using namespace std;
#ifndef Account_h
#define Account_h

#include "Customer.h"
#include "Transaction.h"
// The Account class represents the amount of money a customer has given to the bank.
class Account {
private:
	Customer* customer;
	int balance;
	int accountNum;
protected:
		vector<Transaction> transactions;
		// For subclass use only set the account balance.
		void setBalance(Transaction transaction);
public:

	// Construct an account object (note you actually want a subcalss such as CheckingsAccount or SavingsAccount)
	// Customer - the customer who owns the account.
	// balance - the initial amount of money in the account.
	// accountNum - the unqiue ID number associated with the account.
 	Account ( Customer* customer ,int  balance, int accountNum);
	// The current balance in the account.
	double getBalance();
	// Get the customer who owns this account. 
	Customer * getCustomer();
	// Return name, age, and account number
	string to_string();
	// Set the customer who owns the account.
	void setCustomer(Customer* newcustomer);
	virtual double deposit(Transaction transaction) = 0;
	virtual double withdraw(Transaction transaction) = 0;
	virtual double addInterest() = 0;
	// These virtual functions expose the basic banking functions.
	// Transaction - the transaction containing the money to deposit or withdraw.
	// returns nothing.
	// Appreciates teh balance according to the interest rate set in the customer class.
	// It is the consumers responsibility to determine when to call add interest.
};
#endif
