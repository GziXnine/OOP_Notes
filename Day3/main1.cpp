#include <iostream>
#include "Complex.h"
#include "Math.h"

using namespace std;
// using namespace Complex;

int Math::counter = 0; // Initialize the static member variable

// CPP Not Fully OOP Language.
int main()
{
  Complex c1(4, 2);
  Complex c2(6, 4);
  // علشان فانكشن ادد من الكلاس دى ف لازم اندها عن طريق اوبيجت من نوع الكلاس ده
  // Name Of Class SCOPE OPERATOR(::) Name Of Function
  Complex c3 = Complex::add(c1, c2);
  cout << "Real part: " << c3.real << endl;
  cout << "Imaginary part: " << c3.imag << endl;

  // El behaviour not depends on caller object
  Complex c4 = c1.add(c2);
  // علشان فانكشن add من الكلاس دى ف لازم اندها عن
  cout << "Real part: " << c4.real << endl;
  cout << "Imaginary part: " << c4.imag << endl;

  Complex c5 = c1 + c2; // c1.operator+(c2);
  // علشان فانكشن add من الكلاس دى ف لازم اندها عن طريق اوبيجت من نوع الكلاس ده
  cout << "Real part: " << c5.real << endl;
  cout << "Imaginary part: " << c5.imag << endl;

  Complex c6 = c1 + 5; // c1.operator+(5);
  // علشان فانكشن add من الوبجيكت دى ف لازم اندها عن
  cout << "Real part: " << c6.real << endl;
  cout << "Imaginary part: " << c6.imag << endl;

  Complex c7 = ++c1; // Pre-increment
  cout << "Real part: " << c7.real << endl;
  cout << "Imaginary part: " << c7.imag << endl;

  Complex c8 = c1++; // Post-increment
  cout << "Real part: " << c8.real << endl;
  cout << "Imaginary part: " << c8.imag << endl;

  cout << "Real part of c1: " << c1.real << endl;
  cout << "Imaginary part of c1: " << c1.imag << endl;

  if (c1 == c2)
    cout << "c1 and c2 are equal." << endl;
  else
    cout << "c1 and c2 are not equal." << endl;

  Complex c9;
  c9 = 5 + c1; // Copy Assignment Operator
  cout << "Real part of c9: " << c9.real << endl;
  cout << "Imaginary part of c9: " << c9.imag << endl;

  // non-static can access with member object class
  // static can access with class name.
  // I Can Put Static Function Inside Non-Static Function.
  // Static variable reload when application start
  // non-static variable reload when object created
  int fact = Math::factorial(5);
  cout << "Factorial of 5: " << fact << endl;
  int pow = Math::power(2, 3);
  cout << "2 raised to the power of 3: " << pow << endl;

  cout << "Math counter: " << Math().getCounter() << endl;
  cout << "Math counter: " << Math().getCounter() << endl;
  cout << "Math counter: " << Math().getCounter() << endl;
  cout << "Math counter: " << Math().getCounter() << endl;
  cout << "Math counter: " << Math().getCounter() << endl;

  return 0;
}