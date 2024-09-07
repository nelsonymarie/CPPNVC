//************************************************************************
// Author: Misael Cuadrado
// Date: September 04, 2024
// Language: C++
// Assignment: Module 1 Lab - Product Pricing
// Description: This program collects the names and prices of three
// products,
// calculates the subtotal, sales tax, and final cost, and then
// displays the results to the user.
//************************************************************************

#include <iostream>
#include <string>

using namespace std;

int main()
{
    string productName1, productName2, productName3;
    double price1, price2, price3;

    // Get input for the first product
    cout << "Enter the name of product 1: ";
    getline(cin, productName1);
    cout << "Enter the price of product 1: $";
    cin >> price1;

    // Get input for the second product
    cout << "Enter the name of product 2: ";
    cin.ignore(); // This line is needed to consume the newline character
                  // left in the input stream
    getline(cin, productName2);
    cout << "Enter the price of product 2: $";
    cin >> price2;

    // Get input for the third product
    cout << "Enter the name of product 3: ";
    cin.ignore(); // This line is needed to consume the newline character
                  // left in the input stream
    getline(cin, productName3);
    cout << "Enter the price of product 3: $";
    cin >> price3;

    // Calculate the subtotal
    double subtotal = price1 + price2 + price3;

    // Calculate the sales tax
    double salesTax = subtotal * 0.08;

    // Calculate the final cost
    double finalCost = subtotal + salesTax;

    // Display the results
    cout << "\nSubtotal: $" << subtotal << endl;
    cout << "Sales Tax: $" << salesTax << endl;
    cout << "Final Cost: $" << finalCost << endl;

    return 0;
}

/*
Support References:

Input/Output with cin and cout:
http://www.cplusplus.com/doc/tutorial/basic_io/
Data types like double and int:
http://www.cplusplus.com/doc/tutorial/variables/
Operators like +, *, =:
http://www.cplusplus.com/doc/tutorial/operators/
*/
