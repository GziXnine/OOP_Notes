#ifndef DOCTOR_H
#define DOCTOR_H

#include <iostream>
#include "Person.h"

using namespace std;

class Doctor : public Person
{
private:
  string speciality;

public:
  Doctor() {};
  Doctor(string firstName, string lastName, int age, int id) : Person(firstName, lastName, age, id) {};

  void setSpeciality(string speciality)
  {
    this->speciality = speciality;
  }

  string getSpeciality() const
  {
    return speciality;
  }
};

#endif // DOCTOR_H