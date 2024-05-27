/*
    Given a triple of natural numbers that represent the day, the month and the year of a given
    date, report it as a single 8-digit natural number in the form (YYYYMMDD).    
*/

#include <iostream>
using namespace std;

// I created a function to request an integer data.

void request_data(string message, int &value){
    cout << message;
    cin >> value;
}

//  Now I create a function which will operate with the data entered by the user
// through nesting functions and then return an expected final result.

int date_8digits(){
    int day = 0, month = 0, year = 0;
    request_data("Enter a value for 'year'(YYYY): ", year);
    request_data("Enter a value for 'month'(MM): ", month);
    request_data("Enter a value for 'day'(DD): ", day);

    int YYYYMMDD = (year * 10000) + (month * 100) + day;
    return YYYYMMDD;
}

// Now i create a variable that contains function value and return it.

int main () {
   int YYYYMMDD = date_8digits();
   cout << YYYYMMDD;
 return 0;
}