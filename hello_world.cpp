//************************************************************************
// Author: Misael Cuadrado
// Date: September 4, 2024
// Language: C++
// Assignment: Module 1 Lab - Hello World
// Description: This program outputs a simple "Hello, World!" message
//              followed by a welcome message including the author's name.
//************************************************************************

#include <iostream>  // include iostream library for input
                    // and output

using namespace std;  // use the standard namespace

int main()
{
    // declare a string variable to store the name
    string name = "Misael Cuadrado";

    // output a simple greeting to the console
    cout << "Hello, World!" << endl;

    // output a welcome message including the author's name
    cout << "Welcome to C++ " << name << "!" << endl;
    // corrected space before the name

    // return 0 to indicate the program ended successfully
    return 0;
}

/*
Support References from w3schools to get perspective on how to build code:

https://www.w3schools.com/cpp/cpp_syntax.asp
https://www.w3schools.com/cpp/cpp_strings.asp
*/
