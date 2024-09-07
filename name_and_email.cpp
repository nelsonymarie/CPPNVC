//************************************************************************
// Author: Misael Cuadrado
// Date: September 4, 2024
// Language: C++
// Assignment: Module 1 Lab - Name and Email
// Description: This program declares and initializes two string variables
//              to hold the author's full name and email address, and then
//              displays them on the console.
//************************************************************************

#include <iostream>  // include iostream library for input
                    // and output operations

using namespace std;  // use the standard namespace

int main()
{
    // declare and initialize string variables for name and email
    string fullName = "Misael Cuadrado";
    string emailAddress = "misael.cuadrado@fakemail.com";

    // output the full name to the console
    cout << "Full Name: " << fullName << endl;

    // output the email address to the console
    cout << "Email Address: " << emailAddress << endl;

    // return 0 to indicate the program ended successfully
    return 0;
}

/*
Support References from w3schools to get perspective on how to build code:

https://www.w3schools.com/cpp/cpp_variables.asp
https://www.w3schools.com/cpp/cpp_strings.asp
https://www.w3schools.com/cpp/cpp_output.asp
*/