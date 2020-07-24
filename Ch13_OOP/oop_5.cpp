#include <iostream>

/*

OOP EXERCISE: default constructor

*/

class Player {
private:
	std::string name;
	int hp;
	int mp;
public:
	// constructor
	// default constructor setting
	Player() {
		name = "no name";
		hp = 100;
		mp = 50;

		std::cout << "name: " << name << std::endl;
		std::cout << "hp: " << hp << std::endl;
		std::cout << "mp: " << mp << std::endl;
		std::cout << "created!" << std::endl;
	}
	// 1-arg
	// Player(std::string name_val){
	// 	name = name_val;

	// 	std::cout << "name: " << name << std::endl;
	// 	std::cout << "hp: " << hp << std::endl;
	// 	std::cout << "mp: " << mp << std::endl;
	// 	std::cout << "created!" << std::endl;
	// }
	// 3-arg
	Player(std::string name_val, int hp_val, int mp_val){
		name = name_val;
		hp = hp_val;
		mp = mp_val;

		std::cout << "name: " << name << std::endl;
		std::cout << "hp: " << hp << std::endl;
		std::cout << "mp: " << mp << std::endl;
		std::cout << "created!" << std::endl;
	}

	// constructor initialization lists
	Player(std::string name_val)
		: name {name_val}, hp {30}, mp {20} {

		std::cout << "name: " << name << std::endl;
		std::cout << "hp: " << hp << std::endl;
		std::cout << "mp: " << mp << std::endl;
		std::cout << "created!" << std::endl;

	}

};




int main() {

	Player Joon; // no-arg
	std::cout << std::endl;
	Player Bin("bin"); // 1-arg
	std::cout << std::endl;
	Player Jae("jae", 50, 30); // 3-arg
	std::cout << std::endl;
	Player DT {"DT", 200, 200}; // 3-arg with initalization


	return 0;
}