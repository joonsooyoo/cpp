/* 

OOP EXERCISE: copying constructor and moving object

*/
#include <iostream>
#include "Player.h"
#include "Shallow.h"

//func definition
void display_shallow(Shallow s){
	std::cout << s.get_data_value() << std::endl;
}


int main()
{
	Player anonymous;
	
	Shallow addr1 {100};
	display_shallow(addr1);
	
	addr1.set_data_value(5);
	Shallow addr2 {addr1};

	return 0;
}