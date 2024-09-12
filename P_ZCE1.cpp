//************************************************************************
// Author: Misael Cuadrado
// Date: September 2, 2024
// Language: C++
// Assignment: Module 1 Lab - Simple Calculator
// Description: This program acts as a simple calculator. It prompts the
//              user for two numbers and allows the user to perform basic
//              arithmetic operations: addition, subtraction, multiplication,
//              or division. The result of the selected operation is then
//              displayed. The user can perform multiple calculations until
//              they choose to exit.
//***


#include <iostream>
using namespace std;

// function to display result

void displayResult(float result) {
    cout << "The result is: " << result << endl;
}

int main() {

    char continueCalculation = 'y'; // variable to see if user wants to continue calculation

    while (continueCalculation == 'y') {
        //declare variables
        float number1, number2, result;
        int operation;

        //prompt user for 2 numbers
        cout << "Enter the first number: ";
        while (!(cin >> number1)) {
            cout << "Invalid input. Please enter a numeric value: ";
            cin.clear(); //clear the error flag
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); //discard invalid input
        }

        // display the operation menu
        cout << "chose an operation:" << endl;
        cout << "1. add" << endl;
        cout << "2. substract" << endl;
        cout << "3. Multiply" << endl;
        cout << "4. Divide" << endl;
        cout << "4. Enter your choice (1-4): ";
        while (!(cin >> operation) || operation < 1 || operation > 4) {
            cout << "Invalid choice. Please enter  number between 1 and 4: ";
            cin.clear(); //clear the error flag
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); //discard invalid input
        }

        //Perform the calculation based on user input
        switch (operation) {
            case 1:
                result = number1 + number2;
                displayResult(result);
                break;
            case 2:
                result = number1 - number2;
               braek


        }
    }

}


