#ifndef STUDENT_H
#define STUDENT_H

#include <iostream>
#include <string>

using namespace std;

class Student
{
private:
  string name;
  int age;
  Student *friendPtr; // Association: A Student can have a pointer to another Student as a friend, but the friend can exist independently of the Student.

public:
  Student() {};
  Student(string name, int age)
  {
    this->name = name;
    this->age = age;
  };

  void displayInfo()
  {
    cout << "Name: " << name << ", Age: " << age << endl;
  }
};

#endif // STUDENT_H