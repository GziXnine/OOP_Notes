#include <iostream>

using namespace std;

class Account
{
private:
  string id;
  string name;
  double balance = 0.0;

public:
  Account(string id, string name)
  {
    this->id = id;
    this->name = name;
  }

  Account(string id, string name, double balance)
  {
    this->id = id;
    this->name = name;
    this->balance = balance;
  }

  string getId()
  {
    return id;
  }

  string getName()
  {
    return name;
  }

  double getBalance()
  {
    return balance;
  }

  double credit(double amount)
  {
    balance += amount;
    return balance;
  }

  double debit(double amount)
  {
    if (amount <= balance)
      balance -= amount;
    else
      cout << "Amount Exceeded Balance!" << endl;

    return balance;
  }

  double trasferTo(Account &another, double amount)
  {
    if (amount <= balance)
    {
      balance -= amount;
      another.credit(amount);
    }
    else
      cout << "Amount Exceeded Balance!" << endl;

    return balance;
  }
};

int main()
{
  Account acc1("123", "Ahmed", 1000), acc2("456", "Ali", 500);
  cout << "Account 1 Balance: " << acc1.getBalance() << endl;
  cout << "Account 2 Balance: " << acc2.getBalance() << endl;
  acc1.credit(500);
  cout << "Account 1 Balance After Credit: " << acc1.getBalance() << endl;
  acc1.debit(200);
  cout << "Account 1 Balance After Debit: " << acc1.getBalance() << endl;
  acc1.trasferTo(acc2, 300);
  cout << "Account 1 Balance After Transfer: " << acc1.getBalance() << endl;
  cout << "Account 2 Balance After Transfer: " << acc2.getBalance() << endl;

  return 0;
}