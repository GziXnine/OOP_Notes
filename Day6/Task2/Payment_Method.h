#ifndef PAYMENT_METHOD_H
#define PAYMENT_METHOD_H

#include <iostream>

using namespace std;

class Payment_Method
{
protected:
  string accountNumber;
  string transactionHistory[5];
  double transactionLimit = 10000.0;
  string currency;

public:
  Payment_Method(string accNum, string curr)
  {
    this->accountNumber = accNum;
    this->currency = curr;
  }

  virtual void pay(double amount) {}

  virtual bool validatePaymentDetails(double amount) = 0;

  virtual double calculateTransactionFee(double amount)
  {
    double fee = amount * 0.02; // Example fee calculation (2% of the amount)
    cout << "Calculated transaction fee: " << fee << " " << currency << endl;

    return fee;
  }

  void addTransaction(string transaction)
  {
    for (int i = 4; i > 0; i--)
      transactionHistory[i] = transactionHistory[i - 1];

    transactionHistory[0] = transaction;
  }

  void printTransactionHistory()
  {
    cout << "Transaction History for account: " << accountNumber << endl;
    for (int i = 0; i < 5; i++)
    {
      if (!transactionHistory[i].empty())
        cout << transactionHistory[i] << endl;
    }
  }
};

#endif // PAYMENT_METHOD_H