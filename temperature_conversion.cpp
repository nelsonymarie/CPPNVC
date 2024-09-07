//************************************************************************
// Author: Misael Cuadrado
// Date: September 07, 2024
// Language: C++
// Assignment: Module 1 Lab - Temperature Conversion
// Description: Program to convert temperature from Fahrenheit to Celsius
//************************************************************************

#include <iostream>
#include <iomanip>

int main()
{
    // declare variables for fahrenheit and celsius temperatures
    double fahrenheit, celsius;

    // prompt user for input and store in fahrenheit variable
    std::cout << "Enter temperature in Fahrenheit: ";
    std::cin >> fahrenheit;

    // convert fahrenheit to celsius using the formula
    celsius = (fahrenheit - 32) * 5 / 9;

    // display the results to the user
    std::cout << std::fixed << std::setprecision(2);
    std::cout << "The temperature in Fahrenheit is: " << fahrenheit << std::endl;
    std::cout << "The temperature in Celsius is: " << celsius << std::endl;

    return 0;
}

/*
Support Reference:

https://www.learncpp.com/cpp-tutorial/function-parameters-and-arguments/
*/