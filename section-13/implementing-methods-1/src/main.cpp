#include <iostream>
#include <string>

using namespace std;

class Account {
  private:
    string name;
    double balance;
  
  public:
    void set_balance(double);
    void set_name(string);
    bool deposit(double);
    bool withdraw(double);
    double get_balance();
    string get_name();
};

void Account::set_balance(double amount) {
  balance = amount;
}

void Account::set_name(string n) {
  name = n;
}

bool Account::deposit(double amount) {
  balance += amount;

  return true;
}

bool Account::withdraw(double amount) {
  if (balance - amount < 0)
    return false;

  balance -= amount;
  return true;
}

double Account::get_balance() {
  return balance;
}

string Account::get_name() {
  return name;
}

int main() {
  Account frank_account;

  frank_account.set_name("Frank's Account");
  frank_account.set_balance(1000.0);

  if (frank_account.deposit(200.0))
    cout << "Deposit OK" << endl;
  else
    cout << "Deposit Not Allowed" << endl;

  if (frank_account.withdraw(500.0))
    cout << "Withdrawal OK" << endl;
  else
    cout << "Not sufficient funds";

  if (frank_account.withdraw(1500.0))
    cout << "Withdraw OK" << endl;
  else
    cout << "Not sufficient funds" << endl;

  return 0;
}