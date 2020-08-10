#ifndef _TRUST_H_
#define _TRUST_H_
#include "Saving.h"
#include <iostream>
#include <string>

class Trust final: public Saving {
	friend std::ostream &operator<<(std::ostream &os, const Trust &rhs);
private:
	static constexpr const char *def_name="Unnamed Trust";
	static constexpr double def_balance=100;
	static constexpr double def_int_rate=2;
	static int num_withdraw;
public:
	//cons
	Trust(std::string name=def_name, double balance=def_balance, double int_rate=def_int_rate);
	//method
	bool deposit(double amount);
	bool withdraw(double amount);
};

#endif