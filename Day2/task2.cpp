#include <iostream>
#include <string>

using namespace std;

class Employee
{
private:
  int id;
  string firstName;
  string lastName;
  int salary;

public:
  Employee(int id, const string &firstName, const string &lastName, int salary)
      : id(id), firstName(firstName), lastName(lastName), salary(salary)
  {
  }

  int get_ID() const
  {
    return id;
  }

  string get_first_name() const
  {
    return firstName;
  }

  string get_last_name() const
  {
    return lastName;
  }

  string get_name() const
  {
    return firstName + " " + lastName;
  }

  int get_salary() const
  {
    return salary;
  }

  void set_salary(int salary)
  {
    this->salary = salary;
  }

  int get_annual_salary() const
  {
    return salary * 12;
  }

  int raise_salary(int percent)
  {
    salary += salary * percent / 100;
    return salary;
  }
};

int main()
{
  Employee e1(1, "John", "Doe", 5000);

  cout << "ID: " << e1.get_ID() << endl;
  cout << "First Name: " << e1.get_first_name() << endl;
  cout << "Last Name: " << e1.get_last_name() << endl;
  cout << "Name: " << e1.get_name() << endl;
  cout << "Salary: " << e1.get_salary() << endl;
  cout << "Annual Salary: " << e1.get_annual_salary() << endl;
  cout << "Salary After Raise: " << e1.raise_salary(10) << endl;
  cout << "Salary: " << e1.get_salary() << endl;

  return 0;
}