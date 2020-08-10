#ifndef _ACCOUNT_H_
#define _ACCOUNT_H_
#include <iostream>
#include <string>

class Account {
	friend std::ostream &operator<<(std::ostream &os, const Account &rhs);
private:
	static constexpr const char *def_name="Unnamed Account";
	static constexpr double def_balance=100;
protected:
	std::string name;
	double balance;
public:
	//cons
	Account(std::string name=def_name, double balance=def_balance);
	//des
	~Account() {};
	//methods
	bool deposit(double amount);
	bool withdraw(double amount);

};

#endif