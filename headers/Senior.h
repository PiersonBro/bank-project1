///////////////////////
// name: Karen and Ezekiel
// last date modified: 2/21/2019
////////////////////////
#ifndef Senior_h
#define Senior_h
#include <string>
#include "Customer.h"

// A concrete subclass of customer.
// Defines the associated interest rates and fees for this type of customer
class Senior: public Customer {
    public: 
    Senior(string name, string address, int age, int TelNum, int AccountNum);
    virtual double getSavingsInterest();
    virtual double getCheckInterest();
    virtual int getCheckCharge();
    virtual int getOverdraftPenalty();
};
#endif