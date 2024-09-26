//************************************************************************
// Author: Misael Cuadrado
// Date: September 12, 2024
// Language: C++
// Project: File Handling Example
// Description: This program demonstrates how to write to and read from a
//              text file in C++. It first writes a quote to a file, then
//              reads the contents of the file line by line and displays
//              them on the console. After reading, it opens the file in
//              the default text editor on Mac.
//************************************************************************

#include <iostream>
#include <fstream>
#include <cstdlib>  // For using system()
using namespace std;

int main()
{
    // Create and open a text file
    ofstream MyFile("Testfile.txt");

    // Write to the file
    MyFile << "Quality is never an accident; it is always the result of intelligent efforts.\n";
    MyFile << "\t --- Quote by William Forester --- ";

    // Close the file - Always make sure you close the file!
    MyFile.close();

    // Now read the file
    // Create a text string, which is used to output the text file
    string myText;

    // Read from the text file
    ifstream MyReadFile("Testfile.txt");

    // Use a while loop together with the getline() function to read the file line by line
    while (getline(MyReadFile, myText))
    {
        // Output the text from the file
        cout << myText << endl;
    }

    // Close the file
    MyReadFile.close();

    // Open the file automatically using the default text editor
    system("open Testfile.txt");

    return 0;
}
