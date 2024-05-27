/*
    Based on an integer value entered by keyboard, you are asked to report:
        a) The fifth part of said value
        b) The remainder of the division by 5
        c) The seventh part of the result of point a)
*/

#include <iostream>
using namespace std;

// I created a function to request an integer data.

void request_int_data(string message, int &value){
    cout << message;
    cin >> value;
}

// Now I create the resolving functions.

float a_(int entered_value){
    float result = 0;
    return result = entered_value / 5;
}
float b_(int entered_value){
    float result = 0;
    return result = entered_value % 5;
}
float c_(float a_result){
    float result = 0;
    return result = a_result / 7;
}

int main () {
    // I create and initialize variable with the entered value.
    int entered_value = 0;
    // I ask for the value data.
    request_int_data("Enter an integer value: ", entered_value);
    // I show the results.
    cout << "a) The fifth part of said value: " << a_(entered_value) << endl;
    cout << "b) The remainder of the division by 5: " << b_(entered_value) << endl;
    cout << "c) The seventh part of the result of point a): " << c_(a_(entered_value));
 return 0;
}