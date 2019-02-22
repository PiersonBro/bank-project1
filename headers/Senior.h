///////////////////////
// name: Karen and Ezekiel
// last date modified: 2/21/2019
////////////////////////
#ifndef Senior_h
#define Senior_h
#include "Customer.h"

class Senior: public Customer {
    virtual double getSavingsInterest();
    virtual double getCheckInterest();
    virtual int getCheckCharge();
    virtual int getOverdraftPenalty();
};
#endif