///////////////////////
// name: Karen and Ezekiel
// last date modified: 2/21/2019
////////////////////////
#include "CheckingsAccount.h"

double CheckingsAccount::deposit(Transaction transaction)
{
	transactions.push_back(transaction);
	return transaction.getAmount();
}

double CheckingsAccount::withdraw(Transaction transaction)
{
	transactions.push_back(transaction);
	return transaction.getAmount();
}

double CheckingsAccount::addInterest()
{
	double amount = getCustomer()->getCheckInterest() * getBalance() + getBalance();
	Transaction transaction(0, "addInterest", amount, "");
	transactions.push_back(transaction);
	this->setBalance(transaction);
	return amount;
}
