#include <iostream>
#include "Employee.h"

using namespace std;

// Struct -> Access Modefiers Are *Public* By Default.
// Class -> Access Modefiers Are *Private* By Default.

int main()
{
  cout << "2. Encapsulation" << endl;
  // Encapsulation is the process of hiding the internal details of an object and exposing only the necessary information to the outside world. It helps to protect the data and maintain the integrity of the object.
  // هو بيخبى الداتا علشان معلومات متهمكش وعلشان سيكيورتى ريزونز
  // بيكون عاوز يظهر المعلومة بشكل مختلف عن الواقع.
  // Control Visability of Data and Functions.
  // Data Hiding is the process of hiding the internal details of an object and exposing only
  // the necessary information to the outside world. It helps to protect the data and maintain the integrity of the object.
  // انا بستخدم اكسيس موديفايرز علشان اخبى الداتا بتاعتى.
  // Private -> Only Accessible Within The Class.
  // Public -> Accessible From Anywhere.
  // Protected -> Accessible Within The Class And Its Derived Classes.

  Employee emp1(3000), emp2(5001);
  emp1.id = 1;

  cout << "Employee ID: " << emp1.id << endl;
  cout << "Employee Salary: " << emp1.getSalary() << endl; // 5000 Because The Set Salary Function Will Set The Salary To 5000 As A Minimum.
  cout << "Employee Salary: " << emp2.getSalary() << endl; // 5001 Because The Salary Is Initialized To 5001.

  Employee emp3 = emp2; // Bitwise Copy, Shallow Copy, Memberwise Copy.
  cout << "Employee 3 Salary: " << emp3.getSalary() << endl;

  return 0;
}