#include "CheckingsAccoun.h"

double CheckingsAccount::deposit(Transaction transaction)
{
	return transaction.getAmount();
}

double CheckingsAccount::withdraw(Transaction transaction2)
{
	return transaction2.getAmount();
}

double CheckingsAccount::addInterest(Transaction transaction3)
{
	//add monthly or yearly interest rate
	return 0;
}
