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
	double getBalance();
	Customer * getCustomer();
	string to_string();   // what does this do ?
	void setCustomer(Customer* newcustomer);
	void setBalance(Transaction transaction);


};
#endif
