#ifndef MATH_H
#define MATH_H

class Math
{
private:
  // انا بحط استاتيك علشان اقول انه مش ريليتيد ل اوبجيكت اانا بقول انه ريليتيد للكلاس.
  static int counter;

public:
  Math()
  {
    counter++;
  };

  static int factorial(int num)
  {
    if (num == 0 || num == 1)
      return 1;

    return num * factorial(num - 1);
  }

  static int power(int base, int exponent)
  {
    if (exponent == 0)
      return 1;

    return base * power(base, exponent - 1);
  }

  int getCounter() const
  {
    return counter;
  }
};

#endif // MATH_H