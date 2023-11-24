/* * * * * * * * * * * * * * * * * *
* Seth Andrus
* CIS 1202 201
* 2023/Nov/24
* Truck class implementation
* * * * * * * * * * * * * * * * * */

#include "Truck.h"
#include<iostream>


using namespace std;

Truck::Truck(unsigned int year, string manuf, string model, unsigned int oomph) : Vehicle(year, manuf, model) {
    towForce = oomph;
}

Truck::Truck() : Truck(2002, "", "", 750)
{
    //ctor
}

void Truck::displayInfo() const {
    Vehicle::displayInfo();
    cout << " with " << towForce << " Kg of towing force."; // Metric Tonnes Best Tonnes.
}

Truck::~Truck()
{
    //dtor
}
