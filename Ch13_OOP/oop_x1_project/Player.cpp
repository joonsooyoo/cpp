#include "Player.h"
#include <iostream>
#include <string>

//static init, and method
int Player::player_num = 0;
int Player::get_player_num(){
	return player_num;
}

//method
std::string Player::get_name(){
	return name;
}
//constructor
Player::Player(std::string name_val, double hp_val, double mp_val)
	: name{name_val}, hp{hp_val}, mp{mp_val} {
		++player_num;
		std::cout << name << " created" << std::endl;
		std::cout << "-----------------" << std::endl;
	}
//copy constructor
Player::Player(const Player &source)
	: Player(source.name, source.hp, source.mp) {
		std::cout << name << " copied" << std::endl;
		std::cout << "-----------------" << std::endl;
	}
