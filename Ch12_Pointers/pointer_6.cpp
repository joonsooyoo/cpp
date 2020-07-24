#include <iostream>
#include <vector>
using namespace std;

/*

POINTER EXERCISE: what is reference? (&) alias

*/

int main() {

	int num {10};
	int &a {num}; // a is an alias of num

	cout << "num: " << num << endl;
	cout << "a: " << a << endl;
	cout << "\n-------------------" << endl;
	num = 200;
	cout << "num changed to 200 and alias a: " << a << endl; 
	cout << "\n-------------------" << endl;
	num = 300;
	cout << "num changed to 300 and alias a: " << a << endl; 
	cout << "\n-------------------" << endl;

	//case 2
	vector <string> v{"Joon", "Jae", "Bin"};
	for (auto item: v)
		item = "funny"; // copies v's item and assigns to "funny"
	for (auto item: v)
		cout << item << " "; // expects all "funny"

	cout << "\n-------------------" << endl;
	for (auto &item: v)
		item = "funny";
	for (auto item: v)
		cout << item << " ";

	cout << endl;

	return 0;
}