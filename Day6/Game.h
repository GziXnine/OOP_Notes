#ifndef GAME_H
#define GAME_H

#include <iostream>
#include "Human.h"
#include "Animal.h"

using namespace std;

class Game
{
private:
  // Human *people[10];
  // Animal *animals[10];

  // Make a Generalization for the Creatures
  // Generalization -> A relationship between a more general class and a more specific class. The more specific class is a subclass of the more general class.
  Creature *creatures[10];

protected:
public:
  Game()
  {
    for (int i = 0; i < 10; i++)
    {
      // people[i] = nullptr;
      // animals[i] = nullptr;
      creatures[i] = nullptr;
    }
  };
  /*
    void addHuman(Human *h)
    {
      for (int i = 0; i < 10; i++)
      {
        if (people[i] == nullptr)
        {
          people[i] = h;
          break;
        }
      }
    }

    void addAnimal(Animal *a)
    {
      for (int i = 0; i < 10; i++)
      {
        if (animals[i] == nullptr)
        {
          animals[i] = a;
          break;
        }
      }
    }
  */

  // Dynamic 'Binding' Polymorphism -> 'Run Time' Polymorphism -> Virtual Functions
  void moveCreature(Creature *c)
  {
    c->move();
  }

  // Static 'Binding' Polymorphism -> 'Compile Time' Polymorphism -> Function Overloading
  void moveHuman(Human *h)
  {
    h->move();
  }

  void addCreature(Creature *c) // Generalization
  {
    for (int i = 0; i < 10; i++)
    {
      if (creatures[i] == nullptr)
      {
        creatures[i] = c;
        break;
      }
    }
  }

  /*
    void run()
    {
      for (int i = 0; i < 10; i++)
      {
        if (people[i] != nullptr)
          people[i]->move();

        if (animals[i] != nullptr)
          animals[i]->move();
      }
    }
  */

  void run() // Generalization
  {
    for (int i = 0; i < 10; i++)
    {
      if (creatures[i] != nullptr)
        creatures[i]->move();
    }
  }
};

#endif // GAME_H