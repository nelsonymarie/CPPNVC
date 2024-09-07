//************************************************************************
// Author: Misael Cuadrado
// Date: September 07, 2024
// Language: C++
// Assignment: Using Strings Demo
// Description: This program demonstrates basic string manipulation in C++.
//************************************************************************

#include <iostream>
#include <string> // include string library for string manipulation
using namespace std;

int main()
{
    // declare all variables at the top of the function
    string myString = "Hello, World!";         // declare and initialize a string variable
    char firstChar;                            // declare character variable to store the first character
    size_t length;                             // declare variable to store the length of the string
    string anotherString = " This is C++.";    // declare and initialize another string
    string combinedString;                     // declare variable to store the concatenated string

    // assign first character of the string to the char variable
    firstChar = myString[0];

    // modify the first character in the string
    myString[0] = 'h';

    // get the length of the string using the length() function
    length = myString.length();

    // concatenate both strings
    combinedString = myString + anotherString;

    // print the modified string, its length, and the concatenated string
    cout << "Modified string: " << myString << endl;
    cout << "Length: " << length << endl;
    cout << "Combined string: " << combinedString << endl;
    cout << "Combined string length: " << combinedString.length() << endl;

    return 0; // end of the program
}
