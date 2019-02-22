///////////////////////
// name: Karen and Ezekiel
// last date modified: 2/21/2019
////////////////////////
#ifndef Transaction_h
#define Transaction_h
#include <iostream>
using namespace std;
class Transaction {
private:
	int CustomerNumber;
	string TransactionType;
	double Amount;
	string Fees;
public:
	double getAmount();
	 //processTrans();
};
#endif
