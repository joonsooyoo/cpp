#include <iostream>
#include "Player.h"

/*

OOP EXERCISE: making class (attributes and methods)

*/

int main() {
	
	Player Joon;

	Joon.set_name("Joon");
	Joon.get_name();

	Joon.set_hp(100);
	Joon.get_hp();

	Joon.set_mp(200);
	Joon.get_mp();

	return 0;
}