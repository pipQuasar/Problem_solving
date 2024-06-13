/*
    Given a set of integer values, calculate and report a) how many zero values ​​there were, b) average of
    positive values, c) sum of negative values.
    Solve the exercise for the following batches of data:
    1) 167 integer values
    2) N values, where the value of N must be read previously
    3) The set of values ​​ends with a value equal to the previous one
    4) N ​​values ​​are given, but the process should end if all values ​​are processed or if the number of zeros
    exceeds four
    5) N values ​​are given, but the process must end if any of the conditions in 4) are met or if the
    average of positives is greater than six.
*/
#include <iostream>
using namespace std;


void request_int_data(string message, int &value){
    cout << message;
    cin >> value;
}

int how_many_zeros(int num, int &counter){
    if (num == 0) counter ++;
    return counter;
}



void _167_integers(int _167_values){
    
}


int main () {
 
 return 0;
}