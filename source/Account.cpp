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
	return string();
}

void Account::setCustomer(Customer* newcustomer)
{
	customer = newcustomer;
}

void Account::setBalance(int newbalance)
{
	balance = newbalance;
}
