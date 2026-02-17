#ifndef EMPLOYEELIST_H
#define EMPLOYEELIST_H

#include "List.h"
#include "Employee.h"

class EmployeeList : public List<Employee>
{
public:
  EmployeeList() : List(10)
  {
  }

  void Add(Employee emp)
  {
    if (emp.Salary < 5000)
      return;

    List::Add(emp);
  }

protected:
private:
};

#endif // EMPLOYEELIST_H