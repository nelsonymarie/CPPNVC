//************************************************************************
// Author: [Your Name]
// Date: [Current Date]
// Language: C++
// Project: Menu Display with Prices
// Description: This program demonstrates the use of output manipulators
//              such as setw, left, right, setfill, and setprecision to
//              display a formatted menu with item prices.
//************************************************************************



#include <iostream>
#include <iomanip>
using namespace std;

int main() {

    // declare local variables
    double applePrice = 1.25;
    double peachPrice = 0.70;
    double steakPrice = 12.00;

    // set output formatting
    cout << fixed << showpoint << setprecision(2);

    // display the menu
    cout << "********** Setting up our display *********" << endl;
    
    // Display Apple price
    cout << setw(30) << left << setfill('.') << "Apple "
         << setw(3) << right << setfill(' ') << "$" 
         << setw(6) << right << applePrice << endl;

    // Display Peach price
    cout << setw(30) << left << setfill('.') << "Peach "
         << setw(3) << right << setfill(' ') << "$" 
         << setw(6) << right << peachPrice << endl;

    // Display Steak price
    cout << setw(30) << left << setfill('.') << "Steak "
         << setw(3) << right << setfill(' ') << "$" 
         << setw(6) << right << steakPrice << endl;

    return 0;
}
