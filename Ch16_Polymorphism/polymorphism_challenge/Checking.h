#ifndef _CHECKING_H_
#define _CHECKING_H_
#include "Account.h"

class Checking: public Account {
	friend std::ostream &operator<<(std::ostream &os, const Checking &rhs);
private:
	static constexpr const char *def_name="Unnamed Checking";
	static constexpr double def_balance=100;
public:
	//cons
	Checking(std::string name=def_name, double balance=def_balance);
	//method
	bool withdraw(double amount);
};

#endif