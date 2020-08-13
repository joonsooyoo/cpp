#include <iostream>

/*

EXCEPTION HANDLING EXERCISE: throwing an exception from a function

*/

double cal_average(int income, int days) {
	if (days==0)
		throw 0;
	return static_cast<double>(income) / days;
}

int main(){

	int income {};
	int days {};
	double income_per_days {};

	std::cout << "enter income: " << std::endl;
	std::cin >> income;
	std::cout << "enter days (month): " << std::endl;
	std::cin >> days;
	
	// try {
	// 	if (days==0)
	// 		throw 0;
	// 	income_per_days = static_cast<double>(income) / days;
	// 	std::cout << "income_per_days: " << income_per_days << std::endl;	
	// } 
	// catch(int &ex){
	// 	std::cerr << "days is valued: " << ex << std::endl;
	// 	std::cerr << "wrong input" << std::endl;
	// }
	// std::cout << "program continues" << std::endl;

	try {
		income_per_days = cal_average(income, days);
		std::cout << "income_per_days: " << income_per_days << std::endl;
	}
	catch(int &ex){
		std::cerr << "error detected" << std::endl;
	}
	std::cout << "program continues" << std::endl;
	

	return 0;
}