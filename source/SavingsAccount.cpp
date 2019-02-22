#include "SavingsAccount.h"

double SavingsAccount::deposit(Transaction transaction)
{
	return transaction.getAmount();
}

double SavingsAccount::withdraw(Transaction transaction2)
{
	return transaction2.getAmount();
}

double SavingsAccount::addInterest(Transaction transaction3)
{
	return 0;
}
