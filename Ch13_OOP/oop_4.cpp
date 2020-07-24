#include <iostream>

/*

OOP EXERCISE: constructor practice

*/

class Player {

private:
	// attribute
	std::string name;
	int hp;
	int mp;

public:
	// method
	void talk(std::string message);

	// constructor
	Player() {
		std::cout << "Player is called!" << std::endl;
	}
	Player(std::string name_val){
		name = name_val;
	}
	Player(std::string name_val, int hp_val, int mp_val){
		name = name_val;
		hp = hp_val;
		mp = mp_val;
	}
	// deconstructor
	~Player() {
		std::cout << name << " is out of scope" << std::endl;
	}
};

void Player::talk(std::string message){

	std::cout << Player::name << " says " << message << std::endl;
}


int main() {

	{
		Player Joon("joon");
		Joon.talk("Hey Guys");
		// Joon leaves the block -> out of scope
	}
	
	Player Bin;
	Player Jae("jae", 100, 50);
	Jae.talk("hello");

	return 0;
}