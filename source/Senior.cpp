///////////////////////
// name: Karen and Ezekiel
// last date modified: 2/21/2019
////////////////////////
#include "Senior.h"
#include <string>
//cosntructor inherited from customer class 
Senior::Senior(string name, string address, int age, int TelNum) :Customer( name,  address,  age, TelNum) {}


double Senior::getSavingsInterest() {
    return 0.025;
}

double Senior::getCheckInterest() {
    return 0.01;
}

int Senior::getCheckCharge() {
    return 1;
}

int Senior::getOverdraftPenalty() {
    return 50;
}