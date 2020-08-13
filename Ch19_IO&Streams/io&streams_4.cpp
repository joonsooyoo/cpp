#include <iostream>
#include <iomanip>
#include <string>

/*

STREAM MANIPULATOR EXERCISE: use aligning and fill

*/

int main(){


	double num {3.141592};
	std::string name {"joon"};

	// std::cout << num << name << std::endl;

	// std::cout << num << std::setw(10) << name << std::endl;
	// std::cout << num << std::setw(50) << name << std::endl; 

	std::cout << std::setw(10) << name << std::endl; 
	std::cout << std::setw(15) << std::right << name << std::endl;
	// std::cout << std::left << std::setw(10) << num << name << std::endl;

	return 0;
}