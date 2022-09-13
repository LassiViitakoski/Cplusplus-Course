#include <iostream>
#include "Account/Account.h"

int main() {
  Account frank_account;
  
  frank_account.set_name("Frank's Account");
  frank_account.set_balance(1000.0);

  if (frank_account.deposit(200.0))
    std::cout << "Deposit OK" << std::endl;
  else
    std::cout << "Deposit Not Allowed" << std::endl;

  if (frank_account.withdraw(500.0))
    std::cout << "Withdrawal OK" << std::endl;
  else
    std::cout << "Not sufficient funds";

  if (frank_account.withdraw(1500.0))
    std::cout << "Withdraw OK" << std::endl;
  else
    std::cout << "Not sufficient funds" << std::endl;

  return 0;
}