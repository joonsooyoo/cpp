#include <iostream>
#include <string>
using namespace std;

/*

FUNCTION EXERCISE #4: passing arrays to a function

*/

// prototype
const void print_guest_list(string arr[], size_t value);
void clear_guest_list(string arr[], size_t value);

int main(){

	/* testing */
	// int arr[] {1,2,3};
	// cout << "arr elts are " << arr[0] << " and " << arr[1] << " and " << arr[2] << endl;

	/* exercise */
	string guest_list[] {"Joon", "Bin", "Jae"};
	print_guest_list(guest_list, 3);
	clear_guest_list(guest_list, 3);
	print_guest_list(guest_list, 3);

	return 0;
}

//definition
const void print_guest_list(string arr[], size_t value){

	for (size_t i{0};i<value;++i)
		cout << arr[i] << endl;
}
void clear_guest_list(string arr[], size_t value){

	for (size_t i{0};i<value;++i)
		arr[i] = " ";
}