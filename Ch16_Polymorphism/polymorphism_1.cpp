#include <iostream>

/*

POLYMORPHISM EXERCISE: static binding | compile-time vs dynamic binding | run time

*/

class Base {
public:
	void say_hello() const {
		std::cout << "This is Base" << std::endl;
	}
};

class Derived: public Base {
public:
	void say_hello() const {
		std::cout << "This is Derived" << std::endl;
	}
};

void greeting(const Base &obj) {
	std::cout << "Greeting!" << std::endl;
	obj.say_hello();
}


int main() {

	Base b;
	greeting(b); //b.say_hello();

	Derived d;
	greeting(d); //d.say_hello()? ... no, b.say_hello()
	std::cout << "------------------------------" << std::endl;

	Base *ptr = new Derived; //ok, Derived Is-a Base
	ptr->say_hello(); //Derived.say_hello()? ... no, Base.say_hello();



	return 0;
}
