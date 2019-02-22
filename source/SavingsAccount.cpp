///////////////////////
// name: Karen and Ezekiel
// last date modified: 2/21/2019
////////////////////////
#include "SavingsAccount.h"

SavingsAccount::SavingsAccount ( Customer* customer, int balance, int accountNum): Account  (customer, balance, accountNum) {}

double SavingsAccount::deposit(Transaction transaction)
{
	transactions.push_back(transaction);
	return transaction.getAmount();
}

double SavingsAccount::withdraw(Transaction transaction)
{
	transactions.push_back(transaction);
	return transaction.getAmount();
}

double SavingsAccount::addInterest()
{
	double amount = getCustomer()->getSavingsInterest() * getBalance() + getBalance();
	Transaction transaction(0, "addInterest", amount, "");
	transactions.push_back(transaction);
	this->setBalance(transaction);
	return amount ;
}
