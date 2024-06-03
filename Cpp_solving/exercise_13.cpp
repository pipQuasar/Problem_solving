/*
    Given 50 integers, report A) the average of those greater than 100 and B) the sum of those less than
    –10.
*/
#include <iostream>
using namespace std;

void request_int_data(string message, int &value){
    cout << message;
    cin >> value;
}

void A_and_B(){
    int value = 0;
    int averager = 0, average = 0, sum_graters_than = 0;
    int sum_less_than = 0;

    for (int i = 0; i < 5; i++)
    {
        request_int_data("Enter a value: ", value);
        if (value > 100)
        {
            sum_graters_than += value;
            averager++;
        }
        if (value < -10)
        {
            sum_less_than+=value;
        }
    }
    average = sum_graters_than / averager;

    cout << "The average of those greater than 100 is: " << average << endl;
    cout << "The sum of those less than -10 is: " << sum_less_than;
}

int main () {
    A_and_B();
 return 0;
}