#include <iostream>
#include <string>
#include <vector>
#include "Account.h"
#include "Saving_Account.h"
#include "Account_Util.h"
#include "Checking_Account.h"
#include "Trust_Account.h"

/*

INHERITANCE CHALLENGE: build account classes of inheritance

*/

int main() {

	// Account and Saving Account
	Account joon;
	std::cout << joon << std::endl;
	Account jae {"Jae", 100};
	std::cout << jae << std::endl;
	Saving_Account bin {"Bin", 50, 5};
	std::cout << bin << std::endl;
	Saving_Account dt {"Chan"};
	std::cout << dt << std::endl;
	std::cout << "\n---------------------------\n" << std::endl;

	// vector <Account>
	std::vector <Account> accounts {joon};
	accounts.push_back(jae);
	accounts.push_back(bin); //note that bin and dt are Saving Account class
	accounts.push_back(dt);

	display(accounts); // shows only account part of bin and dt
	std::cout << "\n---------------------------\n" << std::endl;
	deposit(accounts, 50);
	withdraw(accounts, 30);

	// vector <Saving Account>
	std::vector <Saving_Account> sav_accounts {bin};
	sav_accounts.push_back(dt);

	display(sav_accounts);
	deposit(sav_accounts, 50);
	withdraw(sav_accounts, 30);

	// Checking Account
	Checking_Account hyo {"Hyo", 100};
	std::cout << hyo << std::endl; //hyo.name, hyo.balance: 100
	hyo.withdraw(50);
	std::cout << hyo << std::endl; //hyo.name, hyo.balance: 48.5

	// Trust Account
	Trust_Account song {"Song"};
	std::cout << song << std::endl;
	song.deposit(5000);
	std::cout << song << std::endl;
	song.withdraw(500);
	std::cout << song << std::endl;

	return 0;
}

