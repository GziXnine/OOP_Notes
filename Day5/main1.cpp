#include <iostream>
#include <string>
#include "Student.h"
#include "Marker.h"
#include "Instructor.h"
#include "Room.h"

using namespace std;

int main()
{
  cout << "Hello, World!" << endl;
  /*
    Some Relationships
      1. association: A class can have a member variable that is a pointer or reference to another class. This is a "uses-a" relationship.
      2. aggregation: A class can have a member variable that is an instance of another class. This is a "has-a" relationship.
      3. composition: A class can have a member variable that is an instance of another class, and the lifetime of the member variable is tied to the lifetime of the containing class. This is a stronger form of aggregation.
      4. Inheritance: A class can have a parent class and inherit its properties and behaviors. This is an "is-a" relationship.
  */

  // Created two Student Objects In Stack Memory.
  Student s1;
  Student s2("Alice", 20);

  // In heap memory, we can create a pointer to a Student object and allocate memory for it using the new keyword.
  Student *s3 = new Student();
  Student *s4 = new Student("Bob", 22);

  s1.displayInfo();
  s2.displayInfo();
  s3->displayInfo();
  s4->displayInfo(); // Don't forget to deallocate the memory for s3 when we're done with it.
  delete s3;         //!
  delete s4;         //!

  // association -> استخدم
  // هى العلاقة اللى اقدر اوصفها بإنها العلاقة بين ان اوبجيكت بيستخدم اوبجيكت من كلاس اخر لفترة محدودة من الزمن
  // وبعد م الزمن ينتهى عادى يقدر يعيش من غير التانى فى حالة قبل اول بعد استخدام العلاقة
  Marker marker;
  Instructor instructor;
  instructor.WriteOnBoard(&marker);

  // Aggregation -> اكونتين
  // الاتنين زى بعض
  // الفرق ان دى علاقة لفترة طويلة شوياا مش صغيرة زى التانية
  Room room;
  room.instructorEnters(&instructor);

  // Composition -> يتكون من 

  return 0;
}