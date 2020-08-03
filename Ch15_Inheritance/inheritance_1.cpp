#include <iostream>

/*

INHERITANCE EXERCISE: basic practice
	
	'Is-a' relationship: inheritance
	'has-a' relationship: composite

*/

class Person {
public: 
	std::string name;
};

class Employee: public Person { //has person attributes?
public:
	double income;
};

class Player: public Person {
public:
	int hp; //specialization
	int mp;
};

int main() {

	Player joon {};
	joon.name = "Joon";
	std::cout << joon.name << std::endl; //Joon

	Employee jae {};
	jae.income = 1000.2;
	std::cout << jae.income << std::endl; //1000.2

	Person bin {};
	// bin.hp = 10; //causes error

	return 0;
}