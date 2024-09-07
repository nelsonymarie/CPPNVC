//************************************************************************
// Author: Misael Cuadrado
// Date: September 07, 2024
// Language: C++
// Assignment: Module 1 Lab - Grade Average
// Description: This program calculates the average of five test grades
//              and outputs each grade along with the calculated average.
//************************************************************************

#include <iostream>
using namespace std;

int main()
{
    // declare five variables to hold test grades
    int grade1 = 82;
    int grade2 = 85;
    int grade3 = 98;
    int grade4 = 79;
    int grade5 = 87;

    // declare a variable to hold the average and initialize it to 0.0
    double average = 0.0;

    // output each grade indicating Grade 1, Grade 2, etc. on a separate line
    cout << "Grade 1: " << grade1 << endl;
    cout << "Grade 2: " << grade2 << endl;
    cout << "Grade 3: " << grade3 << endl;
    cout << "Grade 4: " << grade4 << endl;
    cout << "Grade 5: " << grade5 << endl;

    // calculate the average of the grades
    average = (grade1 + grade2 + grade3 + grade4 + grade5) / 5.0;

    // output the average of the grades
    cout << "Average: " << average << endl;

    return 0; // end of program
}

//************************************************************************
// References:
// https://www.w3schools.com/cpp/cpp_variables.asp
// https://www.w3schools.com/cpp/cpp_operators.asp
// https://www.w3schools.com/cpp/cpp_user_input.asp
// https://www.w3schools.com/cpp/cpp_exercises.asp
// https://www.w3schools.com/cpp/cpp_scope.asp
// https://www.w3schools.com/cpp/cpp_examples.asp
// https://www.w3schools.com/cpp/cpp_getstarted.asp
//************************************************************************
