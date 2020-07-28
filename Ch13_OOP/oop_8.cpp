#include <iostream>

/*

OOP EXERCISE: copy constructor

*/

class Player {
private:
	// attribute
	std::string name;
	int hp;
	int mp;
public:
	// method
	std::string get_name() {return name;}
	int get_hp() {return hp;}
	int get_mp() {return mp;}
	// constructor
	Player(std::string name_val = "noname", int hp_val = 100, int mp_val = 50);
	// destructor
	~Player() {
		std::cout << "destructor called for " << name << std::endl;
		std::cout << std::endl;
	}
	// copy constructor
	Player(const Player &source);

};
// default constructor
Player::Player(std::string name_val, int hp_val, int mp_val)
	: name{name_val}, hp{hp_val}, mp{mp_val} {
		std::cout << "constructor called for " << name << std::endl;
		std::cout << "hp, mp: " << hp << ", " << mp << std::endl;
		std::cout << std::endl;
	}
// copy constructor
Player::Player(const Player &source) {
	name = source.name;
	hp = source.hp;
	mp = source.mp;
}
// function that are called-by-value of an object
void display_object(Player p){
	std::cout << "copy name: " << p.get_name() << std::endl;
	std::cout << "copy hp: " << p.get_hp() << std::endl;
	std::cout << "copy mp: " << p.get_mp() << std::endl;
	std::cout << std::endl;
}


int main() {
	// testing constructor and deconstructor
	{
		Player joon{"Joon"};	
	}
	Player bin{"Bin", 200};
	display_object(bin);	

	return 0;
}