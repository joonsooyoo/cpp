#include "Account.h"


void Account::withdraw(double withdraw_val){
	if (withdraw_val > balance) {
		std::cout << "error occured, try again" <<std::endl;
	} else {
		balance -= withdraw_val;
		std::cout << "your balance is now: " << balance << std::endl;
	}
}