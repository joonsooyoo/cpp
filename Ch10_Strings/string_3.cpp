#include <iostream>
#include <string>
using namespace std;
/*

STRING EXERCISE: practicing various functions in string header file or string package

*/

int main() {

	string s1 {"joon"};
	string s2 {};

	cout << "s1: " << s1 << endl;
	cout << "=========================\n" << endl;
	// testing capacity functions
	cout << "CAPACITY" << endl;
	cout << "s1.size(): " << s1.size() << endl; //size
	cout << "s1.length(): " << s1.length() << endl; //length

	// accessing elts
	cout << "\n=========================" << endl;
	cout << "ACCESSING ELTS" << endl;
	cout << "s1.end(): " << s1.back() << endl; //back
	cout << "s1.front(): " << s1.front() << endl; //front
	cout << "s1.at(1): " << s1.at(1) << endl; //at
	cout << "s1[1]: " << s1[1] << endl; //[] operator

	// modifiers
	cout << "\n=========================" << endl;
	cout << "modifiers" << endl;
	cout << "s1.append(string): " << s1.append(" soo") << endl; //append
	cout << "s1 is now: " << s1 << endl;
	cout << "s1.push_back(y <- with two single colons)" << endl;
	s1.push_back('y'); //push_back
	cout << "s1 is now: " << s1 << endl; // result: joon sooy
	cout << "s2.assign(s1, 0, 4): " << s2.assign(s1, 0, 4) << endl; // assign
	s1.swap(s2);
	cout << "swapping s1 and s2\ns1: " << s1 << " and s2: " << s2 << endl;

	return 0;
}