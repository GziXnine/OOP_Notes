#include <iostream>

using namespace std;

class Fraction
{
private:
  int num;
  int dem;

  int gcd(int a, int b) const
  {
    while (b != 0)
    {
      int temp = b;
      b = a % b;
      a = temp;
    }
    return a;
  }

  void simplify()
  {
    int g = gcd(abs(num), abs(dem));
    num /= g;
    dem /= g;

    // keep denominator positive
    if (dem < 0)
    {
      num = -num;
      dem = -dem;
    }
  }

public:
  Fraction() : num(0), dem(1) {} // Default Constructor

  Fraction(int num, int dem)
  {
    this->num = num;
    this->dem = (dem != 0) ? dem : 1; // Avoid Division By Zero
    simplify();
  }

  void setNum(int num)
  {
    this->num = num;
    simplify();
  }

  int getNum() const
  {
    return num;
  }

  void setDem(int dem)
  {
    if (dem != 0)
    {
      this->dem = dem;
      simplify();
    }
  }

  int getDem() const
  {
    return dem;
  }

  void display() const
  {
    cout << num << "/" << dem << endl;
  }

  Fraction add(const Fraction &f) const
  {
    int newNum = num * f.getDem() + f.getNum() * dem;
    int newDem = dem * f.getDem();

    return Fraction(newNum, newDem);
  }

  Fraction subtract(const Fraction &f) const
  {
    int newNum = num * f.getDem() - dem * f.getNum();
    int newDem = dem * f.getDem();

    return Fraction(newNum, newDem);
  }
};

int main()
{
  Fraction f1(1, 2), f2(1, 3);
  cout << "Fraction 1: ";
  f1.display();
  cout << "Fraction 2: ";
  f2.display();
  Fraction f3 = f1.add(f2);
  cout << "Fraction 1 + Fraction 2: ";
  f3.display();
  Fraction f4 = f1.subtract(f2);
  cout << "Fraction 1 - Fraction 2: ";
  f4.display();

  return 0;
}