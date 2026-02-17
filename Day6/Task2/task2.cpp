#include <iostream>
#include "Payment_Method.h"
#include "Debit_Card.h"
#include "Credit_Card.h"

using namespace std;

int main()
{
  Debit_Card debitCard("123456789", "USD", "1234");  // PIN
  Credit_Card creditCard("987654321", "USD", "567"); // CVV
  debitCard.pay(500.0);
  creditCard.pay(1000.0);
  debitCard.printTransactionHistory();
  creditCard.printTransactionHistory();

  return 0;
}