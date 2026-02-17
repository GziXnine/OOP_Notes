#include <iostream>
#include "Vehicle.h"
#include "Bus.h"
#include "Truck.h"

using namespace std;

int main()
{
  Bus bus("Volvo B9TL", "BUS123", 80, 300, 0.5, 50);
  Truck truck("Mercedes Actros", "TRK456", 120, 400, 0.8, 20000);
  cout << "Bus Information:" << endl;
  cout << "-----------------" << endl;
  bus.displayInfo();

  cout << "------------------------------" << endl;

  cout << "Truck Information:" << endl;
  cout << "-----------------" << endl;
  truck.displayInfo();

  return 0;
}