#ifndef DEBIT_CARD_H
#define DEBIT_CARD_H

#include "Payment_Method.h"

class Debit_Card : public Payment_Method
{
private:
  string pin;

public:
  Debit_Card(string accNum, string curr, string pin) : Payment_Method(accNum, curr)
  {
    this->pin = pin;
  }

  void pay(double amount) override
  {
    if (validatePaymentDetails(amount))
    {
      double fee = calculateTransactionFee(amount);
      double totalAmount = amount + fee;
      cout << "Processing payment with Debit Card." << endl;
      addTransaction("Debit Card payment: " + to_string(totalAmount) + " " + currency);
    }
    else
      cout << "Payment validation failed for Debit Card." << endl;
  }

  double calculateTransactionFee(double amount) override
  {
    double fee = amount * 0.01; // Example fee calculation (1% of the amount)
    cout << "Calculated transaction fee for Debit Card: " << fee << " " << currency << endl;

    return fee;
  }

  bool validatePaymentDetails(double amount) override
  {
    if (pin.length() != 4)
    {
      cout << "Invalid PIN for Debit Card." << endl;
      return false;
    }

    return true;
  }
};

#endif // DEBIT_CARD_H