#include <iostream>

using namespace std;

// الصفات هتبقى Variables والافعال هتبقى Functions.
// Object is a Physical Entity That Has State and Behavior. It Is An Instance of a Class.
// Class is a Logical Representation of a Group of Objects That Share Common Attributes and Behaviors.
// لو بتكلم فى العموم يبقى كلاس لو على حاجة معينة فيها داتا يبقى اوبجيكت.
// specifice in general -> Object in general -> Class in specific.
// Object Is Have a Data Not a Physical Only.
struct Car
{
  int speed;
  string brand;

  void moveForward() // moveForward(Car *this) This Is How The Function Is Called Behind The Scenes (Compiler Does This For Us).
  {
    cout << "Car Moving Forward With Speed = " << speed << endl;
  }

  void stop()
  {
    cout << "Car Stopped!" << endl;
  }
};
// Struct -> Variable
// Class -> Object

int main()
{
  cout << "4 Pillars of OOP" << endl;
  cout << "1. Abstraction" << endl; // Abstraction is the process of hiding the implementation details of an object and exposing only the necessary information to the outside world. It helps to reduce complexity and increase efficiency in code.
  // يعنى بحط وصف لطرف من اطراف المشكلة بيتضمن حاجتين على العموم بس بيكون متركز على السياق ف الكلاس بيكون يحتوى على متغيرات اللى هى الصفات والفانكشن اللى هى الافعال.
  cout << "2. Inheritance" << endl;   // Inheritance is the mechanism by which one class can inherit the properties and behaviors of another class. It allows for code reuse and the creation of hierarchical relationships between classes.
  cout << "3. Polymorphism" << endl;  // Polymorphism is the ability of a class to take on many forms. It allows objects of different classes to be treated as objects of a common superclass. This is achieved through method overriding and method overloading.
  cout << "4. Encapsulation" << endl; // Encapsulation is the process of hiding the internal details of an object and exposing only the necessary information to the outside world. It helps to protect the data and maintain the integrity of the object.

  // لما اجى اوصف حد هوصف اسماء وافعال.
  // لما اجى اوصف كلاس هوصف بيانات وافعال.
  // Abstraction بوصف الحاجة عامة بس بتخدم على السياق اللى انا فيه.

  // كل اوبجيكت من نفس الكلاس يحمل نفس الصفات وممكن يختلفوا فى نفس الصفات.
  Car c1, c2;
  c1.speed = 100;
  c1.brand = "Toyota";
  c1.moveForward();
  c1.stop();

  c2.speed = 150;
  c2.brand = "Honda";
  c2.moveForward(); // moveForward(&c2) This Is How The Function Is Called Behind The Scenes (Compiler Does This For Us).

  c2.stop();

  return 0;
}