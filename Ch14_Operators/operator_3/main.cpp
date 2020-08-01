#include <iostream>
#include "Mystring.h"
/* 

OPERATOR EXERCISE: building header files for practice

*/

int main() {

	Mystring a {"hello"};
	std::cout << a.get_string() << std::endl; //hello

	Mystring b;
	std::cout << b.get_string() << std::endl; //null
	b = a;
	std::cout << b.get_string() << std::endl; //hello
	
	return 0;
}