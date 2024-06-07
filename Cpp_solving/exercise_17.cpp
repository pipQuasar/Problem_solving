/*
    Given a value M, determine and issue a list with the first M multiples of 3 that are not multiples of 5,
    within the set of natural numbers.
*/
#include <iostream>
using namespace std;

void return_multiples_of_3_not_5(int M_value){
    for (int i = 0; i <= M_value; i++)
    {
        if ((i*3) % 5 == 0) continue;
        else cout << i*3 << endl;
    }
}

int main () {
    return_multiples_of_3_not_5(11);
 return 0;
}