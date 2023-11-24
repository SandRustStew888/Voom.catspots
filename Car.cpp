/* * * * * * * * * * * * * * * * * *
* Seth Andrus
* CIS 1202 201
* 2023/Nov/24
* Car class implementation
* * * * * * * * * * * * * * * * * */

#include<iostream>
#include<string>
#include "Car.h"

using namespace std;


Car::Car(unsigned int year, string manuf, string model, unsigned int doors) : Vehicle(year, manuf, model) {
    numDoors = doors;
}

Car::Car() : Car(2001, "", "", 4)
{
    //ctor
}

void Car::displayInfo() const {
    Vehicle::displayInfo();
    cout << " with " << numDoors << " doors !";
}

Car::~Car()
{
    //dtor
}
