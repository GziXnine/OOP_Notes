#ifndef CREATURE_H
#define CREATURE_H

#include <iostream>
using namespace std;

class Creature
{
private:
public:
  Creature() {};

  void move()
  {
    cout << "Creature is moving." << endl;
  }

  // Pure Virtual Function -> Abstract Class
  // virtual void move() = 0;
};

#endif // CREATURE_H