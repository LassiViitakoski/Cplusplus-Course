#include <iostream>
#include <string>
#include "Player.h"

Player::Player(std::string name_val, int health_val, int experience_val)
  : name{name_val}, health{health_val}, experience{experience_val} {
    std::cout << "Three Args Constructor" << std::endl;
  }

Player::Player(const Player &source)
  : name{source.name}, health{source.health}, experience{source.experience} {
    std::cout << "Copy constructor made copy of : " << source.name << std::endl;
  }

void Player::set_name(std::string name_val) {
  name = name_val;
}

int Player::get_health() {
  return health;
}

int Player::get_experience() {
  return experience;
}

std::string Player::get_name() {
  return name;
}

