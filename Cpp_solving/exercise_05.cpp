/*
    Given two distinct integer values, issue an appropriate legend that reports 
    which is the greatest among them.
*/

#include <iostream>
using namespace std;

// I create the resolving function
int show_greatest(int value_1, int value_2){
    if (value_1 > value_2) return value_1;
    else return value_2;
}

// Showing the greatest in main()
int main () {
    int result = show_greatest(10,20);
    cout << "The gratest number is: " << result << endl;
 return 0;
}