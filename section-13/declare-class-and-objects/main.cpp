#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Player {
  // attributes
  string name{"Player"};
  int health{100};
  int experience{3};

  // methods
  void talk(string);
  bool is_dead();
};

class Account {
  // attributes
  string name{"Account"};
  double balance{0.0};

  // methods
  bool deposit(double);
  bool withdraw(double);
};

int main() {
  Player lassi;
  Player hero;

  Player players[]{lassi, hero};
  vector<Player> player_vec{lassi};
  player_vec.push_back(hero);

  Player *enemy{nullptr};
  enemy = new Player;

  delete enemy;

  return 0;
}