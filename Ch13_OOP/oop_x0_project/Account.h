#ifndef _ACCOUNT_H_
#define _ACCOUNT_H_
#include <string>
#include <iostream>

struct Account {
	std::string name;
	double balance;

	void withdraw(double withdraw_val);
};

#endif