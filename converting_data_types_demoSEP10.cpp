#include<iostream>
#include <cmath>
using namespace std;

int main() {
    // declare local variables
    int testOne = 89;
    int testTwo = 98;
    int testThree = 85;
    float testAverage;

    // calculate the average test score
    testAverage = static_cast<float>(testOne + testTwo + testThree) / 3;

    // output the result
    cout << "The average grade is: " << testAverage << endl;

    cout << "End of program" << endl;

    //-----------------------------------
    // declare variables

    double squareRoot = sqrt(25); // Corrected variable name
    int powerResult = pow(2, 3);
    int absolute = abs(-10); // Corrected variable name

    cout << "Square Root is: " << squareRoot << endl;
    cout << "2 raised to the power of 3 is: " << powerResult << endl;
    cout << "Absolute value of -10 is: " << absolute << endl;


    //-----------------------------------

    // declare variables
    int base, power; // the base and exponent for math functions
    int result;

    // user input
    cout << "Enter the base value: ";
    cin >> base;
    cout << "Enter the power: ";
    cin >> power;

    // calculate result
    result = pow(base, power);

    // display result
    cout << base << " ^ " << power << " = " << result << endl;

    return 0;
}

