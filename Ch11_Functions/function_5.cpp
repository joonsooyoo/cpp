#include <iostream>
#include <string>
using namespace std;

/* 

FUNCTION EXERCISE #5: pass by reference

*/

// prototype
const void print_guest_list(string &g1, string &g2, string &g3);
void clear_guest_list(string &g1, string &g2, string &g3);

int main(){

	/* variable */
	string guest_1 {"Joon"};
	string guest_2 {"Sang"};
	string guest_3 {"Young"};

	/* execute */
	print_guest_list(guest_1, guest_2, guest_3);
	clear_guest_list(guest_1, guest_2, guest_3);
	print_guest_list(guest_1, guest_2, guest_3);

	return 0;
}

// definition
const void print_guest_list(string &g1, string &g2, string &g3){

	cout << g1 << endl;
	cout << g2 << endl;
	cout << g3 << endl;
}
void clear_guest_list(string &g1, string &g2, string &g3){
	g1 = " ";
	g2 = " ";
	g3 = " ";
}