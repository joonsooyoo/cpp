#include <iostream>
#include <string>
#include <memory>

/*

EXCEPTION HANDLING: Class level exception
	in class, we can put exception at a member function, constructor, and etc
		however, it is important not to put exception at destructor which will cause error

*/

class Account {
	friend std::ostream &operator<<(std::ostream &os, const Account &rhs);
protected:
	std::string name;
	double balance;
public:
	Account(std::string name, double balance)
		: name{name}, balance{balance} {
			if (balance < 0)
				throw 0;
			std::cout << "Account Constructor Called for " << name << std::endl;
		}
	~Account() {};
};

std::ostream &operator<<(std::ostream &os, const Account &rhs){
	os << "name: " << rhs.name;
	return os;
}

int main(){

	try {
		std::unique_ptr<Account> p = std::make_unique<Account>("Joon", 100);
		std::cout << *p << std::endl;

		std::unique_ptr<Account> p2 {new Account {"Jang", -5}};
		std::cout << *p2 << std::endl;	
	}
	catch(int &ex){
		std::cerr << "error detected" << std::endl;
	}

	return 0;
}