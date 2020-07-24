#include "Player.h"
#include <iostream>

void Player::set_name(std::string s) {name = s;}

void Player::get_name() {std::cout << "Player name is : "<< name << std::endl;}

void Player::set_hp(int num) {hp = num;}

void Player::get_hp() {std::cout << name << " has " << hp << " HP" << std::endl;}

void Player::set_mp(int num) {mp = num;}

void Player::get_mp() {std::cout << name << " has " << mp << " MP" << std::endl;}
