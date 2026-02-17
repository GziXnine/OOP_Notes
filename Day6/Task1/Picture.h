#ifndef PICTURE_H
#define PICTURE_H

#include "Shape.h"

class Picture
{
private:
  Shape **shapes; // array of Shape pointers
  int count;      // number of shapes

public:
  Picture(Shape **shapes, int count)
  {
    this->shapes = shapes;
    this->count = count;
  }

  void Paint()
  {
    for (int i = 0; i < count; i++)
    {
      shapes[i]->Draw(); // Polymorphism happens here
    }
  }
};

#endif
