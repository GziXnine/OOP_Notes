#ifndef COMPLEX_H
#define COMPLEX_H

class Complex
{
private:
  int *values; // Dynamic array to demonstrate deep copy in the assignment operator

public:
  int real, imag;

  Complex(int r = 0, int i = 0) : real(r), imag(i)
  {
    values = new int[3]; // Allocate memory for the dynamic array
    for (int i = 0; i < 3; i++)
    {
      values[i] = 0;
    }
  } // Member Initializer List

  // على مستوى اللوجيك لو لاقيت فانكشن مش معتمدة على الكولر اوبجيكت اقدر احطلها استاتيك
  // behaviour not depends on caller object
  // Depend On Parameters Only
  static Complex add(Complex a, Complex b)
  {
    Complex res;
    res.real = a.real + b.real;
    res.imag = a.imag + b.imag;

    return res;
  }

  Complex add(Complex b) const
  {
    Complex res;
    res.real = this->real + b.real;
    res.imag = this->imag + b.imag;

    return res;
  }

  Complex operator+(Complex b) const
  {
    Complex res;
    res.real = this->real + b.real;
    res.imag = this->imag + b.imag;

    return res;
  }

  // c2 = c1 + 5; // c1.operator+(5);
  Complex operator+(int num) const
  {
    Complex res;
    res.real = this->real + num;
    res.imag = this->imag;

    return res;
  }

  // c2 = 5 + c1; // operator+(5, c1);
  // In CPP Only Member Functions Can Be Overloaded, So We Need To Make This Function A Friend Function To Allow It To Access The Private Members Of The Class.
  friend Complex operator+(int num, const Complex &c) // Non-member function for commutative addition
  {
    Complex res;
    res.real = num + c.real;
    res.imag = c.imag;

    return res;
  }

  Complex operator++() // Pre-increment
  {
    this->real++;
    this->imag++;

    return *this;
  }

  Complex operator++(int num) // Post-increment
  {
    Complex temp = *this; // Store the current state
    this->real++;
    this->imag++;

    return temp; // Return the original state
  }

  bool operator==(const Complex &other) const
  {
    bool areEqual = (this->real == other.real) && (this->imag == other.imag);
    if (areEqual)
    {
      for (int i = 0; i < 3; i++)
      {
        if (this->values[i] != other.values[i])
        {
          areEqual = false;
          break;
        }
      }
    }

    return areEqual;
  }

  Complex operator=(const Complex &other) // Copy Assignment Operator
  {
    this->real = other.real;
    this->imag = other.imag;

    // Deep copy of the dynamic array
    for (int i = 0; i < 3; i++)
      this->values[i] = other.values[i];

    return *this;
  }
};

#endif // COMPLEX_H