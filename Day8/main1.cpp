#include <iostream>
#include "List.h"

using namespace std;

// template <typename T> // -> Open Type
template <class T>

// امتى اقرر انى اعمل تيمبليت لما يبقى عندى اكتر من فانكشن ليها نفس الاسم بس بتاخد انواع مختلفة من البيانات بس العامليات اللى جوا مش معتمدة على الداتا تايب نفسه علشان ممكن يعمل ايرور
// operator+ بس انا اقدر اعدل دى ب انى اروح لكل كلاس واعمل اوفر لود ل فانكشن
void swap(T &a, T &b)
{
  T temp = a;
  a = b;
  b = temp;
}

void swap(int &a, int &b) {}
void swap(float &a, float &b) {}

int main()
{
  int x = 10, y = 20;
  // swap<int>(x, y);
  cout << "x: " << x << ", y: " << y << endl;

  List<int> L(3); // -> Closed Type

  List<float> L2(3); // -> Closed Type

  return 0;
}
