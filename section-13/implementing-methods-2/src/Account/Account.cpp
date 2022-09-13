#include <string>
#include "Account.h"

void Account::set_balance(double amount) {
  balance = amount;
}

void Account::set_name(std::string n) {
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

std::string Account::get_name() {
  return name;
}
