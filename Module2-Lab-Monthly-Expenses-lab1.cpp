//************************************************************************
// Author: Misael Cuadrado
// Date: Sun Sep 22.
// Language: C++
// Assignment: Module 2 - Lab - Monthly Expenses
// Description: This program calculates and displays the total monthly
// expenses including rent, electric, and water bills.
//************************************************************************

#include <iostream>  // iostream library to allow input and output
#include <iomanip>   // iomanip library for formatting output

using namespace std;  // standard don't need to prefix with 'std::'

int main() {
    // declare variables for month, rent, electric, and water bills
    string month;
    double rent, electric, water;

    // prompt user for input
    cout << "Please enter the month: ";
    cin >> month;
    cout << "Please enter the Rent amount: ";
    cin >> rent;
    cout << "Please enter the Electric Bill amount: ";
    cin >> electric;
    cout << "Please enter the Water Bill amount: ";
    cin >> water;

    // calculate total expenses
    double total = rent + electric + water;

    // display formatted output
    cout << endl;
    cout << left << setw(10) << "Rent:" << right << setw(10) << fixed
         << setprecision(2) << "$ " << rent << endl;
    cout << left << setw(10) << "Electric:" << right << setw(10)
         << "$ " << electric << endl;
    cout << left << setw(10) << "Water:" << right << setw(10)
         << "$ " << water << endl;
    cout << "---------------------------" << endl;
    cout << left << setw(10) << "Total:" << right << setw(10)
         << "$ " << total << endl;

    return 0;  // indicate successful completion of program
}

// Support References:
// https://www.softwaretestinghelp.com/iomanip-functions-in-cpp/
// https://www.cprogramming.com/tutorial/iomanip.html
// https://faculty.cs.niu.edu/~mcmahon/CS241/Notes/output_formatting.html