#include "Trust.h"

std::ostream &operator<<(std::ostream &os, const Trust &rhs) {
	os << "\tTrust" << std::endl;
	os << "name: " << rhs.name << " | balance: " << rhs.balance << " | interest rate: " << rhs.int_rate;
	std::cout << std::endl;
	return os;
}

int Trust::num_withdraw {0};

Trust::Trust(std::string name, double balance, double int_rate)
	: Saving(name, balance, int_rate) {};

bool Trust::deposit(double amount){
	if (amount>=5000) {
		amount += 50;	
	}
	return Saving::deposit(amount);
}

bool Trust::withdraw(double amount){
	if (amount > 0.2*balance){
		std::cout << "Amount Too High" << std::endl;
		return false;
	} else {
		num_withdraw++;
		return Saving::withdraw(amount);
	}
}
