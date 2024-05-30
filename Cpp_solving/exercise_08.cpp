/*
    Given a triangle represented by its sides L1, L2, L3, determine and print a legend as appropriate:
    equilateral, isosceles or scalenes.
*/

#include <iostream>
using namespace std;

void wich_triangle (int side_1, int side_2, int side_3){
    if ((side_1 == side_2 && side_1 != side_3) || 
        (side_2 == side_3 && side_2 != side_1) || 
        (side_3 == side_1 && side_3 != side_2)){
        cout << "Its an isosceles triangle!";
    }
    else if (side_1 != side_2 && side_2 != side_3 && side_3 != side_1){
        cout << "Its a scalenes triangle!";
    }
    else cout << "Its an equilateral triangle!";
}

int main () {
    wich_triangle(1,1,2);
 return 0;
}