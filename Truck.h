#ifndef TRUCK_H
#define TRUCK_H

#include <Vehicle.h>
#include<string>


class Truck : public Vehicle
{
    public:
        Truck();
        Truck(unsigned int, string, string, unsigned int);
        virtual ~Truck();

        unsigned int GettowForce() { return towForce; }
        void SettowForce(unsigned int val) { towForce = val; }

        void displayInfo() const;

    protected:

    private:
        unsigned int towForce;
};

#endif // TRUCK_H
