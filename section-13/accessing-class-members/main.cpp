#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Player {
  public:

  // attributes
  string name{"Player"};
  int health{100};
  int experience{3};

  // methods
  void talk(string text) {
    cout << name << " says " << text << endl;
  }

  void inform_experience() {
    cout << name << " has " << experience << " points." << endl; 
  }

  bool is_dead();
};

class Account {
  public:

  // attributes
  string name{"Account"};
  double balance{0.0};

  // methods
  bool deposit(double amount) {
    balance += amount;

    cout << "Deposit successfully completed" << endl;

    return true;
  }

  bool withdraw(double amount) {
    balance -= amount;

    cout << "Withdrawal successfully completed" << endl;

    return true;
  }
};

int main() {
  Player lassi;
  Player hero;

  lassi.name = "Lassi";
  lassi.health = 200;
  lassi.experience = 12;

  lassi.inform_experience();

  Player *enemy = new Player;
  (*enemy).name = "Enemy";
  (*enemy).health = 120;
  enemy->experience = 8;
  enemy->talk("I will destroy you!!!!");

  Account lassi_account;

  lassi_account.name = "Lassi's Account";
  lassi_account.balance = 5000.0;
  lassi_account.deposit(1000.0);
  lassi_account.withdraw(500.0);


  cout << endl;

  return 0;
}