#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include "Human.h"

class Employee : public Human
{
private:
public:
  Employee() {};

  void move()
  {
    cout << "Employee is moving." << endl;
  }
};

#endif // EMPLOYEE_H