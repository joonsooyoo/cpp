#include <iostream>
#include <vector>
using namespace std;

/*

POINTER EXERCISE: function returning pointer

*/

// prototype
int *larger(int *int_ptr1, int *int_ptr2);

int main() {

	int num1 {10};
	int num2 {20};
	int *larger_ptr {nullptr};

	larger_ptr = larger(&num1, &num2);

	cout << "larger_ptr: " << larger_ptr << endl;
	cout << "same as &num2? where &num2: " << &num2 << endl;

	return 0;
}

// definition
int *larger(int *int_ptr1, int *int_ptr2){
	if (*int_ptr1 >= *int_ptr2)
		return int_ptr1;
	else 
		return int_ptr2;
}