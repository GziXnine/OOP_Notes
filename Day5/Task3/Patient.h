#ifndef PATIENT_H
#define PATIENT_H

#include <iostream>
#include "Person.h"
#include "Date.h"
#include "Doctor.h"

using namespace std;

class Patient : public Person
{
private:
  Date dob;
  Date admitDate;
  Date leaveDate;
  Doctor physician;

public:
  Patient() {};
  Patient(string firstName, string lastName, int age, int id, Date dob, Date admitDate, Date leaveDate, Doctor physician) : Person(firstName, lastName, age, id), dob(dob), admitDate(admitDate), leaveDate(leaveDate), physician(physician) {};

  Date getDob() const
  {
    return dob;
  }

  Date getAdmitDate() const
  {
    return admitDate;
  }

  void setLeaveDate(Date leaveDate)
  {
    if (leaveDate.getYear() >= admitDate.getYear() && leaveDate.getMonth() >= admitDate.getMonth() && leaveDate.getDay() >= admitDate.getDay())
      this->leaveDate = leaveDate;
  }

  Date getLeaveDate() const
  {
    return leaveDate;
  }

  void setPhysician(Doctor physician)
  {
    this->physician = physician;
  }

  Doctor getPhysician() const
  {
    return physician;
  }
};

#endif // PATIENT_H