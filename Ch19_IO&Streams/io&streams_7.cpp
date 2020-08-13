#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>

int main(){

	// declaring fstream class object -> file object
	std::fstream file {"poem_text.txt"};
	std::string line;

	// check if file is opened
	if (!file){
		std::cerr << "error message" << std::endl;
		return -1; //program terminates
	}

	/* METHOD 1: using formatted way */

	// // read file
	// while (!file.eof()){
	// 	std::getline(file, line);
	// 	std::cout << line << std::endl;
	// }
	
	/* METHOD 2: unformatted way - read by characters each */

	char c;
	while (file.get(c)){
		std::cout << c;
	}
	std::cout << std::endl;

	// file close
	file.close();


	return 0;
}