///////////////////////
// name: Karen and Ezekiel
// last date modified: 2/22/2019
////////////////////////

#include <string>
#ifndef Customer_h
#define Customer_h
using namespace std;
// The abstract customer class defines the basic behavior common to all customer types: student adult and senior.
class Customer {
    private:
        string name;
        string address;
        int age;
        int TelNum;
    public:
    // Class constructor
    // Supply a valid name, address, age, TelNum, and AccountNum.
    // Returns a new customer object
        Customer(string name, string address, int age, int TelNum) {
            this->name = name;
            this->address = address;
            this->age = age;
            this->TelNum = TelNum;
        }
    // getters and setters to make a new account for a customer 
    void setName(string newName);
    string getName();
    void setAddress(string newAddress);
    string getAddress();
    int getAge();
    void setAge(int age);
    void setTelNum(int newTelNum);
    int getTelNum();
    int getAccountNum();

    // set to be abstract so that each subclass can set their functions for themselves 
    virtual double getSavingsInterest() = 0;
    virtual double getCheckInterest() = 0;
    virtual int getCheckCharge() = 0;
    virtual int getOverdraftPenalty() = 0;
};

#endif
