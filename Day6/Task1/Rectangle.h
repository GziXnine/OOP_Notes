#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "Shape.h"
#include "Point.h"

class Rectangle : public Shape
{
private:
  Point topLeft;
  int width, height;

public:
  Rectangle(Point p, int w, int h)
      : topLeft(p), width(w), height(h) {}

  void Draw() override
  {
    cout << "Drawing Rectangle at ("
         << topLeft.x << "," << topLeft.y
         << ") width=" << width
         << " height=" << height << endl;
  }
};

#endif
