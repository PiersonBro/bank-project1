///////////////////////
// name: Karen and Ezekiel
// last date modified: 2/21/2019
////////////////////////
#include "Customer.h"

void Customer::setName(string newName) {
    name = newName;
}

string Customer::getName() {
    return name;
}

void Customer::setAge(int age) {
    this->age = age;
}

int Customer::getAge() {
    return age;
}

void Customer::setAddress(string newAddress) {
    address = newAddress;
}

string Customer::getAddress() {
    return address;
}

void Customer::setTelNum(int newTelNum) {
    TelNum = newTelNum;
}

int Customer::getTelNum() {
    return TelNum;
}
void Customer::setAccountNum(int newAccountNum) {
    AccountNum = newAccountNum;
}

int Customer::getAccountNum() {
    return AccountNum;
}
