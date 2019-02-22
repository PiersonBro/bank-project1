///////////////////////
// name: Karen and Ezekiel
// last date modified: 2/21/2019
////////////////////////
#ifndef Student_h
#define Student_h
#include "Customer.h"

// A concrete subclass of customer.
// Defines the associated interest rates and fees for this type of customer
class Student: public Customer {
    public:
    //constructor inherited from customer 
     Student(string name, string address, int age, int TelNum);
     // interest rates in percentages and $ 
    virtual double getSavingsInterest();
    virtual double getCheckInterest();
    virtual int getCheckCharge();
    virtual int getOverdraftPenalty();
};
#endif