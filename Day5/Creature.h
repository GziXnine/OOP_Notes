#ifndef CREATURE_H
#define CREATURE_H

#include <iostream>
using namespace std;

class Creature
{
private:
  int weight;

  // دى حاجة كده زى البابلك والبرايفت بس مش بالظبط يعنى اللى بيورثته بس اللى يقدر يشوفه بس لو اوبجيكت من نفس الكلاس مقدرش اعمله اكسس على طول. اقدر اعمله اكسس عن طريق الكلاس اللى ورثه بس..
protected:
  int age;

public:
  int height;

  Creature() {};

  Creature(int weight)
  {
    this->height = height;
  }

  void move()
  {
    cout << "The creature is moving" << endl;
  }
};

#endif // CREATURE_H