#include <iostream>
#include "Customer.h"
#include "Senior.h"
#include "Student.h"
#include "Adult.h"
#include "CheckingsAccount.h"
#include "SavingsAccount.h"
#include "Account.h"
#include "Transaction.h"
#include "Bank.h"
#include <string>

using namespace std;

void exerciseAccountFunctions(Customer * customer, Account * account, Bank bank) {
     try {
        Account * studentSavings2 = bank.GetAccount(customer, false);
        cout << studentSavings2->getBalance() << endl;
    } catch (std::invalid_argument &ex) {
        cout << "Student wasn't found" << endl;
        exit(-1);
    }
    cout << "before the deposit " << customer->getName() << " had $" << account->getBalance() << endl;
    bank.MakeDeposit(100, account);
    cout << "Now " << customer->getName() << " has $" << account->getBalance() << endl;
    bank.MakeWithdrawal(account->getBalance() * 1.2, account);
    cout << "uh oh " << customer->getName() << " withdrew way more money than they should have! now they have " << account->getBalance() << endl;

}


int main() {
    //------------- making the account ---------------------------
    Student Student1 ("Mike", " waikiki 300", 18, 2045454);
    Adult Adult1 ("Larry", " Hawthorne 800", 45, 989989);
    Senior Senior1 ("Susan", " random 2", 85, 323233);

    Bank bank1;
    Account * studentSavings = bank1.createAccount(&Student1, 800, true);
    Account * studentChecking = bank1.createAccount(&Student1, 400, false);
    Account * adultSavings = bank1.createAccount(&Adult1, 100, true);
    Account * adultChecking = bank1.createAccount(&Adult1, 2500, false);
    Account * seniorSavings = bank1.createAccount(&Senior1, 2000, true);
    Account * seniorChecking = bank1.createAccount(&Senior1, 1500, false);
    //---------------------------------------------------------

    //-------------------Using get account transactions in the account --------
    exerciseAccountFunctions(&Student1, studentSavings, bank1);
    cout << "--------------------" << endl;
    exerciseAccountFunctions(&Student1, studentChecking, bank1);
    cout << "--------------------" << endl;
    exerciseAccountFunctions(&Adult1, adultSavings, bank1);
    cout << "--------------------" << endl;
    exerciseAccountFunctions(&Adult1, adultChecking, bank1);
    cout << "--------------------" << endl;
    exerciseAccountFunctions(&Senior1, seniorSavings, bank1);
    cout << "--------------------" << endl;
    exerciseAccountFunctions(&Senior1, seniorChecking, bank1);
    cout << "--------------------" << endl;
    return 0;
}
