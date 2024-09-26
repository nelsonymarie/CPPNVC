//************************************************************************
// Author: Misael Cuadrado
// Date: Current date.
// Language: C++
// Assignment: Alamo Hotel Reservation System
// Description: A simple reservation system for calculating hotel costs.
//************************************************************************/

#include <iostream>  // include the iostream library to allow input and output
#include <iomanip>   // include the iomanip library for formatting output
using namespace std;  // use the standard namespace so we don't need to prefix with 'std::'

int main() // not here
{ // here

    // declare variables to store user input and calculations
    string eventName;
    int numRooms, numDays;
    double roomCost, totalBeforeDiscount, discountRate = 0.0, discountAmount, totalAfterDiscount, tax, finalAmountDue;

    // output welcome message
    cout << "Welcome to the Alamo Hotel Reservations System" << endl;

    // prompt user for event details
    cout << "What is the event name: ";
    cin >> eventName;
    cout << "How many rooms will be needed: ";
    cin >> numRooms;
    cout << "What is the cost per room per night: ";
    cin >> roomCost;

    // ensure room cost is at least $100
    if (roomCost < 100)
        roomCost = 100.00;

    cout << "How many days is the reservation: ";
    cin >> numDays;

    // calculate total cost before discount
    totalBeforeDiscount = numRooms * roomCost * numDays;

    // determine discount rate based on number of rooms
    if (numRooms >= 10) {
        discountRate = 0.30;  // 30% discount for 10 or more rooms
    } else if (numRooms >= 5) {
        discountRate = 0.20;  // 20% discount for 5-9 rooms
    } else if (numRooms >= 3) {
        discountRate = 0.10;  // 10% discount for 3-4 rooms
    }

    // calculate discounted total and tax
    discountAmount = totalBeforeDiscount * discountRate;
    totalAfterDiscount = totalBeforeDiscount - discountAmount;
    tax = totalAfterDiscount * 0.08;  // apply an 8% sales tax
    finalAmountDue = totalAfterDiscount + tax;

    // output detailed billing information
    cout << fixed << setprecision(2);
    cout << "Event: " << eventName << endl;
    cout << "The cost of 1 room for " << numDays << " days: $" << roomCost * numDays << endl;
    cout << "The cost of all rooms for all days without discount: $" << totalBeforeDiscount << endl;
    cout << "The cost of all rooms with discount: $" << totalAfterDiscount << endl;
    cout << "Total Discount Applied: $" << discountAmount << endl;
    cout << "Tax Due: $" << tax << endl;
    cout << "Total Invoice: $" << finalAmountDue << endl;

    // output closing message
    cout << "Thanks for using the Alamo Hotel Reservation System" << endl;

} // end

// Support References from w3schools to get perspective on how to build code
// https://www.learncpp.com/
// https://onecompiler.com/posts/3tftt6wu8/c-program-to-calculate-discount