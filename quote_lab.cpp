/************************************************************************
// Author: Misael Cuadrado
// Date: September 5, 2024
// Language: C++
// Assignment: Module 1 Lab - Quote
// Description: This program outputs a "Hello, World!" message followed by
//              a quote about quality from William A. Foster.
************************************************************************/

#include <iostream>  // include iostream library for input and output

using namespace std;  // use the standard namespace

int main()
{
    // output "hello, world!" followed by a newline
    cout << "Hello, World!" << endl;

    // output the quote followed by a newline
    cout << "Quality is never an accident; it is always the result of high "
         << "intention, sincere effort, intelligent direction and skillful "
         << "execution; it represents the wise choice of many alternatives." << endl;

    // output the author of the quote
    cout << "-- William A. Foster" << endl;

    // return 0 to indicate the program ended successfully
    return 0;
}
