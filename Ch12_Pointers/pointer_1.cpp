#include <iostream>
#include <string>
#include <vector>
using namespace std;

/* 

POINTER EXERCISE: basic practices

*/

int main(){

	int num {100};
	int *ptr;

	cout << "sizeof(ptr): "<< sizeof(ptr) << endl; // 8 byte
	cout << "value of ptr: " << ptr << endl; // ptr: 0x10
	cout << "\n=================================\n";

	// ptr = &num;
	ptr = &num; 
	cout << "value of ptr: " << ptr << endl; // ptr: 0x61fe14
	cout << "\n=================================\n";

	double num2 {10.2};
	double num3 {10.3};
	double *double_ptr {};

	double_ptr = &num2;

	cout << "num2: " << num2 << " and num3: " << num3 << endl; 
	cout << "value of double_ptr that points to num2: " << double_ptr << endl;
	cout << "address of num2: " << &num2 << endl;
	cout << "\n------- change of address -------\n" << endl;

	double_ptr = &num3;

	cout << "address of double_ptr that points to num3: " << double_ptr << endl;

	/* checks to see if this causes a compiler error */
	// double_ptr = &num; // double pointer points to double type, but now it points to 'num' that is an integer type

	cout << "\n=================================\n";
	string *str_ptr {};
	cout << "size of str_ptr: " << sizeof str_ptr << endl;

	cout << "\n=================================\n";
	double high_temp {100};
	double low_temp {};
	double *ptr_temp {&high_temp};

	cout << "*ptr_temp: " << *ptr_temp << endl;
	cout << "---------ptr_temp stores low_temp address---------" << endl;
	ptr_temp = &low_temp;
	cout << "*ptr_temp: " << *ptr_temp << endl;

	cout << "\n=================================\n";
	string name {"joon"};
	string *ptr_name {&name};

	// string pointer
	cout << "string pointer *ptr_name is " << *ptr_name << endl;
	name = "soo";
	cout << "if we change name to soo, then *ptr_name is now dereferencing: " << *ptr_name << endl;

	// vector pointer
	cout << "\n=================================\n";
	vector <string> best_friend {"Jae", "Bin", "DT"};
	vector <string> *ptr_best_friend {nullptr};
	ptr_best_friend = &best_friend;

	cout << "(*ptr_best_friend).at(0) dereferencing: " << (*ptr_best_friend).at(0) << endl;

	cout << "my best_friend list is " << endl;
	for (auto friends: *ptr_best_friend)
		cout << friends << " ";


	cout << endl;
	return 0;
}