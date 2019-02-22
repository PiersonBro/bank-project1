#include <iostream>
#include "Customer.h"
#include "Senior.h"
#include "Student.h"
#include "Adult.h"
#include "CheckingsAccount.h"
#include "SavingsAccount.h"
#include "Account.h"
#include "Transaction.h"
#include <string>

using namespace std;

int main () {


//------------- making the account ---------------------------
Student Student1 ( "Mike", " waikiki 300", 18, 454545454, 01124);
Adult Adult1 ( "Larry", " Hawthorne 800", 45, 9898989989, 08534);
Senior Senior1 ( "SUsan", " random 2", 85, 323323233, 02878);

Bank bank();

CheckingsAccount cStudent1 (&Student1, 1000, 01124 );
CheckingsAccount cAdult1 (&Adult1, 5000, 08534 );
CheckingsAccount cSenior1 (&Senior1, 10000, 02878 )

SavingsAccount sStudent1 (&Student1, 500, 01124 );
SavingsAccount sAdult1 (&Adult1, 1000, 08534 );
SavingsAccount sSenior1 (&Senior1, 5000, 02878 );

bank.addAccount(&cStudent1);
bank.addAccount(&cAdult1);
bank.addAccount(&cSenior1);

bank.addAccount(&sStudent1);
bank.addAccount(&sAdult1);
bank.addAccount(&sSenior1);

//---------------------------------------------------------

//-------------------making transactions in the account ---------

bank.MakeDeposit (200,&cStudent1);
cout << "Your balance is " << cStudent1.getBalance();
cout << student1.getName() << " has just made a deposit" << endl; 
cStudent1.setBalance()
cout <<  " your new balance is $" << cStudent1.getBalance()-











cout << "There are " << accVector.size() << " accounts in this bank" << endl;
cout << student1.getName() << " has $" << bank.













}
