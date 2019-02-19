#include "Account.h"

double Account::getBalance()
{
	return balance;
}

Customer Account::getCustomer()
{
	return Customer();
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
