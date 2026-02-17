#ifndef PERSON_H
#define PERSON_H

#include <iostream>

using namespace std;

class Person
{
private:
  string firstName;
  string lastName;
  int age;
  int id;

public:
  Person() {};

  Person(string firstName, string lastName, int age, int id)
      : firstName(firstName), lastName(lastName), age(age), id(id) {}

  string getFirstName() const
  {
    return firstName;
  }

  string getLastName() const
  {
    return lastName;
  }

  string getInfo() const
  {
    return "ID: " + to_string(id) + ", Name: " + getFirstName() + " " + getLastName() + ", Age: " + to_string(age);
  }
};

#endif // PERSON_H