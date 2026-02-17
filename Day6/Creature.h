#ifndef CREATURE_H
#define CREATURE_H

#include <iostream>
using namespace std;

class Creature
{
private:
  int weight;

protected:
  int age;

public:
  int height;

  Creature() {};

  Creature(int weight)
  {
    this->weight = weight;
  }

  // Virtual Function -> A function that can be overridden in a derived class and allows for dynamic dispatch
  // هنا انا مش بجبر كل الورثة انهم يعملوا امبليمنتيشن للفانكشن دى
  virtual void move() = 0;

  void die()
  {
    cout << "The creature is dying" << endl;
  }
};

#endif // CREATURE_H