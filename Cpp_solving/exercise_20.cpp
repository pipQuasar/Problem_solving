/*
    Given a set of Names and Birthdates (YYYYMMDD), ending with a Name =
    'END', inform the name of the oldest person and the youngest.
*/
#include <iostream>
using namespace std;

void advice(string message){
    cout << message;
}

void request_int_data(string message, int &value){
    cout << message;
    cin >> value;
}

void request_string_data(string message, string &value){
    cout << message;
    cin >> value;
}

void asign_oldest_person(int yyyymmdd, int &date_oldest, string name, string &oldest_person_name){
    if (yyyymmdd < date_oldest)
        {
            date_oldest = yyyymmdd;
            oldest_person_name = name;
        }
}

void asign_youngest_person(int yyyymmdd, int &date_youngest, string name, string &youngest_person_name){
    if (yyyymmdd > date_youngest)
        {
            date_youngest = yyyymmdd;
            youngest_person_name = name;
        }
}

void inform_oldest_and_youngest(string youngest_name, string older_name){
    cout << "The name of the oldest person is: " << older_name << endl;
    cout << "The name of the youngest peron is: " << youngest_name;
}

// Main function
void oldest_and_youngest(){
    int yyyymmdd = 0, date_oldest = INT32_MAX, date_youngest = INT32_MIN;
    string name, oldest_person_name, youngest_person_name;

    advice("The algorithm finish if Name = 'FIN'\n");
    request_string_data("Enter your name: ", name);
    while (name != "FIN")
    {
        request_int_data("Enter your birthdate (YYYYMMDD): ", yyyymmdd);

        asign_oldest_person(yyyymmdd, date_oldest, name, oldest_person_name);
        asign_youngest_person(yyyymmdd, date_youngest, name, youngest_person_name);

        request_string_data("Enter your name: ", name);
    }
    inform_oldest_and_youngest(youngest_person_name, oldest_person_name);
}

int main () {
    oldest_and_youngest();
 return 0;
}