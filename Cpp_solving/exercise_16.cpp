/*
    A set of float values ​​is entered, each representing the salary of an employee,
    except the last value which is zero and indicates the end of the set. It is requested to 
    develop a program that determines and reports:
        a) How many employees earn less than $1,520.
        b) How many earn $1,520 or more but less than $2,780.
        c) How many earn $2,780 or more but less than $5,999.
        d) How many earn $5,999 or more.
*/
#include <iostream>
using namespace std;

void request_float_data(string message, float &value){
    cout << message;
    cin >> value;
}

void show_messagge(string mensaje, int &how_many_earns){
    cout << mensaje << how_many_earns << endl;
}

void employees_earns(){
    float salary = 0;
    int how_many_earn_A = 0, how_many_earn_B = 0, how_many_earn_C = 0, how_many_earn_D = 0;

    cout << "The bucle will end if the value is zero\n";
    while (true)
    {
        request_float_data("Enter you salary: ", salary);
        if (salary == 0) break;

        if (salary < 1520) how_many_earn_A++;
        else if (salary < 2780) how_many_earn_B++;
        else if (salary < 5999) how_many_earn_C++;
        else how_many_earn_D++; 
    }
    
    show_messagge("How many employees earn less than $1,520: ", how_many_earn_A);
    show_messagge("How many earn $1,520 or more but less than $2,780: ", how_many_earn_B);
    show_messagge("How many earn $2,780 or more but less than $5,999: ", how_many_earn_C);
    show_messagge("How many earn $5,999 or more: ", how_many_earn_D);
}

int main () {
    employees_earns();
 return 0;
}