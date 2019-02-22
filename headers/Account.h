///////////////////////
// name: Karen and Ezekiel
// last date modified: 2/21/2019
////////////////////////

#include <iostream>
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
	Transaction* TransArray[];

public:
	double getBalance();
	Customer * getCustomer();
	string to_string();   // what does this do ?
	void setCustomer(Customer* newcustomer);
	void setBalance(int newbalance);


};
#endif
