#include <iostream> 
#include <fstream> // file stream
#include <string>

/*

STREAM MANIPULATOR EXERCISE: reading from a text file (version 1)

*/

int main(){

	//// creating a fstream obj that we will read
	std::fstream in_file {"some_text.txt"};
	std::string line;
	int num;
	double double_num;

	//// load a file
	if (!in_file){ //not opening
		std::cerr << "File Not Opening Error" << std::endl;
		return -1; // program terminates
	}
	// std::cout << "File is Opened" << std::endl << std::endl;
	
	//// read text file
	in_file >> line >> num >> double_num; 
	
	std::cout << line << std::endl; //this (terminates when it sees a space)
	std::cout << num << std::endl;
	std::cout << double_num << std::endl;

	// close the file
	in_file.close();

	return 0;
}