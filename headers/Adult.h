///////////////////////
// name: Karen and Ezekiel
// last date modified: 2/21/2019
////////////////////////
#ifndef Adult_h
#define Adult_h
#include "Customer.h"

class Adult: public Customer {
    virtual double getSavingsInterest();
    virtual double getCheckInterest();
    virtual int getCheckCharge();
    virtual int getOverdraftPenalty();
};
#endif