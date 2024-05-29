/*
    Given three values, determine and print a legend accordingly: 
    “They form a triangle” or “They do not form a triangle.”
*/

#include <iostream>
using namespace std;

// I create the resolving function.
void form_or_not_a_triangle(int value1, int value2, int value3){
    if ((value1 == value2 && value1 != value3) || 
        (value2 == value3 && value2 != value1) || 
        (value3 == value1 && value3 != value2))
    {
        cout << "They form a triangle!";
    }
    else cout << "They do not form a triangle";
}

// Showing if they form a triangle or not
int main () {
    form_or_not_a_triangle(2,3,2);
 return 0;
}