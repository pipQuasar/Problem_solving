/*
    Given two dates, report which is the most recent. Determine what would be the 
    input data and legends to be reported according to the requested process.
*/

#include <iostream>
using namespace std;

// I created a function to request an integer data.
void request_int_data(string message, int &value){
    cout << message;
    cin >> value;
}

// Now I create the resolving function.
int most_recent_date(){
    int date_1 = 0, date_2 = 0;

    request_int_data("Please enter a valid date (AAAAMMDD): ", date_1);
    request_int_data("Please enter a new valid date (AAAAMMDD): ", date_2);

    if (date_1 > date_2 && date_1 <= 20240529) return date_1;
    else return date_2;
}

// Showing the most recent in main()
int main () {
    int recent_date = most_recent_date();
    cout << "The most recent date is: " << recent_date;
 return 0;
}