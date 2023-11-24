/* * * * * * * * * * * * * * * * * *
* Seth Andrus
* CIS 1202 201
* 2023/Nov/24
* Parent class Vehicle implementation
* * * * * * * * * * * * * * * * * */

#include "Vehicle.h"
#include<iostream>
using namespace std;

Vehicle::Vehicle(unsigned int yer, string manufat, string model) {
    manufaturer = manufat;
    yearBuilt = yer;
    modal = model;
}

Vehicle::Vehicle() : Vehicle(2000, "", "")
{
    //ctor
}

void Vehicle::displayInfo() const {
    cout << yearBuilt << ' ' << manufaturer << ' ' << modal;
}

Vehicle::~Vehicle()
{
    //dtor
}
