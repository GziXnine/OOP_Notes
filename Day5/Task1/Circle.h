#ifndef CIRCLE_H
#define CIRCLE_H

#include <iostream>

using namespace std;

class Circle
{
private:
  double radius = 1.0;
  string color = "red";

public:
  Circle() {};

  Circle(double radius)
  {
    this->radius = radius;
  };

  Circle(double radius, string color)
  {
    this->radius = radius;
    this->color = color;
  };

  double getRadius() const
  {
    return radius;
  }

  void setRadius(double radius)
  {
    if (radius > 0)
      this->radius = radius;
  }

  string getColor() const
  {
    return color;
  }

  void setColor(string color)
  {
    this->color = color;
  }

  double getArea() const
  {
    return 3.14 * radius * radius;
  }

  string getInfo() const
  {
    return "Circle[radius=" + to_string(getRadius()) + ", color=" + getColor() + "]";
  }
};

#endif // CIRCLE_H