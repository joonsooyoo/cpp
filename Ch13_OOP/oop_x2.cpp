/*

OOP EXERCISE: shallow copy

*/

#include <iostream>

class Shallow {
private:
	int *data;
public:
	void get_addr_value() {std::cout << "get_addr_value: " << data << std::endl;}
	int get_data_value() {return *data;}
	void set_data_value(int d) {*data = d; std::cout << "setting data value to " << d << std::endl;}

	Shallow(int d){ //constructor
		data = new int;
		*data = d;
		std::cout << "constructor called" << std::endl;
		std::cout << "\tdata: " << data << std::endl;
		std::cout << "\t*data: " << *data << std::endl;
	}
	Shallow(const Shallow &source)
		: data{source.data} { //copy constructor
			std::cout << "copy constructor" << std::endl;
			
		}
	~Shallow() {//destructor
		delete data;
		std::cout << "delete data storage" << std::endl;
		
	}
};

void display_shallow(Shallow s) {
	std::cout << "displayed data value: " << s.get_data_value() << std::endl;
}
void display_hor_line() {std::cout << "------------------------" << std::endl;}

int main() {

	Shallow obj1 {100};
	display_hor_line();

	display_shallow(obj1);
	display_hor_line();
	
	Shallow obj2 {obj1};
	obj2.get_addr_value();

	display_hor_line();

	obj2.set_data_value(1000);
	display_shallow(obj1);

	return 0;

}