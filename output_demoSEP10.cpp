#include <iostream>
#include <string>
using namespace std;

int main() {
    // declare local variables
    string firstName, lastName; // holds the client's name
    string phoneNumber; // holds the phone number

    cout << "Demo of cin feature\n";

    // get user input
    cout << "Please enter first name, last name and phone number:\n";
    cin >> firstName >> lastName >> phoneNumber;

    // display the entered information
    cout << "\nYou entered:\n";
    cout << "Name: " << firstName << " " << lastName << endl;
    cout << "Phone: " << phoneNumber << endl;

    // declare variables
    char myChar;
    // get user input
    cout << "press a key: ";
    cin.ignore(); // Clear the input buffer
    myChar = cin.get();  // read single character
    cout << "you pressed: " << myChar << endl;

    return 0;
}