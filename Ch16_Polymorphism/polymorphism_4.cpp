#include <iostream>

/*

POLYMORPHISM EXERCISE: using base class reference

*/

class Account {
public:
	virtual void withdraw(){
		std::cout << "Account" << std::endl;
	}
	virtual ~Account() {};

};

class Saving: public Account {
public: 
	virtual void withdraw() override {
		std::cout << "Saving" << std::endl;
	}
	virtual ~Saving() {};
};

class Trust final: public Account {
public:
	virtual void withdraw() override final {
		std::cout << "Trust" << std::endl;
	}
	virtual ~Trust() {};
};

void function(Account &source){
	source.withdraw();
}


int main() {

	Account *p1 = new Saving;
	Account *p2 = new Trust;

	p1->withdraw();
	p2->withdraw();
	
	std::cout << "-------------" << std::endl;

	Saving b;
	Account &ref = b; //using base class reference
	Trust c;
	Account &ref2 = c;
	ref.withdraw(); //Saving
	ref2.withdraw(); //Trust

	std::cout << "-------------" << std::endl;

	function(b); //Saving

	delete p2;
	delete p1;

	return 0;
}