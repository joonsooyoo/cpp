#include "Account.h"


std::ostream &operator<<(std::ostream &os, const Account &rhs){
	os << "Account Class" << std::endl;
	os << "\tname: " << rhs.name << "\n\tbalance: " << rhs.balance;
	return os;
}

Account::Account(std::string name, double balance)
	: name{name}, balance{balance} {};

bool Account::deposit(double amount){
	if (amount < 0)
		return false;
	else {
		balance += amount;
		return true;
	}
}

bool Account::withdraw(double amount) {
	if (amount > balance)
		return false;
	else {
		balance -= amount;
		return true;
	}
}