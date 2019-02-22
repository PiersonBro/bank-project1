///////////////////////
// name: Karen and Ezekiel
// last date modified: 2/21/2019
////////////////////////
#ifndef Transaction_h
#define Transaction_h
#include <string>

using namespace std;
class Transaction {
private:
	int CustomerNumber;
	string transactionType;
	double Amount;
	string Fees;
public:
	Transaction(int customerNumber, string transactionType, double amount, string fees);
	double getAmount();
	 //processTrans();
};
#endif
