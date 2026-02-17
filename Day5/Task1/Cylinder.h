#ifndef CYLINDER_H
#define CYLINDER_H

#include "Circle.h"

class Cylinder : public Circle
{
private:
  double height = 1.0;

public:
  Cylinder() {};

  Cylinder(double radius) : Circle(radius) {};

  Cylinder(double radius, double height) : Circle(radius)
  {
    this->height = height;
  };

  Cylinder(double radius, string color, double height) : Circle(radius, color)
  {
    this->height = height;
  };

  double getHeight() const
  {
    return height;
  }

  void setHeight(double height)
  {
    if (height > 0)
      this->height = height;
  }

  double getVolume() const
  {
    return Circle::getArea() * height;
  }

  string getInfo() const
  {
    return "Cylinder[radius=" + to_string(getRadius()) + ", color=" + getColor() + ", height=" + to_string(getHeight()) + "]";
  }
};

#endif // CYLINDER_H