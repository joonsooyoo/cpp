#ifndef _ACCOUNT_UTIL_H_
#define _ACCOUNT_UTIL_H_
#include "Account.h"
#include "Saving_Account.h"
#include <vector>

/*
Account helper functions in Account_Util.h and Account_Util.cpp make it easy to display, deposit to,
 and withdraw from a vector of Accounts and Savings Accounts.
*/

// Account Class
void display(const std::vector<Account> &accounts);
void deposit(std::vector<Account> &accounts, double amount);
void withdraw(std::vector<Account> &accounts, double amount);

// Saving Account Class
void display(const std::vector<Saving_Account> &sav_accounts);
void deposit(std::vector<Saving_Account> &accounts, double amount);
void withdraw(std::vector<Saving_Account> &accounts, double amount);

#endif