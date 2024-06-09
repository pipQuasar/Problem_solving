/*
    A cargo ship transports 100 containers to three different ports in the country.
    The ports are identified with numbers 1, 2 and 3.
    The following data is recorded for each container that the ship transports:
    - Container identification
    - Container weight in kg
    - Port of arrival (a value from 1 to 3).
    It is requested to calculate and report:
    1) The total weight that the ship must carry
    2) Identification of the heaviest container
    3) The number of containers that must be transported to each port
*/
#include <iostream>
using namespace std;

void request_int_data(string message, int &value){
    cout << message;
    cin >> value;
}

void request_string_data(string message, string &value){
    cout << message;
    cin >> value;
}

void how_many_containers_to_each_port(int port, int &containers_to_port1, int &containers_to_port2, int &containers_to_port3){
    switch (port)
    {
    case 1:
        containers_to_port1++;
        break;
    case 2:
        containers_to_port2++;
        break;
    case 3:
        containers_to_port3++;
        break;
    default:
        cout << "Please enter a valid port";
        break;
    }
}

void show_results(int total_weight, string heaviest_container_id, int containers_to_port1, int containers_to_port2, int containers_to_port3){
    // 1)
    cout << endl;
    cout << "The total weight that the ship must carry: " << total_weight << "KG" << endl;
    // 2)
    cout << "Identification of the heaviest container: " << heaviest_container_id << endl;
    // 3)
    cout << "The number of containers that must be transported to each port: " << endl;
    cout << "Port 1: " << containers_to_port1 << "\nPort 2: " << containers_to_port2 << "\nPort 3: " << containers_to_port3;
}

void cargo_ship_transports(){
    string container_id, heaviest_container_id;
    int container_weight = 0, heaviest_container_weight = INT32_MIN;
    int total_weight = 0, wich_port = 0;
    int containers_to_port1 = 0, containers_to_port2 = 0, containers_to_port3 = 0;

    for (int i = 0; i < 10; i++)
    {   
        cout << "Container " << i+1 << endl;
        request_string_data("Enter container id (ej: #aBcdEf): #", container_id);
        request_int_data("Enter container weight KG: ", container_weight);
        total_weight+=container_weight;
        if (container_weight > heaviest_container_weight)
        {
            heaviest_container_id = container_id;
            heaviest_container_weight = container_weight;
        }

        request_int_data("To wich port you want to sent this container? (1, 2 or 3): ", wich_port);
        while (wich_port != 1 && wich_port != 2 && wich_port != 3)
        {
            request_int_data("You has introduced an invalid port, please try again\nTo wich port you want to sent this container? (1, 2 or 3): ", wich_port);
        }
        how_many_containers_to_each_port(wich_port, containers_to_port1, containers_to_port2, containers_to_port3);
    }
    show_results(total_weight, heaviest_container_id, containers_to_port1, containers_to_port2, containers_to_port3);
}

int main () {
    cargo_ship_transports();
 return 0;
}