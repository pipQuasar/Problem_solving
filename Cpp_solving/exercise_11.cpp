/*
    Report the first 100 natural numbers and their sum
*/

#include <iostream>
using namespace std;

int main () {
 int sum = 0;
 for (int i = 1; i <= 100; i++)
 {
    cout << i << endl;
    sum += i;
 }

 cout << "Final sum result: " << sum;
 return 0;
}