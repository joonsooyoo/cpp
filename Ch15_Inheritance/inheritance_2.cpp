#include <iostream>

/*

INHERITANCE EXERCISE: public, protected and private data members and their access

*/

class Base {
public:
	int a {};
	void show_value() {
		std::cout << a << " " << b << " " << c << std::endl;
	}
	int get_private_value() {return c;}
		
protected:
	int b {};
	void show_value_protected() {
		std::cout << a << " " << b << " " << c << std::endl;	
	}
private:
	int c {};
	void show_value_private() {
		std::cout << a << " " << b << " " << c << std::endl;	
	}

};
class Derived: public Base {
	// has a, b, c data members
};

int main() {

	Base base;

	std::cout << base.a << std::endl; // 0

	// std::cout << base.b << std::endl; //error: data is protected, thus not accessible from object
	// std::cout << base.c << std::endl; //error: data is private, thus not accessible from object

	base.show_value(); // c <- compiler error? since protected: (no comp. error) they are accessible by class member function
	// base.show_value_private(); // can't access this member function
	// base.show_value_protected(); // can't access this member function

	std::cout << "-------------------" << std::endl;
	Derived der;
	der.show_value();
	der.a = 2;
	der.show_value();
	// der.b = 3; // error: no access
	std::cout << "-------------------" << std::endl;
	std::cout << base.get_private_value() << std::endl; //can get private value from base member function
	std::cout << der.get_private_value() << std::endl; //how about derived class? (not accessible?)


	return 0;
}