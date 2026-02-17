#ifndef CUSTOMER_H
#define CUSTOMER_H

#include <iostream>

using namespace std;

class Customer
{
private:
  int id;
  string name;
  int discount; // In percentage

public:
  Customer() {};
  Customer(int id, string name, int discount)
  {
    this->id = id;
    this->name = name;
    this->discount = discount;
  };

  int getId() const
  {
    return id;
  }

  string getName() const
  {
    return name;
  }

  int getDiscount() const
  {
    return discount;
  }

  string getInfo() const
  {
    return "Customer ID: " + to_string(getId()) + ", Name: " + getName() + ", Discount: " + to_string(getDiscount()) + "%";
  }
};

#endif // CUSTOMER_H