#include <iostream>
#include <string>
using namespace std;

/*

STRING EXERCISE #1: using cpp strings

*/

int main(){

	string s1 {"joon"};
	string s2 {'j'};
	// exercise strings
	string unformatted_full_name {"StephenHawking"};
	string first_name = unformatted_full_name.substr(0, 7);
	string last_name = unformatted_full_name.substr(7, 7);
	string formatted_full_name {first_name + " " + last_name};
	string new_formatted_full_name {};
	new_formatted_full_name = unformatted_full_name.insert(7, " ");

	// call string and char
	cout << s1 << endl;
	cout << s2 << endl;

	// size of s1
	cout << s1.size() << endl;
	cout << s1.length() << endl;

	// last name
	cout << "first name is " << first_name << endl;
	cout << "last name is " << last_name << endl;
	cout << "formatted_full_name is " << formatted_full_name << endl;
	cout << "new_formatted_full_name is " << new_formatted_full_name << endl;


	return 0;
}