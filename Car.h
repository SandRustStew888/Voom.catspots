#ifndef CAR_H
#define CAR_H

#include<string>
#include <Vehicle.h>


class Car : public Vehicle
{
    public:
        Car();
        Car(unsigned int, string, string, unsigned int);
        virtual ~Car();

        unsigned int GetnumDoors() { return numDoors; }
        void SetnumDoors(unsigned int val) { numDoors = val; }

        void displayInfo() const;

    protected:

    private:
        unsigned int numDoors;
};

#endif // CAR_H
