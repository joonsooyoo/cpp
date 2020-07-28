#include "Player.h"


void Player::set_name(std::string name_val){
	name = name_val;
}

Player::Player(std::string name_val, double hp_val, double mp_val)
	: name{name_val}, hp{hp_val}, mp{mp_val} {
		std::cout << name << " created" << std::endl;
		std::cout << std::endl;
	};
