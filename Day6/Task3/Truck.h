#ifndef TRUCK_H
#define TRUCK_H

#include "Vehicle.h"

class Truck : public Vehicle
{
private:
  float cargoWeightLimit; // kilograms

public:
  Truck(string model, string regNum, int speed, double fuelCap, double fuelCons, float cargoLimit)
      : Vehicle(model, regNum, speed, fuelCap, fuelCons)
  {
    this->cargoWeightLimit = cargoLimit;
  }

  void setCargoWeightLimit(float cargoLimit)
  {
    this->cargoWeightLimit = cargoLimit;
  }

  float getCargoWeightLimit()
  {
    return cargoWeightLimit;
  }

  void displayInfo() override
  {
    Vehicle::displayInfo();
    cout << "Cargo Weight Limit: " << cargoWeightLimit << " kg" << endl;
  }
};

#endif // TRUCK_H
