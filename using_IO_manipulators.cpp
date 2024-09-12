//************************************************************************
// Author: Misael Cuadrado
// Date: September 12, 2024
// Language: C++
// Project: input / output
// Description: This program demonstrates the use of the setprecision
//              and setw manipulators to control the number of decimal
//              places displayed and set the width for output formatting.
//************************************************************************

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    // Initializing the decimal
    double PI = 3.141592653589793238;

    // Initializing an integer for demonstration
    int myNumber = 50;

    // Before setting the precision
    cout << "Before setting the precision: " << PI << endl;

    // Set precision to 5
    cout << setprecision(5);
    cout << "After setting precision to 5: " << PI << endl;

    // Before setting the width
    cout << "Before setting width: " << myNumber << "|\n";

    // Set the width to 10 and output the number
    cout << "After setting the width to 10: |" << setw(10) << myNumber << "|\n";

    // Use left justification
    cout << left;
    cout << "After setting left justification: |" << setw(10) << myNumber << "|\n";

    // use right justification
    cout << right;
    cout << "After setting right justification: |" << setw(10) << myNumber << "|\n";

    return 0;
}
