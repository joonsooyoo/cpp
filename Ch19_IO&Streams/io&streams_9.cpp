#include <iostream>
#include <fstream>
#include <string>

int main(){

	// open a file
	std::ofstream file_out {"out_file.txt"};
	if (!file_out){
		std::cerr << "file opening error" << std::endl;
	}
	
	// get input from the user
	std::string line {};

	std::cout << "Write to a file: ";
	std::getline(std::cin, line);

	file_out << line << std::endl;

	file_out.close();

	// write on the file
	
	return 0;
}