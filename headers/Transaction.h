///////////////////////
// name: Karen and Ezekiel
// last date modified: 2/21/2019
////////////////////////
#ifndef Transaction_h
#define Transaction_h
#include <string>

using namespace std;
// The transaction class defines a change in an accounts balance
// Those changes can be a deposit withdraw or addInterest.
class Transaction {
private:
	int CustomerNumber;
	string transactionType;
	double Amount;
	string Fees;
public:
	Transaction(int customerNumber, string transactionType, double amount, string fees);
	// The amount of money that the transaction is in control of.
	double getAmount();
};
#endif
