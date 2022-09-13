#ifndef _PLAYER_H_
#define _PLAYER_H_
#include <string>
#include <iostream>

class Player {
  private:
    std::string name;
    int health;
    int experience;

  public:
    void set_name(std::string);
    int get_health();
    int get_experience();

    Player(
      std::string name_val = "None",
      int health_val = 100,
      int experience_val = 3
    );
    ~Player() {
      std::cout << "Destructor called for " << name << std::endl;
    }    

};


#endif // _PLAYER_H_