#include <iostream>
#include "Circle.h"
#include "Cylinder.h"

using namespace std;

int main()
{
  Circle circle(5.0, "blue");
  cout << circle.getInfo() << endl;
  cout << "Area: " << circle.getArea() << endl;

  Cylinder cylinder(5.0, "green", 10.0);
  cout << cylinder.getInfo() << endl;
  cout << "Volume: " << cylinder.getVolume() << endl;

  return 0;
}