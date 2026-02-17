#include <iostream>
#include "Customer.h"
#include "Invoice.h"

using namespace std;

int main()
{
  Customer customer(1, "John Doe", 10);
  Invoice invoice(101, customer, 500.0);
  cout << invoice.getInfo() << endl;
  cout << "Amount after discount: " << invoice.getAmountAgterDiscount() << endl;

  return 0;
}