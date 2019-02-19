#include <string>
using namespace std;

class Customer {
    private:
        string name;
        string address;
        int age;
        int TelNum;
        int AccountNum;
    public:
    // Class constructor
    // Supply a valid name, address, age, TelNum, and AccountNum.
    // Returns a new customer object
        Customer(string name, string address, int age, int TelNum, int AccountNum) {
            this->name = name;
            this->address = address;
            this->age = age;
            this->TelNum = TelNum;
            this->AccountNum = AccountNum;
        }
    void setName(string newName);
    string getName();
    void setAddress(string newAddress);
    string getAddress();
    void setTelNum(int newTelNum);
    int getTelNum();
    void setAccountNum(int newAccountNum);
    int getAccountNum();

    virtual double getSavingsInterest() = 0;
    virtual double getCheckInterest() = 0;
    virtual int getCheckCharge() = 0;
    virtual int getOverdraftPenalty() = 0;
};
