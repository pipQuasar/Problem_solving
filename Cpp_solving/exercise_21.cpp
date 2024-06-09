/*
    Given a set of values, ending with a null value, determine and print (if there were values):
    a) The maximum negative value
    b) The minimum positive value
    c) The minimum value within the range -17.3 and 26.9
    d) The average of all values.
*/
#include <iostream>
using namespace std;

void request_int_data(string message, int &value){
    cout << message;
    cin >> value;
}
// A)
void find_maximum_negative(int value, int &maximum_negative){
    if (value > maximum_negative && value < 0)
    {
        maximum_negative = value;
    }
}
// B)
void find_minimum_positive(int value, int &minimum_positive){
    if (value < minimum_positive && value > 0)
    {
        minimum_positive = value;
    }
}
// C)
void minimum_value_within(int value, int &minimum_within){
    if (value < minimum_within && (value >= -17.3 && value < 26.9))
    {
        minimum_within = value;
    }
}
// D)
int average_of_all_value(int sum_of_values, int averager){
    int average = sum_of_values / averager;
    return average;
}

void set_of_values(){
    int value = 0, maximum_negative = INT32_MIN, minimum_positive = INT32_MAX, minimum_within = INT32_MAX;
    int averager = 0, sum_of_values = 0;


    request_int_data("Enter a value: ", value);
    if (value == 0) return;
    else{
        while (value != 0)
        {   
            sum_of_values += value;
            averager++;
            find_maximum_negative(value, maximum_negative);
            find_minimum_positive(value, minimum_positive);
            minimum_value_within(value, minimum_within);
        }
        average_of_all_value(sum_of_values,averager);
    }
}

int main () {
    set_of_values();
 return 0;
}