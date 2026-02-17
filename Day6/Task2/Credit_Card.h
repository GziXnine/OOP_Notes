#ifndef CREDIT_CARD_H
#define CREDIT_CARD_H

#include "Payment_Method.h"

class Credit_Card : public Payment_Method
{
private:
  string cvv;

public:
  Credit_Card(string accNum, string curr, string cvv) : Payment_Method(accNum, curr)
  {
    this->cvv = cvv;
  }

  void pay(double amount) override
  {

    if (validatePaymentDetails(amount))
    {
      double fee = calculateTransactionFee(amount);
      double totalAmount = amount + fee;
      cout << "Processing payment with Credit Card." << endl;
      addTransaction("Credit Card payment: " + to_string(totalAmount) + " " + currency);
    }
    else
      cout << "Payment validation failed for Credit Card." << endl;
  }

  double calculateTransactionFee(double amount) override
  {
    double fee = amount * 0.03; // Example fee calculation (3% of the amount)
    cout << "Calculated transaction fee for Credit Card: " << fee << " " << currency << endl;

    return fee;
  }

  bool validatePaymentDetails(double amount) override
  {
    if (cvv.length() != 3)
    {
      cout << "Invalid CVV for Credit Card." << endl;
      return false;
    }

    return true;
  }
};

#endif // CREDIT_CARD_H