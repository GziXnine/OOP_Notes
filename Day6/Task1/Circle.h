#ifndef CIRCLE_H
#define CIRCLE_H

#include "Shape.h"
#include "Point.h"

class Circle : public Shape
{
private:
  Point center;
  int radius;

public:
  Circle(Point c, int r)
      : center(c), radius(r) {}

  void Draw() override
  {
    cout << "Drawing Circle at ("
         << center.x << "," << center.y
         << ") radius=" << radius << endl;
  }
};

#endif
