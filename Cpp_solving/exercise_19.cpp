/*
    Given N values, report the largest, smallest, and at what position 
    in the set they were entered.
*/
#include <iostream>
using namespace std;

void request_int_data(string message, int &value){
    cout << message;
    cin >> value;
}

void largest_smallest_and_positions(int N_values){
    int value = 0; 
    int largest = INT32_MIN, largest_position = 0;
    int smallest = INT32_MAX, smallest_position = 0;

    for (int i = 0; i < N_values; i++)
    {
        request_int_data("Enter a value: ", value);
        if (value > largest){
            largest = value;
            largest_position = i;
        }
        if (value < smallest)
        {
            smallest = value;
            smallest_position = i;
        }
    }
    cout << "The largest value is: " << largest << ". And it appears in the position: " << largest_position << endl;
    cout << "The smallest value is: " << smallest << ". And it appears in the position: " << smallest_position;
}

int main () {
    largest_smallest_and_positions(5);
 return 0;
}