#include <iostream>

/*

POLYMORPHISM EXERCISE: virtual functions & destructors & override specifiers & final specifier 

*/

class Account {
public:
	virtual void withdraw(double amount) { //function overriding | base class | abstract class
		std::cout << "Account::withdraw" << std::endl;
	}
	virtual ~Account() {};
};

class Saving_Account: public Account {
public:	
	virtual void withdraw(double amount) override //const
	{ 
		//input parameter, return type and name
		//i.e. signatures for function prototype should be the same 
		//this will be redefined, thus, not overriden
		std::cout << "Saving Account::withdraw" << std::endl;
	}
	virtual ~Saving_Account() {};
};

class Trust_Account final: public Saving_Account {
public:
	virtual void withdraw(double amount) final override {
		std::cout << "Trust Account::withdraw" << std::endl;
	}
	virtual ~Trust_Account() {};
};

int main() {

	Account *p1 = new Account;
	Account *p2 = new Saving_Account;
	Account *p3 = new Trust_Account;
	Saving_Account *p4 = new Trust_Account;

	p1->withdraw(5);
	p2->withdraw(5);
	p3->withdraw(5);
	p4->withdraw(5);

	// free the virtual memory space(heap) by p1 ~ p4: if destructor is not mentioned as virtual,
	// then compiler cannot free the memory space
	delete p4;
	delete p3;
	delete p2;
	delete p1;

	return 0;
}