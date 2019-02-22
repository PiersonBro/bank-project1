///////////////////////
// name: Karen and Ezekiel
// last date modified: 2/21/2019
////////////////////////

#include <iostream>
#include <vector>
using namespace std;
#ifndef Account_h
#define Account_h

#include "Customer.h"

#include "Transaction.h"

class Account {
private:
	Customer* customer;
	int balance;
	int accountNum;
protected:
		vector<Transaction> transactions;
public:
 Account ( Customer* customer ,int  balance, int accountNum)
 {
	 this->customer = customer;
    this-> balance = balance;
	this -> accountNum = accountNum;
 }
	// The current balance in the account.
	double getBalance();
	Customer * getCustomer();
	// Return name, age, and account number
	string to_string();
	// Set the customer who owns the account.
	void setCustomer(Customer* newcustomer);
	// Set the balance.
	void setBalance(Transaction transaction);


};
#endif
