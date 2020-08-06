#include "Checking_Account.h"

std::ostream &operator<<(std::ostream &os, const Checking_Account &obj) {
	os << "Checking Account Class" << std::endl;
	os << "\tname: " << obj.name << "\n\tbalance: " << obj.balance;
	return os;
}

Checking_Account::Checking_Account(std::string def_name, double def_balance)
	: Account::Account(def_name, def_balance) {};

bool Checking_Account::withdraw(double amount){ //$1.50 transaction
	amount += 1.50;
	return Account::withdraw(amount); 
}