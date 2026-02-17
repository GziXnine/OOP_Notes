#include <iostream>
#include "Creature.h"
#include "Human.h"
#include "Animal.h"
#include "Game.h"

using namespace std;

int main()
{
  // Polymorphism -> The ability of an object to take on many forms
  // Poly -> متعدد
  // Morphism -> شكل

  Human h;
  Human *p = &h;

  Creature *c = &h; // Upcasting -> تحويل الابن الى الاب  In Stack
  // Logic Code Memory.
  // علشان لما باجى اعمل الهيومن بيتعمل معاه الكيريشن بس فى الاول كده فى الميمورى ف اقدر اتعامل معاه
  Creature *c2 = new Human(); // Upcasting -> تحويل الابن الى الاب  In Heap
  // c->move();                  // The human is moving -> 'Virtual'
  // c->die();                   // The creature is dying
  // c->speak();              // Error -> The speak function is not accessible through the Creature pointer

  Creature *c3 = new Animal(); // Upcasting -> تحويل الابن الى الاب  In Heap
  // c3->move();                  // The creature is moving -> 'Virtual' and an Animal doesn't have a move function, so it will call the move function of the Creature class

  delete c2; // Free the memory allocated on the heap
  delete c3; // Free the memory allocated on the heap

  Game game;
  game.addCreature(new Human());
  game.addCreature(new Animal());
  game.run(); // The human is moving.... The creature is moving

  // There's an Abstract Class -> A class that cannot be instantiated and is meant to be inherited from. It can contain 'pure virtual functions', which are functions that must be implemented by derived classes.
  // Abstract Class -> A class that cannot be instantiated and is meant to be inherited from. It can contain pure virtual functions, which are functions that must be implemented by derived classes.
  // Pure Virtual Function -> A virtual function that is declared by assigning "0" to it.
  // Abstract Class I Can't Make an Object from it, But I Can Make a Pointer from it and Point it to an Object of a Derived Class

  // Abstract Class -x- Concrete Class
  // Concrete Class -> لازم اكون عملت امبليمنتيشن لكل الفانكشنز اللى فى الابستراكت كلاس

  return 0;
}