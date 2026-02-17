#ifndef CHILD2_H
#define CHILD2_H

#include "Child1.h"

class Child2 : public Child1
{
private:
  Child1 c;

protected:
public:
  Child2()
  {
    // c.x = 0; // Private member of Parent is not accessible in Child2
    // c.y = 0; // Protected member of Parent is not accessible in Child2
    c.z = 0; // Public member of Parent is accessible in Child2
  }
};

#endif // CHILD2_H