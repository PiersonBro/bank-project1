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
	// return name, age id and account number
	// I had to look up the to_string function on C++ reference.
	string displayString = customer->getName() + " " + std::to_string(customer->getAccountNum());
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
