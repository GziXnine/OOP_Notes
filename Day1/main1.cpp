#include <iostream>

using namespace std;

int add(int a, int b)
{
  return a + b;
}

float add(float a, float b)
{
  return a + b;
}

// الميزة هنا فى Default Arguments فى Clean Code.
// انك تقدر تعدل فى كود قديم من غير ما تعدل فى كل مكان فى الكود بتاعك اللى بيستخدم الدالة دى
// يكون الـ Default Argument فى اخر براميتر فى الدالة.
int CalcNetSalary(int grossSalary, int bouns = 0, int tax = 1000)
{
  return grossSalary + bouns - tax;
}

void swap(int &a, int &b)
{
  int temp = a;
  a = b;
  b = temp;
}

int main()
{
  cout << "Free Palestine!" << endl;

  cout << add(5, 10) << endl;      // Calls the integer version of add
  cout << add(3.5f, 2.5f) << endl; // Calls the float version of add
  // Calls the float version, But Gave Me Error Because of Implicit Conversion.
  // cout << add(5.0f, 2) << endl;

  cout << CalcNetSalary(5000, 1000) << endl;
  cout << CalcNetSalary(5000, 200, 500) << endl;
  cout << CalcNetSalary(5000) << endl;

  // الحاجات اللى فى الـ heap مش لازم يكون ليها اسم.
  int *p = new int[10];   // Allocates an array of 10 integers on the heap
  int *ptr = new int(10); // Allocates a single integer on the heap and initializes it to 10

  delete[] p; // Deallocates the array of integers
  delete ptr; // Deallocates the single integer

  int x = 4, y = 5;
  int &z = x;
  // References are Better than Pointers Because They Don't Require Dereferencing and They Can't Be Null or Using Uninitialized Memory. They Also Provide Better Readability and Safety in Code.

  z = 10;
  cout << x << endl; // Output: 10

  swap(x, y);
  cout << x << " " << y << endl; // Output: 5 10

  return 0;
}