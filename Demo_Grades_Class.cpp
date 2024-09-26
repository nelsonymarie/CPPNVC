//************************************************************************
// Author: Misael Cuadrado
// Date: Sun Sep 24, 2024
// Language: C++
// Assignment: Demo_Grades_Class
// Description: This program calculates and updates the total test scores
// and average test score for a student in the original input file.
//************************************************************************

#include <iostream>    // iostream library to allow input and output
#include <iomanip>     // iomanip library for formatting output
#include <fstream>     // fstream library for file handling

using namespace std;

int main()
{
    ifstream inFile;    // Declare an input file stream
    ofstream outFile;   // Declare an output file stream

    // Declare variables for test scores and the test average
    double testOne, testTwo, testThree, testFour, testFive;
    double testAverage;

    // Declare variables for student names
    string firstName, lastName;

    // Open the input file for reading
    inFile.open("/Users/misaelcuadrado/Desktop/Demo_Grades_Class.txt");

    // Check if file was successfully opened
    if (!inFile) {    // If file not found or could not be opened
        cout << "The file was not found." << endl;  // Print error message
        cout << "Program terminated." << endl;      // Print termination message
        return 1;    // Return 1 to indicate an error
    }

    // Notify the user that the program is processing the data
    cout << "Processing Data..........\n";

    // Read first and last name from the input file
    inFile >> firstName >> lastName;

    // Read test scores from the input file
    inFile >> testOne >> testTwo >> testThree >> testFour >> testFive;

    // Calculate the average of the test scores
    testAverage = (testOne + testTwo + testThree + testFour + testFive) / 5.0;

    // Close the input file after reading the data
    inFile.close();

    // Re-open the same file (Demo_Grades_Class.txt) for writing (overwrite mode)
    outFile.open("/Users/misaelcuadrado/Desktop/Demo_Grades_Class.txt");

    // Set output formatting
    outFile << fixed << showpoint << setprecision(2);  // Fixed-point notation, show decimal point, 2 decimal places

    // Write updated data back to the same file
    outFile << "Student Name: " << firstName << " " << lastName << endl;
    outFile << "Test Scores: " << setw(7) << testOne << setw(7) << testTwo << setw(7)
            << testThree << setw(7) << testFour << setw(7) << testFive << endl;
    outFile << "Average Test Score: " << testAverage << endl;

    // Close the output file
    outFile.close();

    cout << "File updated successfully!" << endl;

    return 0;  // Return 0 to indicate successful completion
}
