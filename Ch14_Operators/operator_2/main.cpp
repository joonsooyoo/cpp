#include <iostream>
#include "Mystring.h"
/* 

OPERATOR EXERCISE: building header files for practice

*/

int main() {

	Mystring mys {"joon"};
	std::cout << mys.get_string() << std::endl;

	Mystring mys2 {mys};
	std::cout << mys2.get_string() << std::endl;


	return 0;
}