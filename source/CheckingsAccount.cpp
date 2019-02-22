///////////////////////
// name: Karen and Ezekiel
// last date modified: 2/22/2019
////////////////////////
#include "CheckingsAccount.h"

CheckingsAccount::CheckingsAccount (Customer* customer ,int  balance, int accountNum): Account (customer, balance, accountNum) {}

//put new transaction in the vector in order to return the amount deposited
double CheckingsAccount::deposit(Transaction transaction)
{
	transactions.push_back(transaction);
	return transaction.getAmount();
}

//pu the new transation in the vector inorder to return amount that has been withdrawn 
double CheckingsAccount::withdraw(Transaction transaction)
{
	transactions.push_back(transaction);
	return transaction.getAmount();
}

//
double CheckingsAccount::addInterest()
{
	double amount = getCustomer()->getCheckInterest() * getBalance() + getBalance();
	Transaction transaction(0, "addInterest", amount, "");
	transactions.push_back(transaction);
	this->setBalance(transaction);
	return amount;
}
