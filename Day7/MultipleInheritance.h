#ifndef MULTIPLEINHERITANCE_H
#define MULTIPLEINHERITANCE_H

#include "Human.h"
#include "Employee.h"

class Base
{
public:
  int x;

  Base() {};
};

class Child1 : public virtual Base
{
public:
  int y;

  Child1() {};
};

class Child2 : public virtual Base
{
public:
  int z;

  Child2() {};
};

// Diamond Problem -> Multiple Inheritance -> Bad
// Here We Have Two Copies Of Base Class In Derived Class -> Ambiguity
// Two Copies Of x In Derived Class -> Ambiguity
// I Can Use Virtual Inheritance To Solve This Problem -> Virtual Inheritance -> Good
// Static Members Are Not Affected By Virtual Inheritance -> Static Members Are Shared Among All Instances Of The Class -> Static Members Are Not Affected By Virtual Inheritance
// Static Members and Static Functions To Inherit From Base Class To Derived Class.
class Derived : public Child1, public Child2
{
public:
  // Base class constructors execute in the order they are declared in the class inheritance list
  //  NOT the order in the initializer list.
  /*
    1️⃣ Child1 constructor executes first.
    2️⃣ Child2 constructor executes second.
    3️⃣ Derived constructor executes last.
  */

  Derived() : Child2(), Child1()
  {
    x = 10; // Ambiguity -> Error, Must specify base class.
  };
};

#endif // MULTIPLEINHERITANCE_H