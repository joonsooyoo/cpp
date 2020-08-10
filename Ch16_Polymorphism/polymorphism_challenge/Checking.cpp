#include "Checking.h"

std::ostream &operator<<(std::ostream &os, const Checking &rhs){
	os << "\tChecking" << std::endl;
	os << "name: " << rhs.name << " | balance: " << rhs.balance;
	std::cout << std::endl;
	return os;	
}

Checking::Checking(std::string name, double balance)
	: Account(name, balance) {};

bool Checking::withdraw(double amount){
	amount += 1.50;
	return Account::withdraw(amount);
}