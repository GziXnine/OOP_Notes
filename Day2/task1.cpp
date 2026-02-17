#include <iostream>

using namespace std;

class Circle
{
private:
  double radius = 1.0;
  string color = "red";

public:
  Circle() {}

  Circle(double r)
  {
    radius = r;
  }

  Circle(double r, string &c)
  {
    radius = r;
    color = c;
  }

  double get_radius()
  {
    return radius;
  }

  string get_color()
  {
    return color;
  }

  void set_radius(double r)
  {
    radius = r;
  }

  void set_color(string &c)
  {
    color = c;
  }

  double get_area()
  {
    return 3.14 * radius * radius;
  }
};

int main()
{
  Circle c1;

  c1.set_radius(5.0);
  string color = "blue";
  c1.set_color(color);
  cout << "Radius: " << c1.get_radius() << endl;
  cout << "Color: " << c1.get_color() << endl;
  cout << "Area: " << c1.get_area() << endl;

  return 0;
}