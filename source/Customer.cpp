///////////////////////
// name: Karen and Ezekiel
// last date modified: 2/22/2019
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

int Customer::getAccountNum() {
    // Ezekiel learned how to call hash using stackoverflow
    // https://stackoverflow.com/questions/8094790/how-to-get-hash-code-of-a-string-in-c
    return std::hash<string>()(name) << std::hash<int>()(age) << std::hash<string>()(address) << std::hash<int>()(TelNum);
}