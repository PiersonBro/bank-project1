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
    // constructor inherited from customer 
    Senior(string name, string address, int age, int TelNum);
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