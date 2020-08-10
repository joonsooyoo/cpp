#include <iostream>

class Account {
public:
	virtual void deposit()=0; //pure virtual function in a parent class
	virtual void withdraw()=0;
	virtual ~Account() {};
};

class Saving: public Account {
public:
	virtual ~Saving() {};
};

class Checking: public Account {
public:
	virtual void deposit(){
		std::cout << "Checking::deposit" << std::endl;
	}
	virtual ~Checking() {};
};

class Trust: public Saving {
public:
	virtual void deposit() {
		std::cout << "Trust::deposit" << std::endl;
	}
	virtual void withdraw() {
		std::cout << "Trust::withdraw" << std::endl;
	}
	virtual ~Trust() {};
};

int main() {

	Account *p1 = new Checking;
	p1->deposit();

	return 0;
}