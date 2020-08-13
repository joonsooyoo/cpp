#include <iostream>

/*

EXCEPTION HANDLING: creating user-defined exception classes
    creating classes that is used as exceptions

*/

class DivideByZero{
};
class NegativeValue{
};

double cal_average_walk(int kilos, int days){
    double kilos_per_days {};
    if (days == 0)
        throw DivideByZero();
    if (kilos < 0 || days < 0)
        throw NegativeValue();
    kilos_per_days = static_cast<double>(kilos) / days;
    return kilos_per_days;
}

int main(){
    
    int days {};
	int kilos {};
	double kilos_per_days {};

	std::cout << "how many kilos you walked? " << std::endl;
	std::cin >> kilos;
	std::cout << "how many days? " << std::endl;
	std::cin >> days;
    
    try {
        kilos_per_days = cal_average_walk(kilos, days);
        std::cout << kilos_per_days << std::endl;
    }
    catch(DivideByZero &ex){
        std::cout << "divide by zero" << std::endl;
    }
    catch(...){
        std::cout << "unknown error" << std::endl;
    }
    std::cout << "program continues" << std::endl;

}