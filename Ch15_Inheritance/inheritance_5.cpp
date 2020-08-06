#include <iostream>

/*

INHERITANCE EXERCISE: passing argument to base constructor

*/

using namespace std;

class Base {
private:
	int b;
public:
	//cons
	Base() {cout << "#b0" << endl;};
	Base(int x)
		: b {x} {
			cout << "#b1" << endl;
			cout << "\tb: " << b << endl;
		}
	//method
	void display_b() {cout << b << endl;}
};

class Derived: public Base {
private:
	int d;
public:
	//cons
	Derived()
		: Base() {cout << "#d0" << endl;} //b0, d0
	Derived(int x)
		: Base(x) {
			cout << "#d1" << endl;
			cout << "\td: " << d << endl;} //b1, d1
	//method
	void display_d() {cout << d << endl;}
};

int main() {

	Base base;
	Base base2 {3};
	cout << "--------------" << endl;
	Derived der;
	Derived der2 {5};

	return 0;
}