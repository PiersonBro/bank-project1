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

int main () {


//------------- making the account ---------------------------
Student Student1 ( "Mike", " waikiki 300", 18, 2045454, 1124);
Adult Adult1 ( "Larry", " Hawthorne 800", 45, 989989, 8534);
Senior Senior1 ( "SUsan", " random 2", 85, 323233, 2878);

Bank bank1();

CheckingsAccount cStudent1 (&Student1, 1000, 01124 );
CheckingsAccount cAdult1 (&Adult1, 5000, 8534 );
CheckingsAccount cSenior1 (&Senior1, 10000, 2878 );

SavingsAccount sStudent1 (&Student1, 500, 1124 );
SavingsAccount sAdult1 (&Adult1, 1000, 8534 );
SavingsAccount sSenior1 (&Senior1, 5000, 2878 );

accVector.push_back (&cStudent1);
accVector.push_back(&cAdult1);
accVector.push_back(&cSenior1);

accVector.push_back(&sStudent1);
accVector.push_back(&sAdult1);
accVector.push_back(&sSenior1);

//---------------------------------------------------------

//-------------------making transactions in the account ---------


cout << "Your balance is " << cStudent1.getBalance();
cout << Student1.getName() << " has just made a deposit" << endl; 
bank1.MakeDeposit (200,&cStudent1);
cout <<  " your new balance is $" << cStudent1.getBalance();

















}
