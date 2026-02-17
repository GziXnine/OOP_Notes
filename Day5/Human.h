#ifndef HUMAN_H
#define HUMAN_H

#include "Creature.h"

class Human : public Creature // Inheritance
{
private:
public:
  string name;

  // علشان هنا لما بعمل اوبجيكت من الابن بيروح يعمل واحد للاب عن طريق الكونستركتور الافتراضى
  // Constructor Chaining -> لما بعمل اوبجيكت من كلاس هيومن بيتعمل واحد من كلاس كيريتشر عن طريق الكونستركتور الافتراضى
  // Constructor -> مش هو اللى بيعمل كيريت للاوبجيكت
  // الكونستراكتور بتاع الاب هو اللى بيتعمل الاول قبل ما الكونستركتور بتاع الابن يتعمل
  Human() : Creature(50)
  {
    height = 180;
    age = 5;
  };

  Human(string name, int height, int age) // : Creature(height) // Constructor Chaining
  {
    this->name = name;

    // This Isn't a Static Variable, It's a Member Variable
    // Referring to the height variable of the Creature class using the scope resolution operator
    Creature::height = height;
    this->age = age;
  }

  void speak()
  {
    // فى اى وقت بعمل اوبيجت من اتشايلد كلاس بيتباسا معاه بويتنر لل بيرينت كلاس.
    // لو عملت اوبجيكت من كلاس هيومن هيتعمل تلقئ معاه واحد من كلاس كيريتشر.
    // طب الكلاس الاب اللى بيورث بيتعمله كيريت عن طريق Defualt Constructor Paramaterless Constructor
    // Public Only -> I can only access the public members of the Creature class
    height = 180;
    // Creature::move();
    // move();
    cout << "The human is speaking" << endl;
  }

  void eat()
  {
    cout << "The human is eating" << endl;
  }

  void move() // This isn't Overriding, It's Hiding
  {
    // Creature::move();
    cout << "The human is moving...." << endl;
  }
};

#endif // HUMAN_H