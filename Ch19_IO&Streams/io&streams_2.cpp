#include <iostream>
#include <iomanip>

/*

STREAM MANIPULATOR EXERCISE: integer

*/

int main(){

	int num {31};

	std::cout << std::dec << num << std::endl; //31
	std::cout << std::oct << num << std::endl; //37
	std::cout << std::hex << num << std::endl; //1f

	std::cout << std::showbase;
	std::cout << std::dec << num << std::endl; //31
	std::cout << std::oct << num << std::endl; //037
	std::cout << std::hex << num << std::endl; //0x1f

	std::cout << std::noshowbase;
	std::cout << std::dec << num << std::endl; //31
	std::cout << std::oct << num << std::endl; //37
	std::cout << std::hex << num << std::endl; //1f

	std::cout << std::showbase << std::uppercase;
	std::cout << std::dec << num << std::endl; //31
	std::cout << std::oct << num << std::endl; //037
	std::cout << std::hex << num << std::endl; //0X1F

	std::cout << std::nouppercase;
	std::cout << std::hex << num << std::endl;

	int num2 {-25};

	std::cout << std::showpos;
	std::cout << std::dec << std::endl;
	std::cout << num << std::endl;
	std::cout << num2 << std::endl;

	// std::cout << std::noshowpos;
	// std::cout << std::dec << std::endl;
	// std::cout << num << std::endl;
	// std::cout << num2 << std::endl;

	std::cout << std::resetiosflags(std::ios::showpos);
	std::cout << std::dec << std::endl;
	std::cout << num << std::endl;
	std::cout << num2 << std::endl;

	return 0;
}