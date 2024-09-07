//************************************************************************
// Author: Misael Cuadrado
// Date: September 7, 2024
// Language: C++
// Assignment: Module 1 Lab - Student Data
// Description: This program declares and initializes variables to hold a
//              student's full name, GPA, age, and enrollment status, and
//              then displays them on the console.
//************************************************************************

#include <iostream>  // include iostream library for input
                    // and output operations

using namespace std;  // use the standard namespace

int main()
{
    // declare and initialize a string variable for the student's full name
    string fullName = "Misael Cuadrado";

    // declare and initialize a float variable for the student's GPA
    float gpa = 3.97;

    // declare and initialize an integer variable for the student's age
    int age = 47;

    // declare and initialize a boolean variable to indicate enrollment
    bool isEnrolled = true;

    // output the student's full name to the console
    cout << "Name: " << fullName << endl;

    // output the student's GPA to the console
    cout << "GPA: " << gpa << endl;

    // output the student's age to the console
    cout << "Age: " << age << endl;

    // output the student's enrollment status to the console
    cout << "Enrolled: " << isEnrolled << endl;

    // return 0 to indicate the program ended successfully
    return 0;
}

/*
Support References from w3schools to get perspective on how to build code:

https://www.w3schools.com/cpp/cpp_data_types.asp
https://www.w3schools.com/cpp/cpp_user_input.asp
https://eng.libretexts.org/Courses/Delta_College/C___
Programming_I_%28McClanahan%29/11:_C_Input_and_Output/
11.01:_C_lnput-Output_Streams
https://www.w3schools.com/cpp/cpp_getstarted.asp
*/
