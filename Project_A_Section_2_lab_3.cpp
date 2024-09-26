//************************************************************************
// Author: Misael Cuadrado
// Date: Current date.
// Language: C++
// Assignment: Course Project - Section 2
// Description: A menu-driven program to calculate square roots, powers, and convert GPA to letter grades.
//************************************************************************

#include <iostream>  // include the iostream library to allow input and output
#include <cmath>     // include cmath for mathematical functions
using namespace std;  // use the standard namespace so we don't need to prefix with 'std::'

void calculateSquareRoot()
{
    // ask user for a number and calculate its square root
    double number;
    cout << "Enter a number to calculate the Square Root: ";
    cin >> number;
    cout << "The Square Root of " << number << " is " << sqrt(number) << endl;
}


void calculatePower()
{
    // ask user for two numbers and raise the first to the power of the second
    double base, exponent;
    cout << "Enter a number X to raise to the Y power: ";
    cin >> base;
    cout << "Enter Y: ";
    cin >> exponent;
    cout << base << " to the " << exponent << " power is " << pow(base, exponent) << endl;
}


void convertGPA()
{
    // ask user for GPA and convert it to a letter grade
    double gpa;
    cout << "Enter your numerical Grade (GPA): ";
    cin >> gpa;

    char grade;  // variable to store letter grade
    if (gpa >= 3.7 && gpa <= 4.0)
        grade = 'A';
    else if (gpa >= 2.7 && gpa < 3.7)
        grade = 'B';
    else if (gpa >= 1.7 && gpa < 2.7)
        grade = 'C';
    else if (gpa >= 0.7 && gpa < 1.7)
        grade = 'D';
    else
        grade = 'F';

    cout << "Letter Grade is " << grade << endl;
}


int main()
{
    // main function to run the program and handle user input
    int choice;  // variable to store user choice
    string firstName, lastName;  // variables for user names

    cout << "**********************************" << endl;
    cout << "*   Programming 1 Course Project   *" << endl;
    cout << "**********************************" << endl;

    cout << "Please enter your first name: ";
    cin >> firstName;

    cout << "Please enter your last name: ";
    cin >> lastName;

    cout << "Welcome to my course project, " << firstName << "!" << endl;

    do {
        // provide menu options to the user
        cout << "**********************************" << endl;
        cout << "Enter 1 to Calculate Square Root" << endl;
        cout << "Enter 2 to Enter x to the Y Power" << endl;
        cout << "Enter 3 to Convert Numerical GPA to a Letter Grade" << endl;
        cout << "Enter 0 to Exit" << endl;
        cout << "Enter Your Request: ";
        cin >> choice;

        switch(choice) {
            case 1:
                calculateSquareRoot();
                break;
            case 2:
                calculatePower();
                break;
            case 3:
                convertGPA();
                break;
            case 0:
                cout << "Thank you for using my project" << endl;  // exit message
                break;
            default:
                cout << "Invalid choice, please enter 0-3" << endl;  // handle invalid input
        }

    } while(choice != 0);  // loop until user chooses to exit

}
