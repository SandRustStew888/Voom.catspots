/* * * * * * * * * * * * * * * * * *
* Seth Andrus
* CIS 1202 201
* 2023/Nov/24
* and the Vroom it went Vroom oh boy what a Vroom
* * * * * * * * * * * * * * * * * */

#include<iostream>
#include "Car.h"
#include "Truck.h"


using namespace std;


/* * * * * * * * * * * * * * * * * *
* to test the classes and methods.
* * * * * * * * * * * * * * * * * */
int main() {

    // Get input from the user for manufacturer and year built,
    // then store this information in a Vehicle object.
    //  Call the displayInfo method and display it on the output.
    string manufacturerer, model;
    unsigned int year, other;

    cout << "Enter Vehicle Manufacturer : ";
    getline(cin, manufacturerer);
    cout << "Enter Vehicle Year : ";
    cin  >> year;
    cin.ignore(); // getline
    cout << "Enter Vehicle Model : ";
    getline(cin, model);

    Vehicle vroomA(year, manufacturerer, model);

    vroomA.displayInfo();
    cout << endl;

    // Get input from the user for manufacturer, year built,
    // and number of doors, then store this information in a Car object.
    //  Call the displayInfo method and display it on the output.

    cout << "Enter Car Manufacturer : ";
    getline(cin, manufacturerer);
    cout << "Enter Car Year : ";
    cin  >> year;
    cin.ignore(); // getline
    cout << "Enter Car Model : ";
    getline(cin, model);
    cout << "Enter Number of Doors : ";
    cin  >> other;
    cin.ignore(); // getline

    Car vroomB(year, manufacturerer, model, other);

    vroomB.displayInfo();
    cout << endl;

    // Get input from the user for manufacturer, year built, and towing capacity,
    // then store this information in a Truck object.
    //  Call the displayInfo method and display it on the output.

    cout << "Enter Truck Manufacturer : ";
    getline(cin, manufacturerer);
    cout << "Enter Truck Year : ";
    cin  >> year;
    cin.ignore(); // getline
    cout << "Enter Truck Model : ";
    getline(cin, model);
    cout << "Enter Kg's of Towing Capacity : ";
    cin  >> other;
    cin.ignore(); // getline

    Truck vroomC(year, manufacturerer, model, other);

    vroomC.displayInfo();
    cout << endl;

    return 0;
}
