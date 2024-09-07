//************************************************************************
// Author: Misael Cuadrado
// Date: September 7, 2024
// Language: C++
// Assignment: Programming 1 Course Project - Section 1
// Description: this program prompts the user for their first and last name,
//              then outputs a welcome message inside a decorative box.
//************************************************************************

#include <iostream>  // include the iostream library to allow input and output
using namespace std;  // use the standard namespace so we don't need to prefix
// with 'std::'

//************************************************************************
// main function: where the program begins execution
//************************************************************************
int main()
{
    //****** variable section *********
    string firstName;  // declare a variable to store the user's first name
    string lastName;   // declare a variable to store the user's last name

    //****** welcome section **********
    // output the decorative header for the project
    cout << "*****************************************" << endl;
    cout << "*     programming 1 course project      *" << endl;
    cout << "*****************************************" << endl;

    // prompt the user to enter their first name and store it in 'firstName'
    cout << "please enter your first name: ";
    cin >> firstName;  // input the user's first name

    // prompt the user to enter their last name and store it in 'lastName'
    cout << "please enter your last name: ";
    cin >> lastName;  // input the user's last name

    // output a personalized welcome message using the user's first name
    cout << "welcome to my course project " << firstName << "!" << endl;

    // return 0 to indicate the program ended successfully
    return 0;
}


//************************************************************************
/*
references:
https://www.instructables.com/How-to-Write-a-Simple-C-Program/
https://www.w3schools.com/cpp/cpp_user_input.asp
https://www.learncpp.com/cpp-tutorial/stdcin-and-handling-invalid-input/
*/
