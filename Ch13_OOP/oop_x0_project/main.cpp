/*

OOP EXERCISE PROJECT: using struct and const with classes

*/

#include <iostream>
#include "Player.h"
#include "Account.h"

int main() {

	// Player joon;
	// joon.set_name("jsyoo");
	// std::cout << "name: " << joon.get_name() << std::endl;

	// Account jae;
	// jae.name = "Jae"; //accessing struct members: all public

	//accessing constant Player
	const Player bin;
	bin.set_name("BIN");
	std::cout << "name: " << bin.get_name() << std::endl;



	return 0;
}