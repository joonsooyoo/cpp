#include <iostream>

/*

EXCEPTION HANDLING EXERCISE: try, throw and catch
	simple division example

*/

int main(){

	double total {};
	double sum {};
	double average {};

	std::cout << "Enter total and sum, separated by space" << std::endl;
	std::cin >> total;
	std::cin >> sum;

	// average = total / sum
	try {
		if (total==0)
			throw 0;
		average=total/sum; // does not execute if an exception calls
	}
	catch (int &ex) {
		std::cout << "cannot divide by zero" << std::endl;
	}
	std::cout << "program continues" << std::endl;


	return 0;
}