#include "Saving_Account.h"

std::ostream &operator<<(std::ostream &os, const Saving_Account &rhs){
	os << "Saving Account Class" << std::endl;
	os << "\tname: " << rhs.name << "\n\tbalance: " << rhs.balance << "\n\tinterest rate: " << rhs.int_rate;
	return os;
}

Saving_Account::Saving_Account(std::string name, double balance, double int_rate)
	: Account(name, balance), int_rate{int_rate} {};

bool Saving_Account::deposit(double amount) {
	amount += amount * (int_rate/100);
	return Account::deposit(amount);
}