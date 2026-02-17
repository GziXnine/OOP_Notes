#include <iostream>
#include "Person.h"
#include "Date.h"
#include "Doctor.h"
#include "Patient.h"

using namespace std;

int main()
{
  Doctor doctor("John", "Doe", 45, 1);
  doctor.setSpeciality("Cardiology");
  Patient patient("Jane", "Smith", 30, 2, Date(15, 5, 1994), Date(1, 1, 2023), Date(10, 1, 2023), doctor);
  cout << "Doctor Info: " << doctor.getInfo() << ", Speciality: " << doctor.getSpeciality() << endl;
  cout << "Patient Info: " << patient.getInfo() << ", DOB: " << patient.getDob().getDate() << ", Admit Date: " << patient.getAdmitDate().getDate() << ", Leave Date: " << patient.getLeaveDate().getDate() << ", Physician -> " << patient.getPhysician().getInfo() << endl;

  return 0;
}