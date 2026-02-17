#ifndef ANIMAL_H
#define ANIMAL_H

#include "Creature.h"

class Animal : public Creature
{
private:
public:
  Animal() : Creature(20)
  {
    height = 50;
    age = 2;
  };

  void move()
  {
    cout << "The animal is moving...." << endl;
  }
};

#endif // ANIMAL_H