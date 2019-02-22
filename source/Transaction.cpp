///////////////////////
// name: Karen and Ezekiel
// last date modified: 2/21/2019
////////////////////////
#include "Transaction.h"

Transaction::Transaction(int customerNumber, string transactionType, double amount, string fees) {
	CustomerNumber = customerNumber;
	this->transactionType = transactionType;
	Amount = amount;
	Fees = fees;
}


double Transaction::getAmount()
{
	return Amount;
}
