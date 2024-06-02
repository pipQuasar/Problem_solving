/*
    Given N and M natural numbers, report their product by successive sums.
*/
#include <iostream>
using namespace std;

int sucesive_sums(int N, int M){
    int result = 1;
    for (int i = 1; i <= M; i++)
    {
        result = N*i;
    }
    return result;
}

int main () {
    cout << "result: " << sucesive_sums(3,15);
 return 0;
}