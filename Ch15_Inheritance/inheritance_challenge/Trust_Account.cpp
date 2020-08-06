#include "Trust_Account.h"

int Trust_Account::num_withdrawl {0};

std::ostream &operator<<(std::ostream &os, const Trust_Account &rhs){
	os << "Trust Account" << std::endl;
	os << "\tname: " << rhs.name << std::endl;
	os << "\tbalance: " << rhs.balance << std::endl;
	os << "\tint_rate: " << rhs.int_rate << std::endl;
	return os;
}

Trust_Account::Trust_Account(std::string name, double balance, double int_rate)
	: Saving_Account::Saving_Account(name, balance, int_rate) {std::cout << "created" << std::endl;}

bool Trust_Account::deposit(double amount) {
	if (amount >= 5000)
		amount += 50;
	return Saving_Account::deposit(amount);
}

bool Trust_Account::withdraw(double amount) {
	if (num_withdrawl>3)
		return false;
	else {
		++num_withdrawl;
		if (amount >= 0.2*balance)
			return false;
		else {
			Account::withdraw(amount);
			return true;
		}	
	}
}

// The Trust account withdrawal should only allow 3 withdrawals per year and each of these must be less than 20% of the account balance.
// You don't have to keep track of calendar time for this application, just make sure the 4th withdrawal fails :)
