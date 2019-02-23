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

void testCustomerInfrastructure() {
       /////////////////////// test for Customer, senior, student and adult////////////////
    Senior person1("pete" ,"Hawthornerd", 25, 5099) ;
    cout << person1.getName() << endl << person1.getTelNum()<< endl << person1.getAddress() << endl<< person1.getAccountNum() << endl;

    Student person2( "lauri", "waikiki", 10, 545);
    cout << person2.getName() << endl << person2.getTelNum()<< endl << person2.getAddress() << endl << person2.getAccountNum() << endl;

    Adult person3( "keke", "north", 10, 200);
    cout << person3.getName() << endl << person3.getTelNum()<< endl << person3.getAddress() << endl<< person3.getAccountNum()<< endl;
}

void testAccountInfrastructure() {
    /////////////////////////////test for checking and savings account /////////////////
    Student c1( "mike", "over there", 18, 121212121);
    CheckingsAccount p1(&c1, 500, c1.getAccountNum());
    Transaction t1 (12121, " getting money", 500, "this is a fee");

    cout << "you took out $" << p1.withdraw(t1) << endl;
    cout << "with intrest it will be $" << p1.addInterest() << endl;

    Senior s1("senior1", "there", 75, 78787878);
    SavingsAccount Ss1 (&s1, 800, 45465);
    Transaction t2 (78787, " saving money", 800, "this is a fee");

    cout << " you deposited $" << Ss1.deposit(t2) << endl;
    cout << "with interest it will be $" << Ss1.addInterest() << endl;
    cout << "What happens if we withdraw more than is in the account?" << endl;
}

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
    // tests
    testAccountInfrastructure();
    testCustomerInfrastructure();
    return 0;
}
