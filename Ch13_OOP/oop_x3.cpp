/*

OOP EXERCISE: deep copy

*/

#include <iostream>

class Deep {
private:
	int *data;
public:
	//method
	int get_data_value() {return *data;}
	void set_data_value(int d) {*data = d;}
	//constructor
	Deep(int d) {
		data = new int;
		*data = d;
	}
	////////////copy constructor

	// Deep(const Deep &source) {
	// 	// data = source.data;
	// 	data = new int;
	// 	*data = *source.data;
	// }
	
	Deep(const Deep &source)
		: Deep(*source.data) {};

	//destructor
	~Deep() {
		delete data;
	}

};

void display_deep(Deep s) {
	std::cout << s.get_data_value() << std::endl;
}

int main() {

	Deep obj1 {100};
	display_deep(obj1);

	Deep obj2 {obj1};
	obj2.set_data_value(1000);

	display_deep(obj1); // in shallow: 1000, but in deep: 100
	display_deep(obj2); // 1000

	return 0;
}
