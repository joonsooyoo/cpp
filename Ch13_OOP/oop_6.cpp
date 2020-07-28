#include <iostream>

/* 

OOP EXERCISE: constructor initialization list and default constructor 

*/

class Player {
private:
	std::string name;
	int hp;
	int mp;
public:
	void talk(std::string talk_value);

	Player();
	Player(std::string name_val);
	Player(std::string name_val, int hp_val);
};

// method declaration outside the class
void Player::talk(std::string talk_value) {
	std::cout << name << " says " << talk_value << std::endl;
}

// not initialization, but default values assigned!
Player::Player(){
	name = "no name";
	hp = 100;
	mp = 50;

	std::cout << name << " created" << std:: endl;
}

// initialization 
Player::Player(std::string name_val)
	: name{name_val}, hp{50}, mp{30} {
		std::cout << name << " created" << std::endl;
	}
Player::Player(std::string name_val, int hp_val)
	: name{name_val}, hp{hp_val}, mp{10} {
		std::cout << name << " created" << std::endl;
	}

int main() {

	Player joon;
	Player bin("Bin");
	Player jae("Jae", 20);

	return 0;
}