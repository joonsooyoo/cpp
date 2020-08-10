#include "Account.h"

std::ostream &operator<<(std::ostream &os, const Account &rhs) {
	os << "\tAccount" << std::endl;
	os << "name: " << rhs.name << " | balance: " << rhs.balance;
	std::cout << std::endl;
	return os;
}

Account::Account(std::string name, double balance)
	: name{name}, balance{balance} {};

bool Account::deposit(double amount) {
	if (amount < 0) {
		std::cout << "Wrong Amount" << std::endl;
		return false;
	} else {
		balance += amount;
		return true;
	}
}

bool Account::withdraw(double amount) {
	if (amount > balance) {
		std::cout << "Wrong Amount" << std::endl;
		return false;
	}	else {
		balance -= amount;
		return true;
	}
}