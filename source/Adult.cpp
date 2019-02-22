///////////////////////
// name: Karen and Ezekiel
// last date modified: 2/21/2019
////////////////////////

#include "Adult.h"
#include <string>

Adult::Adult (string name, string address, int age, int TelNum, int AccountNum) :Customer( name,  address,  age, TelNum, AccountNum) {}
double Adult::getSavingsInterest() {
    return 0.03;
}

double Adult::getCheckInterest() {
    return 0.01;
}

int Adult::getCheckCharge() {
    return 3;
}

int Adult::getOverdraftPenalty() {
    return 50;
}
