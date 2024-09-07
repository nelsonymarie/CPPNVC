//************************************************************************
// Author: Misael Cuadrado
// Date: September 03, 2024
// Language: C++
// Assignment Class Lecture: Module1_Lecture3Exer DEMO
// Description: This script initializes and outputs variables of-
// different data types, including account details, balance updates,
// and user information.
//************************************************************************





//// Demo of setting and outputting different data types
//#include <iostream>
//using namespace std;
//
//int main() {
//    // create some variables
//    string myName = "Dr. Kevin Roark";
//    int myAge = 39;
//    float myGPA = 3.95;
//    char myGrade = 'A';
//
//    // Output some variables
//    cout << "Name: " << myName << "\n";
//    cout << "Age: " << myAge << "\n";
//    cout << "GPA: " << myGPA << " Grade: " << myGrade << "\n";
//    cout << "End of Part 1 of the Program!\n";
//
//    return 0;
//}





// More on Data Types
// Demo of setting and outputting data type

#include <iostream>
using namespace std;

int main() {
    // create some variables
    string myAccountNumber = "123456789";
    float myBalance = 29.01;
    float myDeposit = 10.00;
    bool isAccountActive = true;

    // output Account and Initial Balance
    cout << "Account Number: " << myAccountNumber << "\n";
    cout << "Initial Balance: $" << myBalance << "\n";

    // Now let's add our Deposit
    myBalance = myBalance + myDeposit;

    // output Account and Balance after Deposit
    cout << "New Balance: $" << myBalance << "\n";
    cout << "Account Active? " << isAccountActive << "\n\n";
    cout << "End of Part 2 of the Program!\n";

    return 0;
}




