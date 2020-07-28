#include <iostream>
#include <string>

/*

OOP EXERCISE: review and static

*/

void blank_space() {std::cout << std::endl;}

//class
class Player {
private:
	//static
	static int player_num;
	static std::string player_race;
	//attributes
	std::string name;
	double hp;
	double mp;
public:
	//methods
	std::string get_name() {return name;} // getter: inline declaration
	void set_name(std::string name_val); // setter
	double get_hp() {return hp;}
	void set_hp(double hp_val){hp = hp_val;}
	double get_mp() {return mp;}
	void set_mp(double mp_val) {mp = mp_val;}
	//static method -> only to static members
	static int get_player_num();
	static std::string get_player_race();

	//constructor
	Player(std::string name_val="default", double hp=50, double mp=25.5);
	//shallow copy constructor
	Player(const Player &source);
	//destructor
	~Player() {
		--player_num;
		std::cout << "destructor called for " << name << std::endl;
	}
};

//outside method declaration
void Player::set_name(std::string name_val){
	name = name_val;
}

//outside constructor declaration
Player::Player(std::string name_val, double hp_val, double mp_val)
	: name{name_val}, hp{hp_val}, mp{mp_val} {
		std::cout << name << " created!" << std::endl;
		std::cout << "hp, mp: " << hp << " " << mp << std::endl;
		blank_space();
		++player_num;
	}
//copy constructor declaration
Player::Player(const Player &source)
	: Player(source.name, source.hp, source.mp) {
		std::cout << "copy obj: " << name << " has been called" << std::endl;
	}

//static members declaration
int Player::player_num = 0;
int Player::get_player_num() {
	return player_num;
}
std::string Player::player_race = "human";
std::string Player::get_player_race() {
	return player_race;
}

//function
void display_players();
void display_player_race();

void display_obj_name(Player p);


int main() {

	display_player_race();
	display_players();

	Player joon;
	joon.set_name("JSY");
	std::cout << "name of the player class joon is: " << joon.get_name() << std::endl;
	joon.set_hp(100.2);
	joon.set_mp(100.5);
	std::cout << "joon has hp, mp: " << joon.get_hp() << ", " << joon.get_mp() << std::endl;
	blank_space();

	Player jae = Player("JJY");
	jae.set_name("jangjy9");
	display_obj_name(jae);
	
	Player *enemy = new Player("enemy1", 70);
	delete enemy;
	
	display_players();


	return 0;
}

//function definition
void display_players(){
	std::cout << "active players: " << Player::get_player_num() << std::endl;
	blank_space();
}
void display_player_race() {
	std::cout << "player race: " << Player::get_player_race() << std::endl;
}
void display_obj_name(Player p) {
	std::cout << "name is " << p.get_name() << std::endl; 
}
