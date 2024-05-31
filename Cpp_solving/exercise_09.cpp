/*
    Given a month and the corresponding year, report how many days the month has.
*/
#include <iostream>
using namespace std;

// I created a function to request an integer data
void request_int_data(string message, int &value){
    cout << message;
    cin >> value;
}

// Now i create the resolutive function
int how_many_days(){
    int year = 0, month = 0, days = 0;
    request_int_data("Insert a year: ", year);
    request_int_data("Insert a month: ", month);

    switch (month)
    {
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
        days = 31;
        break;
    case 4:
    case 6:
    case 9:
    case 11:
        days = 30;
        break;
    case 2:
        if ((year % 4 == 0 and year % 100 != 0) or (year % 400 == 0))
        {
            days = 29;
        }
        else days = 28;
        break;
    default:
        cout << "You didn't insert a value, try again.";
        break;
    }
    return days;
}

int main () {
    // Create a variable that contain the days
    int days = how_many_days();
    // Show the result
    cout << "The month that you inserted has " << days << " days!";
 return 0;
}