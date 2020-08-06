#include <iostream>
#include <string>

/*

INHERITANCE EXERCISE: create own inheritance

*/

using namespace std;

class Animal {
private:
	string name;
	int eyes_num;
public:
	//cons
	Animal()
		: name {"undefined"}, eyes_num {2} {
			cout << "#a0" << endl;
			cout << "\tname: " << name << std::endl;
			cout << "\teyes_num: " << eyes_num << endl;
			cout << endl;
		}
	Animal(string num_val)
		: name {num_val}, eyes_num {2} {
			cout << "#a1" << endl;
			cout << "\tname: " << name << std::endl;
			cout << "\teyes_num: " << eyes_num << endl;
			cout << endl;
		}
	Animal(string num_val, int eyes_val)
		: name {num_val}, eyes_num{eyes_val} {
			cout << "#a2" << endl;
			cout << "\tname: " << name << std::endl;
			cout << "\teyes_num: " << eyes_num << endl;
			cout << endl;
		}
	//methods
	void show_private_attributes() {
		cout <<	"Accessing Private Attributes" << endl;
		cout << "\tname: " << name << endl;
		cout << "\teyes_num: " << eyes_num << endl;
	}

};

class Dog: public Animal { 
	// using Animal::Animal;
private:
	string color {"undefined"}; //specialization
public: 
	Dog() {
		cout << "#d0" << endl;
		// cout << "\tname: " << name << std::endl;
		// cout << "\teyes_num: " << eyes_num << endl;
		cout << "\tname and eyes_num: private" << endl;
		cout << "\tcolor: " << color << endl;
		cout << endl;		
	}
	Dog(string color_val) 
		: color {color_val} {
		cout << "#d1" << endl;
		cout << "\tcolor: " << color << endl;
	}
	//methods
	void show_dog_private_att() {
		cout <<	"Accessing Dog Private Attribute" << endl;
		cout << "\tcolor: " << color << endl;
	}


};

int main() {

	Animal x0; //#a0
	Animal x1 {"John"}; //#a1
	Animal x2 {"Joe", 4}; //#a2
	x2.show_private_attributes(); //using class member method to access private data
	cout << "---------------------------------------------------------\n" << endl;

	Dog y0; //no-arg cons -> #a0
	y0.show_private_attributes();
	Dog y1 {"brown"}; 
	y1.show_private_attributes();

	// Dog dog {"doggy", 3}; // using animal constructor
	// dog.show_dog_private_att();

	return 0;

}