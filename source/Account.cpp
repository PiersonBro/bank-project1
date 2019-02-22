///////////////////////
// name: Karen and Ezekiel
// last date modified: 2/21/2019
////////////////////////
#include "Account.h"

double Account::getBalance()
{
	return balance;
}

Customer * Account::getCustomer()
{
	return customer;
}

string Account::to_string()
{
	// I had to look up the to_string function on C++ reference.
	string displayString = "Name: " + customer->getName() + " Age: " + std::to_string(customer->getAge()) + " account number: " + std::to_string(customer->getAccountNum());
	return displayString;
}

void Account::setCustomer(Customer* newcustomer)
{
	customer = newcustomer;
}

void Account::setBalance(Transaction transaction)
{
	balance = transaction.getAmount();
}
