#include <iostream>
#include <sstream>
#include <string>
#include <iomanip>
#include <limits>

int main(){

	int num {};
	double total {};
	std::string name {};

	std::string info {"Joon 100 123.5"};
	std::istringstream iss {info};

	// extract different types of variables from a string stream
	iss >> name >> num >> total;
	std::cout << std::setw(10) << std::left << name <<
				 std::setw(10) << std::left << num <<
				 std::setw(10) << std::left << total << std::endl; //joon 100 123.5
	
	std::cout << "----------------" << std::endl << std::endl;
	
	// output string stream
	std::ostringstream oss {};
	oss << std::setfill('_') << std::setw(20) << name << std::setfill('^') << std::setw(20) << num << std::setw(20) << total;
	std::cout << oss.str() << std::endl;	

	// data validation
	int value {};
	std::string entry {};
	bool done = false;

	do {
		std::cout << "enter an integer: ";
		std::cin >> entry;
		std::istringstream validator {entry};
		if (validator >> value){ // extracting integer from string stream and if it is integer
			done = true;
		}
		else {
			std::cout << "wrong input" << std::endl;
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'n');
		}
	} while (!done);

	std::cout << "You entered an integer" << std::endl;

	return 0;
}