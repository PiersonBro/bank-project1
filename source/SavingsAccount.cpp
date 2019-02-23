///////////////////////
// name: Karen and Ezekiel
// last date modified: 2/21/2019
////////////////////////
#include "SavingsAccount.h"

SavingsAccount::SavingsAccount ( Customer* customer, int balance, int accountNum): Account  (customer, balance, accountNum) {}

double SavingsAccount::deposit(Transaction transaction)
{
	transactions.push_back(transaction);
	double amount = transaction.getAmount() + getBalance();
	Transaction t(0, "deposit", amount, "");
	setBalance(t);
	return getBalance();
}

double SavingsAccount::withdraw(Transaction transaction)
{
	transactions.push_back(transaction);
	double amount = getBalance() - transaction.getAmount();
	string fees = "";
	if (amount < 0) {
		amount = amount - getCustomer()->getOverdraftPenalty();
		fees = "A fee of $" + std::to_string(getCustomer()->getOverdraftPenalty()) + " was added.";
	}
	Transaction t(0, "withdraw", amount, fees);
	setBalance(t);
	return transaction.getAmount();
}

double SavingsAccount::addInterest()
{
	double amount = getCustomer()->getSavingsInterest() * getBalance() + getBalance();
	Transaction transaction(0, "addInterest", amount, "");
	transactions.push_back(transaction);
	this->setBalance(transaction);
	return getBalance();
}
