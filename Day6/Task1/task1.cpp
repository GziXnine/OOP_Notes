#include <iostream>
#include "Shape.h"
#include "Circle.h"
#include "Rectangle.h"
#include "Point.h"
#include "Picture.h"

using namespace std;

int main()
{
  Shape *shapes[2];

  shapes[0] = new Rectangle(Point(0, 0), 10, 5);
  shapes[1] = new Circle(Point(5, 5), 7);

  Picture pic(shapes, 2);

  pic.Paint();

  // cleanup
  for (int i = 0; i < 2; i++)
    delete shapes[i];

  return 0;
}