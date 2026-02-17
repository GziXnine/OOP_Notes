#ifndef HUMAN_H
#define HUMAN_H

#include "Creature.h"

class Human : public Creature // Inheritance
{
private:
public:
  string name;
  Human() : Creature(50)
  {
    height = 180;
    age = 5;
  };

  Human(string name, int height, int age)
  {
    this->name = name;
    Creature::height = height;
    this->age = age;
  }

  void speak()
  {
    height = 180;
    cout << "The human is speaking" << endl;
  }

  void eat()
  {
    cout << "The human is eating" << endl;
  }
  // But if I Put and 'Virtual' Keyword in the Move Function in the Creature Class, It will be Overriding not Hiding
  void move() // This isn't Overriding, It's Hiding
  {
    // Creature::move();
    cout << "The human is moving...." << endl;
  }

  void die()
  {
    cout << "The human is dying" << endl;
  }
};

#endif // HUMAN_H