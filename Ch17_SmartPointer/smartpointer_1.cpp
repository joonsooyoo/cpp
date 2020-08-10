#include <iostream>
#include <memory> //for smart pointer
#include <vector>

/*

SMARTPOINTER EXERCISE: basic declaration; unique pointer ... shared pointer and weak pointer
	unique pointer: 1-1 ownership(pointer and data that is pointed by)
		means that for data that is deallocated on the heap is pointed by one and only the pointer
			smart pointer is an object and we use it similarly with vectors

*/

class Account {
public:
	void deposit(){
		std::cout << "Deposit" << std::endl;
	} 
	void withdraw(){
		std::cout << "Withdraw" << std::endl;
	}
};

int main() {

	std::unique_ptr<int> p1 {new int {10}};

	std::cout << *p1 << std::endl; //100
	*p1 = 200;
	std::cout << *p1 << std::endl; //200
	std::cout << p1.get() << std::endl; //returns p1 value
	//frees the storage of an object that is managed by p1 
	p1.reset(); 
	// std::cout << *p1 << std::endl;
	std::cout << p1.get() << std::endl; //nullptr

	std::unique_ptr<double> p2 {new double {20.2}};

	std::cout << *p2 << std::endl; //20.2
	if (p2)
		std::cout << p2.get() << std::endl; //returns p2 value

	std::unique_ptr<Account> p3 {new Account};
	p3->deposit(); //Despoit
	p3->withdraw(); //Withdraw

	std::vector<std::unique_ptr<double>> v;
	// v.push_back(p2); //compiler error(no copy)
	v.push_back(std::move(p2));
	std::cout << *v.at(0) << std::endl; //20.2

	std::unique_ptr<int> p4 = make_unique<int>(100);
	std::unique_ptr<double> p5 = make_unique<double>(100.2);

	std::cout << *p4 << std::endl;//100
	std::cout << *p5 << std::endl;//100.2

	return 0;
}