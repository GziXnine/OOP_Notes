#ifndef INVOICE_H
#define INVOICE_H

#include <iostream>
#include "Customer.h"

using namespace std;

class Invoice
{
private:
  int id;
  Customer customer; // Composition relationship
  double amount;

public:
  Invoice() {};
  Invoice(int id, const Customer &customer, double amount)
  {
    this->id = id;
    this->customer = customer;
    this->amount = amount;
  };

  int getId() const
  {
    return id;
  }

  Customer getCustomer() const
  {
    return customer;
  }

  double getAmount() const
  {
    return amount;
  }

  void setAmount(double amount)
  {
    if (amount >= 0)
      this->amount = amount;
  }

  double getAmountAgterDiscount() const
  {
    return getAmount() - (getAmount() * getCustomer().getDiscount() / 100); // returns amount after discount
  }

  string getInfo() const
  {
    return "Invoice ID: " + to_string(getId()) + ", Customer Info: [" + getCustomer().getInfo() + "], Amount: " + to_string(getAmount());
  }
};

#endif // INVOICE_H