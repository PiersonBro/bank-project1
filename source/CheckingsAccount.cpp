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
	double amount = 0;
	string fees = "";
	if (transaction.getAmount() > getCustomer()->getCheckCharge()) {
		amount = transaction.getAmount() + getBalance() - getCustomer()->getCheckCharge(); 
		fees = "A fee of $" + std::to_string(getCustomer()->getCheckCharge()) + " was added.";
	} else {
		amount = transaction.getAmount() + getBalance();
	}
	
	Transaction t(0, "deposit", amount, fees);
	setBalance(t);
	return getBalance();
}

//put the new transation in the vector inorder to return amount that has been withdrawn 
double CheckingsAccount::withdraw(Transaction transaction)
{
	transactions.push_back(transaction);
	double amount = getBalance() - transaction.getAmount();
	string fees = "";
	if (amount < 0) {
		amount = amount - getCustomer()->getOverdraftPenalty();
		fees = "A fee of $" + std::to_string(getCustomer()->getOverdraftPenalty()) + " was added.";
	}
	Transaction t(0, "withdraw", amount, fees);
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
