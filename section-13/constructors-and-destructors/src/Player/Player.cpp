#include <iostream>
#include <string>
#include "Player.h"

void Player::set_name(std::string name_val) {
  name = name_val;
}

Player::Player(): Player{"None", 100, 3} {
  std::cout << "No Args Constructor" << std::endl;
}

Player::Player(std::string name_val): Player{name_val, 100, 3} {
  std::cout << "One Arg Constructor" << std::endl;
}

Player::Player(std::string name_val, int health_val, int experience_val)
  : name{name_val}, health{health_val}, experience{experience_val} {
    std::cout << "Three Args Constructor" << std::endl;
  }