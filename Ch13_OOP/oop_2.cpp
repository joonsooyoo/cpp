#include <iostream>
#include <string>
using namespace std;

/*

OOP EXERCISE 2

*/

class Player{

private:
	// attributes
	string name {"Player"};

public:
	int hp {};
	int mp {};
	// methods
	// inline method declaration
	void talk(string s) {
		cout << name << " is talking now" << endl;
		cout << s << endl;
	}
	void get_name() {
		cout << "player name is " << name << endl;
	}
	void set_name(string s) {
		name = s;
	}
	void use_skill_1(Player enemy);

};

int main() {

	Player Joon;
	Player *enemy = new Player;

	// Joon.name = "Soo" // causes error because name in class Player is private
	Joon.set_name("Joon");
	Joon.get_name();

	Joon.hp = 100;
	Joon.mp = 200;

	Joon.talk("hey!");

	enemy->set_name("Minion");
	enemy->get_name();
	enemy->talk("attack!");

	Joon.use_skill_1(*enemy);

	return 0;
}

void Player::use_skill_1(Player enemy) {
	int damage {50};
	enemy.hp -= damage;

	cout << Player::name << " uses skill 1 to " << enemy.name << endl;
}