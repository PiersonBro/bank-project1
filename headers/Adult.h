///////////////////////
// name: Karen and Ezekiel
// last date modified: 2/21/2019
////////////////////////
#ifndef Adult_h
#define Adult_h
#include "Customer.h"
#include <string> 

// A concrete subclass of customer.
// Defines the associated interest rates and fees for this type of customer
class Adult: public Customer {
    public: 
    // construtor inherited from  customer 
    Adult(string name, string address, int age, int TelNum);
    // Defines the specific interest rates for a savings account.
    virtual double getSavingsInterest(); 
    // Defines the specifc interst rate for a checking account.
    virtual double getCheckInterest();
    // The fee for making a deposit with a checking account.
    virtual int getCheckCharge();
    // The overdraft fee.
    virtual int getOverdraftPenalty();
};
#endif