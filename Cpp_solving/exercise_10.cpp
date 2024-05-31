/*
    Enter an age, display one of the following legends on the screen:
    ❖ 'minor' if the age is less than or equal to 12
    ❖ 'cadet' if the age is between 13 and 18
    ❖ 'juvenile' if the age is greater than 18 and does not exceed 26
    ❖ 'major' in the case that does not meet any of the previous conditions
*/

#include <iostream>
using namespace std;

// I created a function to request an integer data
void request_int_data(string message, int &value){
    cout << message;
    cin >> value;
}

// Now i create the resolutive function
string wich_leyend(){
    int age = 0;
    request_int_data("Enter your age: ", age);

    if (age <= 12) return "minor";
    else if (age <= 18) return "cadet";
    else if (age <= 26) return "juvenile";
    else return "major"; 
}
int main () {
    // Showing the leyend
    cout << wich_leyend();
 return 0;
}