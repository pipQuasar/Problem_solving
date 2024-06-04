/*
    Enter and report values, as long as the value entered is not negative. Report the number of values
    entered.
*/
#include <iostream>
using namespace std;

void request_int_data(string message, int &value){
    cout << message;
    cin >> value;
}

int number_of_values(){
    int value = 0, number_of_values = 0;
    while (value >= 0)
    {
        request_int_data("Enter a value: ", value);
        cout << "Entered value: " << value << endl << endl;
        number_of_values++;
    }
    return number_of_values;
}

int main () {
    cout << "Number of values: " << number_of_values();
 return 0;
}