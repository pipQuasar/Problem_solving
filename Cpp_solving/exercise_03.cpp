/*
    Given an integer of the form (YYYYMMDD), which represents a valid date, display the day, month and
    year it represents.
*/

#include <iostream>
using namespace std;

// I created a function to request an integer data.

void request_int_data(string message, int &value){
    cout << message;
    cin >> value;
}

// Now I build the function that will be in charge of performing the operation and displaying the result.

void display_valid_date(){
    // Create and initialize variables.
    int YYYYMMDD = 0, year = 0, month = 0, day = 0;
    // Nested function.
    request_int_data("Enter a valid date (YYYYMMDD): ", YYYYMMDD);
    // Operation.
    year = YYYYMMDD / 10000; 
    month = (YYYYMMDD / 100) % 100;
    day = YYYYMMDD % 100;
    // Display.
    cout << "The resulting date is: " << year << "/" << month << "/" << day;
}

int main () {
    // We use the function
    display_valid_date();
 return 0;
}