//************************************************************************
// Author: Misael Cuadrado
// Date: September 12, 2024
// Language: C++
// Project: Mailing Label Generator
// Description: This program prompts the user to enter their full name,
//              street address, and city, state, and zip code. It then
//              displays this information as a formatted mailing label.
//************************************************************************



#include <iostream>
using namespace std;

int main()
{
    //declare the variables
    string myFullName;
    string myAddress;
    string myCityStateZip;

    //get user input
    cout << "Please Enter your Full Name: ";
    getline(cin, myFullName);
    cout << "Please Enter your Street Address: ";
    getline(cin, myAddress);
    cout << "Please Enter your City, State, and Zip: ";
    getline(cin, myCityStateZip);

    // display mailing label
    cout << "\n\nYour Mailing Label: \n" << endl;
    cout << myFullName << endl;
    cout << myAddress << endl;
    cout << myCityStateZip << endl;

    return 0;
}
