#include <iostream>
#include <string>
#include "Player.h"

void Player::set_name(std::string name_val) {
  name = name_val;
}

Player::Player(std::string name_val, int health_val, int experience_val)
  : name{name_val}, health{health_val}, experience{experience_val} {
    std::cout << "Three Args Constructor" << std::endl;
  }