/*
    Given 10 values ​​report the largest
*/
#include <iostream>
using namespace std;

void request_int_data(string message, int &value){
    cout << message;
    cin >> value;
}

void largest_of_ten(){
    int value = 0, largest = INT32_MIN;
    for (int i = 0; i < 10; i++)
    {
        request_int_data("Enter a value: ", value);
        if (value > largest) largest = value; 
    }
    cout << "The largest number is: " << largest;
}

int main () {
    largest_of_ten();
 return 0;
}