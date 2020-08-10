#include "Saving.h"

std::ostream &operator<<(std::ostream &os, const Saving &rhs) {
	os << "\tSaving" << std::endl;
	os << "name: " << rhs.name << " | balance: " << rhs.balance << " | interest rate: " << rhs.int_rate;
	std::cout << std::endl;
	return os;
}

Saving::Saving(std::string name, double balance, double int_rate)
	: Account(name, balance), int_rate{int_rate} {};

bool Saving::deposit(double amount) {
	amount += amount * (int_rate / 100);
	return Account::deposit(amount);
}