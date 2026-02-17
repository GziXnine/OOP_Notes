#ifndef HUMAN_H
#define HUMAN_H

#include "Creature.h"

class Human : public Creature
{
private:
public:
  Human() {};

  void move()
  {
    cout << "Human is moving." << endl;
  }
};

#endif // HUMAN_H