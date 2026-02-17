#ifndef CHILD1_H
#define CHILD1_H

#include "Parent.h"

class Child1 : public Parent
{
private:
protected:
public:
  int a;

  Child1()
  {
    // x = 0; // Private member of Parent is not accessible in Child1
    y = 0;
    z = 0;
  }
};

#endif // CHILD1_H