#include <iostream>
using namespace std;

/* 

POINTER EXERCISE: (similar w/ exercise 4: pointer_4.cpp)

*/

// proto
int *create_array(size_t size, int init_value=0);
void display_array(int *arr, size_t size);


int main() {

	int *my_arr {nullptr};
	size_t size {};
	int init_value {};

	cout << "array size? ";
	cin >> size;
	cout << "init_value? ";
	cin >> init_value;

	my_arr = create_array(size, init_value);
	display_array(my_arr, size);

	return 0;
}


// def
int *create_array(size_t size, int init_value){
	int *new_storage {nullptr};
	new_storage = new int[size];
	for (size_t i{0};i<size;++i)
		new_storage[i] = init_value;

	return new_storage;
}

void display_array(int *arr, size_t size){
	for (size_t i{}; i<size; ++i)
		cout << arr[i] << " ";
}