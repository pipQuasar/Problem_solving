/*
    Given two integer values ​​A and B, report the addition, subtraction, and product.
*/

#include <iostream>
using namespace std;

// I proceed to create resolving functions

int adittion(int a = 0, int b = 0){
    int result = a + b;
    return result;
}
int subtraction(int a = 0, int b = 0){
    int result = a - b;
    return result;
}
int product(int a = 0, int b = 0){
    int result = a * b;
    return result;
}

//  Now I assign the results of each function to a variable and then show its final value

int main () {
    int final_sum = adittion(10,5); cout << "Adittion: " <<final_sum << "\n";
    int final_sub = subtraction(20, 10); cout << "Subtraction: " <<final_sub << "\n";
    int final_pro = product(10,10); cout << "Product: " <<final_pro;
 return 0;
}