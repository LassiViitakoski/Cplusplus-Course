#include "Player/Player.h"

void display_player(Player player) {
  std::cout << "Name : " << player.get_name() << std::endl;
  std::cout << "Health : " << player.get_health() << std::endl;
  std::cout << "Experience : " << player.get_experience() << std::endl;
}

int main() {
  Player *hero = new Player();
  Player enemy = Player("Flying Enemy");
  Player lassi{"Player Lassi"};

  display_player(lassi);

  delete hero;
  
}