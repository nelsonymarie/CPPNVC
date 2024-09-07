//************************************************************************
// Author: Misael Cuadrado
// Date: September 2, 2024
// Language: C++
// Assignment: Module 1 Lab - Calculate Two Numbers
// Description: This program prompts the user for two integers, calculates
//              their sum and product, and displays the results.
//************************************************************************

#include <iostream>  // include iostream library for input
                    // and output operations

using namespace std;  // use the standard namespace

int main()
{
    // declare variables to hold the two numbers
    int number1 = 0;
    int number2 = 0;

    // prompt the user and store the first number
    cout << "Enter the first number: ";
    cin >> number1;

    // prompt the user and store the second number
    cout << "Enter the second number: ";
    cin >> number2;

    // calculate the sum of the two numbers
    int sum = number1 + number2;

    // calculate the product of the two numbers
    int product = number1 * number2;

    // output the value of the first number
    cout << "The value of the first number: " << number1 << endl;

    // output the value of the second number
    cout << "The value of the second number: " << number2 << endl;

    // output the sum of the two numbers
    cout << "The Sum of the two numbers: " << sum << endl;

    // output the product of the two numbers
    cout << "The Product of the two numbers: " << product << endl;

    // return 0 to indicate the program ended successfully
    return 0;
}

/*
Support References from w3schools to get perspective on how to build code:

https://www.w3schools.com/cpp/cpp_user_input.asp
https://www.programiz.com/cpp-programming/examples/add-numbers
https://stackoverflow.com/questions/17253690/finding-sum-and-
product-of-a-set-of-numbers-in-c
*/