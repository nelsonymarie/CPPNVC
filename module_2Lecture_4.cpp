// //************************************************************************
// // Author: Misael Cuadrado
// // Date: September 19, 2024
// // Language: C++
// // Assignment: Ternary Demo.
// // Description: This program demonstrates the use of the ternary operator in C++
// // to decide the minimum of two numbers and to determine airline ticket class based on price.
// //************************************************************************/
//
// #include <iostream>  // include the iostream library to allow input and output
// using namespace std;  // use the standard namespace so we don't need to prefix with 'std::'
//
// int main()
// {
//     // declare and initialize the variables at the top of the function
//     int numOne = 5, numTwo = 10;  // holds two integer values to compare
//     int min;  // holds the minimum of numOne and numTwo
//     string seatSection;  // holds the class of the airline seat
//     float ticketCost = 0.00;  // holds the cost of the airline ticket
//
//     // using the ternary operator to find the minimum number
//     min = (numOne < numTwo) ? numOne : numTwo;
//     // output the result to the console
//     cout << "The minimum is: " << min << endl;
//
//     // using an if-else statement to do the same comparison
//     if (numOne < numTwo)
//     {
//         min = numOne;
//     }
//     else
//     {
//         min = numTwo;
//     }
//     // output the result to the console
//     cout << "The minimum is: " << min << endl;
//
//     // ask the user for the price of the airline ticket
//     cout << "How much was your airline ticket? ";
//     cin >> ticketCost;
//     cout << endl;
//
//     // using a ternary operator to determine seat section based on ticket cost
//     seatSection = (ticketCost >= 800.00) ? "Business Class" : "Coach Class";
//     // output the seat section to the console
//     cout << "Your seat section is in the " << seatSection;
//     cout << endl;
//
//     return 0;
// }
//




//----------------------------------------------------------------------------





// //************************************************************************
// // Author: Misael Cuadrado
// // Date: September 19, 2024
// // Language: C++
// // Assignment: Break Staemennt Demo1.
// // Description: This program demonstrates the use of switch statements to output the day of the week
// // based on a numerical input and to give feedback based on a grade character.
// //************************************************************************/
//
// #include <iostream>  // include the iostream library to allow input and output
// using namespace std;  // use the standard namespace so we don't need to prefix with 'std::'
//
// int main()
// {
//   // declare the variable to store the day number
//   int day;
//
//   // prompt the user to enter a day number
//   cout << "Enter a day number (1-7): ";
//   cin >> day;
//
//   // using switch-case to determine the day of the week
//   switch (day)
//   {
//     case 1:
//       // If the input day is 1, print "Monday"
//         cout << "Monday" << endl;
//     break;  // Exit the switch statement after executing the case
//
//     case 2:
//       // If the input day is 2, print "Tuesday"
//         cout << "Tuesday" << endl;
//     break;  // Exit the switch statement after executing the case
//
//     case 3:
//       // If the input day is 3, print "Wednesday"
//         cout << "Wednesday" << endl;
//     break;  // Exit the switch statement after executing the case
//
//     case 4:
//       // If the input day is 4, print "Thursday"
//         cout << "Thursday" << endl;
//     break;  // Exit the switch statement after executing the case
//
//     case 5:
//       // If the input day is 5, print "Friday"
//         cout << "Friday" << endl;
//     break;  // Exit the switch statement after executing the case
//
//     case 6:
//       // If the input day is 6, print "Saturday"
//         cout << "Saturday" << endl;
//     break;  // Exit the switch statement after executing the case
//
//     case 7:
//       // If the input day is 7, print "Sunday"
//         cout << "Sunday" << endl;
//     break;  // Exit the switch statement after executing the case
//
//     default:
//       // If the input day is not within the range of 1 to 7
//         cout << "Invalid day number." << endl;
//     // The default case handles all other numbers not covered above
//   }
//
//
//   // return 0 to indicate successful completion of the program
//   return 0;
// }




//--------------------------------------------------------------




// //************************************************************************
// // Author: Misael Cuadrado
// // Date: September 19, 2024
// // Language: C++
// // Assignment: Break Statement Demo2.
// // Description: This program demonstrates the use of switch statements to output the day of the week
// // based on a numerical input and to give feedback based on a grade character.
// //************************************************************************/
//
// #include <iostream>  // include the iostream library to allow input and output
// using namespace std;  // use the standard namespace so we don't need to prefix with 'std::'
//
// int main()
// {
//   // declare the variable to store the day number
//   int grade;
//
//   // prompt the user to enter a day number
//   cout << "Enter numeric grade: ";
//   cin >> grade;
//
//   // using switch-case to determine the day of the week
//   switch (grade / 10)
//   {
//     case 10:
//       // action for case 1
//     break;  // Exit the switch statement after executing the case
//
//     case 9:
//       // action for case 2
//         cout << "A" << endl;
//     break;  // Exit the switch statement after executing the case
//
//     case 8:
//       // action for case 3
//         cout << "B" << endl;
//     break;  // Exit the switch statement after executing the case
//
//     case 7:
//       // action for case 4
//         cout << "C" << endl;
//     break;  // Exit the switch statement after executing the case
//
//     case 6:
//       // action for case 5
//         cout << "D" << endl;
//     break;  // Exit the switch statement after executing the case
//
//     default:
//       // action for default case
//         cout << "F" << endl;
//     // Handle cases not covered above
//   }
//
//   // return 0 to indicate successful completion of the program
//   return 0;
// }





//---------------------------------------------------------------



//************************************************************************
// Author: Misael Cuadrado
// Date: September 19, 2024
// Language: C++
// Assignment: Input Validation Demo
// Description: This program demonstrates basic input validation techniques using cin.fail()
// to check for data type mismatches and how to use cin.putback() and cin.get() for input manipulation.
//************************************************************************/

#include <iostream>  // include the iostream library to allow input and output
using namespace std;  // use the standard namespace so we don't need to prefix with 'std::'

// int main()
// {
//   // declare the variable to store the number entered by the user
//   int myNumber;
//
//   // prompt the user to enter an integer
//   cout << "Please enter an integer: ";
//   cin >> myNumber;
//
//   // check if the input failed due to a data type mismatch
//   if (cin.fail())
//   {
//     // inform the user that the entered value was not an integer
//     cout << "That was not an integer." << endl;
//
//     // clear the error flags
//     cin.clear();
//
//     // ignore the rest of the line to avoid further extraction errors
//     cin.ignore(numeric_limits<streamsize>::max(), '\n');
//   }
//   else
//   {
//     // output the integer entered by the user
//     cout << "You entered an integer: " << myNumber << endl;
//   }
//
//   // return 0 to indicate successful completion of the program
//   return 0;
// }




//************************************************************************
// The second part of the assignment: Input Re-manipulation
//************************************************************************/

int main()
{
  // declare the variable to store the character entered by the user
  char ch;

  // prompt the user to enter a character
  cout << "Please enter a character: ";
  cin >> ch, nextChar;

  // put the character back into the input stream
  cin.putback(ch);

  // read the character again from the input stream
  cin >> ch;

  // output the character entered by the user

  // aanother character

  cout << "Character: ";
  nestChar = cin.peek();

  cout << "You entered: " << ch << endl;
cin >> ch;
  cout << "you enter:" << ch << endl
  // return 0 to indicate successful completion of the program
  return 0;
}




//-------------------------------------





//
// #include <iostream>
// #include <fstream>
// using namespace std;
//
// int main()
// {
//     // Create and open a text file
//     ofstream MyFile("Testfile.txt");
//
//     // Write to the file
//     MyFile << "Quality is never an accident; it is always the result of intelligent efforts.\n";
//     MyFile << "\t --- Quote by William Forester --- ";
//
//     // Close the file - Always make sure you close the file!
//     MyFile.close();
//
//     // Now read the file
//     string myText;
//     ifstream MyReadFile("Testfile.txt");
//
//     // Use a while loop together with the getline() function to read the file line by line
//     while (getline(MyReadFile, myText))
//     {
//         // Output the text from the file
//         cout << myText << endl;
//     }
//
//     // Close the file
//     MyReadFile.close();
//
//     return 0;
// }
//
// #include <iostream>
// #include <fstream>
// #include <iomanip>
// #include <string>
// using namespace std;
//
// int main ()
// {
//     // Create input and output stream objects
//     ifstream inFile; // Input file stream for reading
//     ofstream outFile; // Output file stream for writing
//
//     // Local variable declaration
//     double testOne, testTwo, testThree, testFour, testFive;
//     double testAverage;
//     string firstName;
//     string lastName;
//
//     // Open the input file "test.txt"
//     inFile.open("test.txt");
//
//     // If the file cannot be opened, display an error message
//     // and terminate the program
//     if(!inFile)
//     {
//         cout << "The file is not found or cannot be opened. Program terminated." << endl;
//         return 1;
//     }
//
//     // Open the output file "testAverage.txt"
//     outFile.open("testAverage.txt");
//
//     // Set the output format for the output file
//     outFile << fixed << showpoint;
//     outFile << setprecision(2);
//
//     // Display a message to indicate that the data is being processed
//     cout << "Processing data....." << endl;
//
//     // Read the student's name from the input file
//     inFile >> firstName >> lastName;
//
//     // Write the student's name to the output file
//     outFile << "Student name: " << firstName << " " << lastName << endl;
//
//     // Read the test scores from the input file
//     inFile >> testOne >> testTwo >> testThree >> testFour >> testFive;
//
//     // Write the test scores to the output file
//     outFile << "Test Scores: " << setw(6) << testOne << setw(6) << testTwo
//             << setw(6) << testThree << setw(6) << testFour << setw(6) << testFive << endl;
//
//     // Compute the average of the test scores
//     testAverage = (testOne + testTwo + testThree + testFour + testFive ) / 5.0;
//
//     // Write the average of the test scores to the output file
//     outFile << "Average Test Score: " << setw(6) << testAverage << endl;
//
//     // Close both the input and output files
//     inFile.close();
//     outFile.close();
//
//     return 0;
// }
//



//---------------------------------------------------------




//
// #include <iostream>
// using namespace std;
//
// int main()
// {
//     char ch;
//     cout << "Please enter a character: ";
//
//     // Peek at the next character in the input stream
//     char nextChar = cin.peek();
//
//     // Check if the next character is a digit
//     if (isdigit(nextChar))
//     {
//         cout << "The next character is a digit." << endl;
//     }
//     else
//     {
//         cout << "The next character is not a digit." << endl;
//     }
//
//     // Now actually read the character
//     cin >> ch;
//     cout << "You entered: " << ch << endl;
//
//     return 0;
// }
//
// #include <iostream>
// using namespace std;
//
// int main()
// {
//     int number;
//     cout << "Please enter a number: ";
//     cin >> number;
//
//     if (cin.fail())
//     {
//         cin.clear(); // Clear the error flags
//         cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Ignore the rest of the line
//         cout << "Invalid input. Please enter a number.\n";
//     }
//     else
//     {
//         cout << "You entered: " << number << '\n';
//     }
//
//     return 0;
// }
// 4e