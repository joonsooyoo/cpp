#include <iostream>

/*

INHERITANCE EXERCISE: redefining base class method

*/

class Account {
	double balance;
public:
	//cons
	Account()
		: Account{0.0} {};
	Account(double balance_val)
		: balance{balance_val} {};
	//methods
	double deposit(double amount){
		return balance += amount;
	}
	double withdraw(double amount){
		if (balance > amount)
			balance -= amount;
		else
			std::cout << "insufficient balance" << std::endl;
		return balance;
	}
	void display_balance(){
		std::cout << "balance: " << balance << std::endl;
	}
	// overloaded operator<<
	friend std::ostream &operator<<(std::ostream &os, const Account &rhs){
		os << rhs.balance;
		return os;
	}
};


int main() {

	Account joon;
	Account jae {200};

	joon.display_balance(); //0
	joon.deposit(100);
	joon.withdraw(200);//insuf-

	std::cout << joon << std::endl;

	return 0;
}