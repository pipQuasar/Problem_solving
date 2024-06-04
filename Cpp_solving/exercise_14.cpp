/*
    An inspection is carried out at a paint factory, and 20 violations were detected. For each violation
    took note of the following data:
    - Type of Violation (1, 2, 3, or 4)
    - Reason for the violation
    - Value of the fine
    - Seriousness of the infraction ('L', 'M', 'G')
    It is requested to report at the end of the process:
    • The total values ​​of the fine to pay according to the type of severity.
    • The legend “Close factory” if the number of violations 3 and 4 with severity “G” are greater than 3.
*/
#include <iostream>
using namespace std;

void request_int_data(string message, int &value){
    cout << message;
    cin >> value;
}

void request_char_data(string message, char &value){
    cout << message;
    cin >> value;
}

void request_string_data(string message, string &value){
    cout << message;
    getline(cin, value);
}

void factory_inspection(){
    string reason;
    int type_violation = 0, value_of_fine = 0, G_counter = 0;
    char seriousness_infraction;

    for (int i = 0; i < 5; i++)
    {
        if (G_counter > 3)
        {
            cout << "Close factory.";
            break;
        }
        else{
            request_int_data("Enter the type of violation (1, 2, 3, or 4)",type_violation);
            request_string_data("Reason for the violation: ", reason);
            request_char_data("Seriousness of the infraction ('L', 'M', 'G'): ", seriousness_infraction);
            switch (seriousness_infraction)
            {
            case 'L':
            case 'l':
                value_of_fine += 1500;
                break;
            case 'M':
            case 'm':
                value_of_fine += 3500;
                break;
            case 'G':
            case 'g':
                value_of_fine += 7000;
                break;
            default:
                cout << "You did not enter a valid value, please try again.";
                break;
            }

            if ((type_violation == 3 and (seriousness_infraction == 'G' or seriousness_infraction == 'g')) or 
                type_violation == 4 and (seriousness_infraction == 'G' or seriousness_infraction == 'g')) 
            {
                G_counter++;
            }
        }
    }
    cout << "Final value of fine: " << value_of_fine << "$";
}

int main () {
    factory_inspection();
 return 0;
}