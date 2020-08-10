#ifndef _SAVING_H_
#define _SAVING_H_
#include "Account.h"

class Saving: public Account {
	friend std::ostream &operator<<(std::ostream &os, const Saving &rhs);
private:
	static constexpr const char *def_name="Unnamed Saving";
	static constexpr double def_balance=100;
	static constexpr double def_int_rate=1;
protected: //inherited name, balance
	double int_rate;
public:
	//cons
	Saving(std::string name=def_name, double balance=def_balance, double int_rate=def_int_rate);
	//method
	bool deposit(double amount);
};

#endif