/*

OOP EXERCISE: moving constructor

*/

#include <iostream>
#include <vector>

class Move {
private:
	//member
	double *data;
public:
	//method
	double get_data_value() {return *data;}
	void set_data_value(double num){*data = num;}
	//constructor
	Move(double num){
		data = new double;
		*data = num;
		std::cout << "constructor activated" << std::endl;
	}
	//copy constructor
	Move(const Move &source) //deep copy
		: Move(*source.data) {std::cout << "copy constructor activated" << std::endl;}
	//move constructor
	Move(Move &&source)
		: data{source.data} {
			source.data = nullptr;
		}
	//destructor
	~Move() {
		delete data;
		std::cout << "destructor activated" << std::endl;
	}
};

int main() {

	std::vector <Move> v {};

	v.push_back(Move(10));

	return 0;

}