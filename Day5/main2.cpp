#include <iostream>
#include "Creature.h"
#include "Human.h"

using namespace std;

int main()
{
  // اكتشفنا فى حياتنا ان اى حاجة بتورث صفاتها من حاجات تانية بس بطرق مختلفة او عن طريق انها تزود عليها بعض الصفات
  cout << "Inheritance" << endl; // Is a relationship
  // Association -> استخدم
  // Aggregation -> اكونتين
  // Composition -> جزء من
  // Inheritance -> علاقة بين (توريث)

  Human h1;
  h1.speak();
  // h1.height = 190; // I can access the public members of the Creature class
  cout << "The human height is: " << h1.height << endl;
  h1.Creature::move(); // I can access the public members of the Creature class using the scope resolution operator
  h1.move();           // I can access the public members of the Creature class

  Creature c1;
  // c1.age = 10; // I can't access the protected members of the Creature class
  c1.height = 150; // I can access the public members of the Creature class

  // h1.age = 20; // I can access the protected members of the Creature class through the Human class

  return 0;
}