////************************************************************************
//// Author: Misael Cuadrado
//// Date: Tue Sep 24, 2024
//// Language: C++
//// Assignment: Steps Counter Program
//// Description: This program calculates the total number of steps taken
//// over 5 days and then calculates the average steps per day. The user
//// is prompted to input the number of steps for each day, and the program
//// outputs both the total and average steps.
////************************************************************************
//
//#include <iostream>    // iostream library to allow input and output
//
//using namespace std;
//
//int main() {
//    int stepsPerDay = 0;  // Variable to hold the steps entered for a day
//    int totalSteps = 0;   // Variable to accumulate total steps over the days
//    int dayNumber = 1;    // Day counter (start from day 1)
//    float averageSteps = 0.0;  // Variable to store the average steps
//
//    // Loop for 5 days to get the steps for each day
//    while (dayNumber <= 5) {
//        // Ask for steps per day for the current day number
//        cout << "Enter steps for day " << dayNumber << ": ";
//        cin >> stepsPerDay;
//
//        // Add the steps for the current day to the total
//        totalSteps += stepsPerDay;
//
//        // Increment the day number
//        dayNumber++;
//    }
//
//    // When the loop is done, calculate average steps
//    averageSteps = static_cast<float>(totalSteps) / 5.0;
//
//    // Output total and average steps
//    cout << "Total steps for 5 days: " << totalSteps << endl;
//    cout << "Average steps per day: " << averageSteps << endl;
//
//    // Additional test block (corrected and commented out)
//    /*
//        stepsPerDay = -1;
//        totalSteps = 0;
//        dayNumber = 0.0;
//        averageSteps = 0.0;
//
//        while (stepsPerDay != 0) {
//            cout << "Enter steps for day " << dayNumber + 1 << " or 0 to quit: ";
//            cin >> stepsPerDay;
//
//            if (stepsPerDay > 0) {
//                totalSteps += stepsPerDay;
//                dayNumber++;
//            }
//        }
//    */
//    return 0;
//}
//



//----------------------------






/*
 * Name: Misael Cuadrado
 * Date: September 26, 2024
 * Lab Exercise: Mod 3
 * Description: Class exersises
 */


//
// #include <iostream>
// #include <string>
//
// using namespace std;
//
// int main() {
//     string line; // Variable to hold the input line
//     cout << "Enter lines of text (an empty line to quit):\n";
//
//     // Read the first line of input
//     getline(cin, line);
//
//     // Continue reading lines until an empty line is entered
//     while (!line.empty()) {
//         cout << "You entered: " << line << '\n'; // Output the entered line
//         getline(cin, line); // Read the next line
//     }
//
//     return 0; // Indicate that the program ended successfully
// }


/*
 * Name: Misael Cuadrado
 * Date: September 26, 2024
 * Lab Exercise: Mod 3
 * Description: Class exersises
 */



// #include <iostream>
// using namespace std;
//
// int main() {
//     int rocketCount = 10;
//
//     cout << rocketCount << "\n\n";
//
//     do {
//         cout << rocketCount << endl;
//         rocketCount--;
//     } while (rocketCount >= 0);
//
//     cout << "blastoff" << endl;
//
//     return 0;
// }




// Menu allows the user to choose from different
// operations, each represented by a different case in a switch statement.

// #include <iostream>
// using namespace std;
//
// int main() {
//  int choice;
//
//  do {
//   // Display the menu
//   cout << "========================\n";
//   cout << "MENU\n";
//   cout << "1 - Option 1\n";
//   cout << "2 - Option 2\n";
//   cout << "3 - Option 3\n";
//   cout << "4 - Quit\n";
//   cout << "Enter your choice and press return: ";
//   cin >> choice;
//
//   // Switch to handle different menu options
//   switch (choice) {
//    case 1:
//     cout << "You chose option 1.\n";
//    // Add code here for what should happen under option 1
//    break;
//    case 2:
//     cout << "You chose option 2.\n";
//    // Add code here for what should happen under option 2
//    break;
//    case 3:
//     cout << "You chose option 3.\n";
//    // Add code here for what should happen under option 3
//    break;
//    case 4:
//     cout << "Goodbye!\n";
//    break;
//    default:
//     // Message for invalid choices
//      cout << "Error: '" << choice << "' is not a valid option. Please choose a number between 1 and 4.\n";
//    break;
//   }
//  } while (choice != 4);
//
//  return 0;
// }


// #include <iostream>  // Corrected the include for iostream
// using namespace std;

// int main() {
//
//  int userInput = 0;
//  int total = 0;
//
//  // Fixed the while loop condition
//  while (true) {
//   cout << "Enter a number to add or enter 0 to exit: ";
//   cin >> userInput;
//
//   // If the user enters 0 or a negative number, exit the loop
//   if (userInput <= 0)
//    break;
//
//   // Add the user input to the total
//   total = total + userInput;
//
//   // Output the current total
//   cout << "The total is " << total << endl;
//  }
//
//  return 0;
// }



// #include <iostream>  // Corrected the include for iostream
// using namespace std;
//
// int main() {
//  int sum = 0, num;  // Declare and initialize variables inside the function
//
//  do {
//   // Prompt the user to enter a number
//   cout << "Enter a number to add to the total (or enter a negative number to exit): ";
//   cin >> num;  // Input the number
//
//   if (num < 0) {
//    cout << "Negative number found. Exiting...\n";
//    break;  // Stop the loop when a negative number is found
//   }
//
//   sum += num;  // Add the number to the sum
//   cout << "Current total is: " << sum << endl;  // Display the current total
//
//  } while (true);  // Continue looping indefinitely until break
//
//  cout << "Final total sum: " << sum << endl;  // Output the final total sum
//
//  return 0;
// }





// #include <iostream>  // Include iostream to handle input and output
// using namespace std;
//
// int main() {  // Everything should be inside the main function
//
//  // First while loop with continue statement
//  // This loop doesn't terminate when a negative number is found
//  int sum = 0;  // Declare and initialize sum
//  int num;  // Declare num to store user input
//
//  cin >> num;  // Take the first input
//
//  while (cin) {  // Continue while the input is valid
//   if (num < 0) {  // If a negative number is found
//    cout << "Negative number found in data." << endl;
//    cin >> num;  // Read the next number
//    continue;  // Skip the rest of the loop iteration
//   }
//   sum += num;  // Add the number to the sum
//   cin >> num;  // Read the next number
//  }
//  cout << "Total: " << sum << endl;  // Output the total sum
//
//  // Reset the cin stream in case of any input errors
//  cin.clear();
//  cin.ignore(200, '\n');
//
//  // Second while loop without continue statement
//  // This loop also doesn't terminate when a negative number is found
//  sum = 0;  // Reset sum to 0
//  cin >> num;  // Take the first input
//
//  while (cin) {  // Continue while the input is valid
//   if (num > 0)  // If a positive number is found
//    sum += num;  // Add the number to the sum
//   else  // If a negative number is found
//    cout << "Negative number found in data." << endl;
//
//   cin >> num;  // Read the next number
//  }
//
//  cout << "Total: " << sum << endl;  // Output the final sum
//
//  return 0;  // Return 0 to indicate successful execution
// }








// Program to display a multiplication table
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
 // Set up variables
 int row, col;
 // Header for the multiplication table
 cout << "   |";
 for (col = 1; col <= 10; col++)
  cout << setw(4) << col;
 cout << "\n";
 cout << "----------------------------------------------\n";
 // Nested for loop for the multiplication table
 for (row = 1; row <= 10; row++) // Each table row
 {
  cout << setw(2) << row << " |";
  for (col = 1; col <= 10; col++) // Each column for the row
   cout << setw(4) << row * col;
  cout << endl;
 }
 return 0;
}
