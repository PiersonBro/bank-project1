///////////////////////
// name: Karen and Ezekiel
// last date modified: 2/21/2019
////////////////////////
#include "Student.h"
#include <string>

Student::Student(string name, string address, int age, int TelNum, int AccountNum) :Customer( name,  address,  age, TelNum, AccountNum) {}
double Student::getSavingsInterest() {
    return 0.035 ;
}

double Student::getCheckInterest() {
    return 0.005;
}

int Student::getCheckCharge() {
    return 0.05;
}

int Student::getOverdraftPenalty() {
    return 50;
}