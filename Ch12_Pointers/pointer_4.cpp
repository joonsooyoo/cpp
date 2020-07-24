#include <iostream>
#include <vector>
using namespace std;

/* 

POINTER EXERCISE: function returning dynamically allocated memory address

*/

// prototype
int *create_array(size_t size, int init_value = 0);

int main() {

	int *arr1_dm {nullptr};

	arr1_dm = create_array(5);

	cout << "arr1_dm: " << *arr1_dm << endl;
	cout << "arr1_dm[1]: " << arr1_dm[1] << endl;
	cout << "arr1_dm[2]: " << arr1_dm[2] << endl;
	cout << "arr1_dm[3]: " << arr1_dm[3] << endl;
	cout << "arr1_dm[4]: " << arr1_dm[4] << endl;

	delete [] arr1_dm;

	cout << endl;
	return 0;
}

// definition
int *create_array(size_t size, int init_value){

	int *new_storage {nullptr};

	new_storage = new int[size];
	for (size_t i{0};i<size;++i)
		*(new_storage + i) = init_value;

	return new_storage;
}