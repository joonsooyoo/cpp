#include "Account_Util.h"

// Account
void display(const std::vector<Account> &accounts){
	for (auto account: accounts)
		std::cout << account << std::endl;
}
void deposit(std::vector<Account> &accounts, double amount){
	if (amount < 0)
		std::cout << "wrong input" << std::endl;
	else {
		for (auto &account: accounts)
			account.deposit(amount);
	}	
}
void withdraw(std::vector<Account> &accounts, double amount) {
	for (auto &account: accounts) {
		if (account.withdraw(amount)==true)
			std::cout << account << " withdrew" << std::endl;
		else {
			std::cout << account << " insufficient fund" << std::endl;
		}
	}	
}

// Saving Account
void display(const std::vector<Saving_Account> &sav_accounts){
	for (auto sav_account: sav_accounts)
		std::cout << sav_account << std::endl;
}
void deposit(std::vector<Saving_Account> &accounts, double amount){
	if (amount < 0)
		std::cout << "wrong input" << std::endl;
	else {
		for (auto &account: accounts)
			account.deposit(amount);
	}	
}
void withdraw(std::vector<Saving_Account> &accounts, double amount) {
	for (auto &account: accounts) {
		if (account.withdraw(amount)==true)
			std::cout << account << " withdrew" << std::endl;
		else {
			std::cout << account << " insufficient fund" << std::endl;
		}
	}	
}