#include <iostream>

/*

INHERITANCE EXERCISE:

*/

using namespace std;

class Base {
private:
	int data {};
public:
	//cons
	Base() {cout << "#b-0" << endl;}
	Base(int x) {
		data = x;
		cout << "#b-1" << endl;
	}
	//method
	void show_base() {cout << data << endl;}
};

class Derived: public Base {
public:
	//cons
	Derived() {std::cout << "#d-0" << endl;}

};

int main() {

	Base base; // #b-0
	// base.show_base();
	
	// Base base2 {3};
	// base2.show_base();

	Derived der; // #b-0, #d-0
	// Derived der2 {2}; // 


	return 0;
}