#include <iostream>

/*

POLYMORPHISM EXERCISE: pure virtual function and abstract class
abstract class vs concrete class
	abstract class: 
		too generic to create object from
		parent class
		has at least one pure virtual function

*/

class Account { //pure virtual function indicates this is an abstract class
public:
	virtual void withdraw()=0;
	virtual ~Account();
};

class Saving: public Account {
public:
	virtual void withdraw() {
		std::cout << "Saving" << std::endl;
	}
	virtual ~Saving();
};

class Trust final: public Saving {
public:
	virtual void withdraw() {
		std::cout << "Trust" << std::endl;
	}
	virtual ~Trust();
};

int main() {

	// Account *ptr = new Account; //compile error: cannot call abstract class

	Account *p = new Saving;
	p->withdraw();

	Account *p2 = new Account;
	p2->withdraw();

	delete p;
	delete p2;

	return 0;
}