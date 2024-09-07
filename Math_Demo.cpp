//************************************************************************
// Author: Misael Cuadrado
// Date: September 05, 2024
// Language: C++
// Assignment Class Lecture: Math_Demo
// Description: This script Intro MAth
//************************************************************************


#include <iostream>
using namespace std;

int main()

{
    int numberOne = 5;
    int numberTwo = 12;
    int age = 25;
    // Demonstration of math operations
    cout << "Number 1 is " << numberOne << endl;
    cout << "Number 2 is " << numberTwo << "\n" << endl;

    cout << numberOne << " + " << numberTwo << " = "
         << numberOne + numberTwo << endl;

    cout << numberOne << " - " << numberTwo << " = "
         << numberOne - numberTwo << endl;

    cout << numberOne << " * " << numberTwo << " = "
         << numberOne * numberTwo << endl;

    cout << static_cast<float>(numberOne) << " / "
         << numberTwo << " = "
         << static_cast<float>(numberOne) / numberTwo << endl;

    cout << numberOne << " % " << numberTwo << " = "
         << numberOne % numberTwo << endl;

    // post fix operator
    cout << "Age (with postfix): " << age++ << endl;
    cout << "Age (with postfix): " << age << endl;

    // prefix operator
    cout <<  "Age (with prefix): " << ++age << endl;
    cout << "Age (with prefix): " << age << endl;

    return 0;
}