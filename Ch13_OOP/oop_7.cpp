#include <iostream>

/* 

OOP EXERCISE: delegating constructor

*/

class Player{
private:
	std::string name;
	int hp;
	int mp;

public:
	Player(std::string name_val = "no name", int hp_val = 100, int mp_val = 50);
};

Player::Player(std::string name_val, int hp_val, int mp_val)
	: name{name_val}, hp{hp_val}, mp{mp_val} {
		std::cout << name << " created" << std::endl;
		std::cout << "hp, mp: " << hp << ", " << mp << std::endl;
		std::cout << std::endl;
	}

int main() {

	Player joon;
	Player jae("Jae", 5, 5); // hp, mp: 5, 5
	Player bin("Bin", 10);
	Player moon("Moon", 20, 10);

	return 0;
}