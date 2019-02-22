#include <iostream>
#include "Customer.h"
#include "Senior.h"
#include "Student.h"
#include "Adult.h"
#include "CheckingsAccount.h"
#include "Account.h"
#include "Transaction.h"
#include <string>

using namespace std;

int main () {
    /////////////////////// test for Customer, senior, student and adult////////////////
    
Senior person1( "pete" ,"Hawthornerd", 25, 5099, 5455454) ;
cout << person1.getName() << endl << person1.getTelNum()<< endl << person1.getAddress() << endl<< person1.getAccountNum() << endl;

Student person2( "lauri", "waikiki", 10, 545, 54545);
cout << person2.getName() << endl << person2.getTelNum()<< endl << person2.getAddress() << endl << person2.getAccountNum() << endl;

Adult person3( "keke", "north", 10, 200, 154464 );
cout << person3.getName() << endl << person3.getTelNum()<< endl << person3.getAddress() << endl<< person3.getAccountNum()<< endl;
 
    /////////////////////////////////////////////////////////////////////////////////////


/////////////////////////////test for checking and savings account /////////////////
Student c1( "mike", "over there", 18, 121212121, 78745);
CheckingsAccount p1( &c1, 500, 78745 );
Transaction t1 ( 12121, " getting money", 500, "this is a fee ");

cout << " hello" ;
cout << " you took out $" << p1.withdraw(t1) << endl;
cout << " with intrest it will be $" << p1.addInterest();


////////////////////////////////////////////////////////////////////////////////////////
}