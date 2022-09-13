#ifndef _PLAYER_H_
#define _PLAYER_H_
#include <string>
#include <iostream>

class Player {
  private:
    int health;
    int experience;
    std::string name;

  public:
    void set_name(std::string);

    Player();
    Player(std::string);
    Player(std::string, int, int);
    ~Player() {
      std::cout << "Destructor called for " << name << std::endl;
    }    

};


#endif // _PLAYER_H_