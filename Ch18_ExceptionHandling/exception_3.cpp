#include <iostream>
#include <string>

/*

EXCEPTION HANDLING EXERCISE: throwing multiple exceptions from a function

*/

double cal_average_walk(int kilos, int days);

int main(){

	int days {};
	int kilos {};
	int kilos_per_days {};

	std::cout << "how many kilos you walked? " << std::endl;
	std::cin >> kilos;
	std::cout << "how many days? " << std::endl;
	std::cin >> days;
	
	try {
		kilos_per_days = cal_average_walk(kilos, days);
		std::cout << "your average walk per day: " << std::endl;
	}
	catch(int &ex){
		std::cerr << "divided by zero" << std::endl;
	}
	catch(std::string &ex){
		std::cerr << ex << std::endl;
	}
	catch(...){
		std::cerr << "unknown error" << std::endl;
	}

	return 0;
}

double cal_average_walk(int kilos, int days){
	if (days == 0)
		throw 0;
	if (kilos < 0 || days < 0)
		throw std::string {"input: negative value"};
	return static_cast<double>(kilos) / days;
}