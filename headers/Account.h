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
	// Set the balance.
	void setBalance(Transaction transaction);
};
#endif
