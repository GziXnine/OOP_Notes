#ifndef VEHICLE_H
#define VEHICLE_H

#include <iostream>

using namespace std;

class Vehicle
{
private:
  string model;
  string registrationNumber;
  int speed;              // km/hour
  double fuelCapacity;    // liters
  double fuelConsumption; // liter/km

public:
  Vehicle(string model, string regNum, int speed, double fuelCap, double fuelCons)
  {
    this->model = model;
    this->registrationNumber = regNum;
    this->speed = speed;
    this->fuelCapacity = fuelCap;
    this->fuelConsumption = fuelCons;
  }

  virtual void displayInfo()
  {
    cout << "Model: " << model << endl;
    cout << "Registration Number: " << registrationNumber << endl;
    cout << "Speed: " << speed << " km/h" << endl;
    cout << "Fuel Capacity: " << fuelCapacity << " liters" << endl;
    cout << "Fuel Consumption: " << fuelConsumption << " liters/km" << endl;
  }
};

#endif // VEHICLE_H
