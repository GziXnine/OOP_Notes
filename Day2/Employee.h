#ifndef EMPLOYEE_H
#define EMPLOYEE_H

class Employee
{
public:
  // انى صاحب الكلاس بتحكم امتى وازاى اعمل اوبجيكت من الكلاس بتاعى.
  // هل الكونيستركتول مسؤول عن الكيريشن بتاع الاوبجيكت؟؟ لاء
  // هل اقدر اعمل اوبجيكت من غير م اعمل انيستركتور؟؟ لاء
  // الاوبجيكت بيتعمله كيريشن فى الميمورى من قبل ميتعمله انيستركتور.
  // Constructors -> Special Member Functions That Are Used To Initialize Objects Of A Class.
  // Control Creation.
  // Copiler Makes A Default Constructor If You Don't Provide One.
  Employee(int salary) // Don't Need a Return Type And The Name Of The Constructor Is The Same As The Class Name.
  {
    // I Will Use this-> In Two Cases:
    // 1. When The Parameter Name Is The Same As The Member Variable Name.
    // 2. When I Want To Return The Current Object From A Function (Fluent Interface).
    // this->salary = salary;
    setSalary(salary);
  };

  Employee getEmp()
  {
    return *this; // Return The Current Object.
  }

  // I Can Make More Than One Constructor As Long As They Have Different Parameters (Overloading).

private:
  int salary = 5001; // ينفع يكون البرايفيت ليه جيت وسيت وينفع ميكونش ليه خالص او ليه حاجة واحدة
  // اى موظف هعمله هياخد الراتب ده كحد ادنى

public:
  int id;

  void setSalary(int salary)
  {
    if (salary > 5000)
      this->salary = salary;
    else
      this->salary = 5000;
  }

  int getSalary()
  {
    return salary;
  }
};

#endif // EMPLOYEE_H
