#include <iostream>
#include <iomanip> // iomanipulator

/*

STREAM MANIPULATOR EXERCISE: boolean
	std: namespace - we are only using names that are in standard librar template

*/

int main(){

	//using manipulator: more common use case
	std::cout << (10 == 20) << std::endl; //0
	std::cout << std::boolalpha; 
	std::cout << (10 == 20) << std::endl; //false
	std::cout << (10 == 20) << std::endl; //false

	std::cout << std::noboolalpha;
	std::cout << (10 == 20) << std::endl; //0

	//using method
	std::cout.setf(std::ios::boolalpha);
	std::cout << (10 == 20) << std::endl; //false

	std::cout << resetiosflags(std::ios::boolalpha);
	std::cout << (10 == 20) << std::endl; //0

	return 0;
}