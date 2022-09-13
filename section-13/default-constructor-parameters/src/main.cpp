#include "Player/Player.h"

int main() {
  Player *hero = new Player();
  Player enemy = Player("Flying Enemy");
  Player lassi{"Player Lassi"};

  delete hero;
  
}