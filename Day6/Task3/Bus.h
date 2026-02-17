#ifndef BUS_H
#define BUS_H

#include "Vehicle.h"

class Bus : public Vehicle
{
private:
  int numPassengers;

public:
  Bus(string model, string regNum, int speed, double fuelCap, double fuelCons, int passengers)
      : Vehicle(model, regNum, speed, fuelCap, fuelCons)
  {
    this->numPassengers = passengers;
  }

  void setNumPassengers(int passengers)
  {
    this->numPassengers = passengers;
  }

  int getNumPassengers()
  {
    return numPassengers;
  }

  void displayInfo() override
  {
    Vehicle::displayInfo();
    cout << "Number of Passengers: " << numPassengers << endl;
  }
};

#endif // BUS_H
