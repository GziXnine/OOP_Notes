#ifndef SHAPE_H
#define SHAPE_H

#include <iostream>
using namespace std;

class Shape
{
public:
  virtual void Draw() = 0; // Pure virtual function
  virtual ~Shape() {}      // Virtual destructor (important)
};

#endif
