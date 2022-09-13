#ifndef _ACCOUNT_H_
#define _ACCOUNT_H_
#include <string>

class Account {
  private:
    std::string name;
    double balance;
  
  public:
    void set_balance(double);
    void set_name(std::string);
    bool deposit(double);
    bool withdraw(double);
    double get_balance();
    std::string get_name();
};

#endif // _ACCOUNT_H_