#include <iostream>

/*

INHERITANCE EXERCISE: copy/move constructor and overloading operator

*/

class Animal {
	int eye_num;
public:
	//cons
	Animal()
		 : eye_num{2} {
		 	std::cout << "no-arg cons" << std::endl;
		 }
	Animal(int eye_num_val)
		: eye_num{eye_num_val} {
			// std::cout << "1-arg cons" << std::endl;
		};
	//des
	~Animal() {};
	//copy cons
	Animal(const Animal &source)
		: eye_num{source.eye_num} {
			// std::cout << "copy cons" << std::endl;
		};
	//operator=
	Animal operator=(const Animal &rhs){ // s1.operator=(s2)
		if (this != &rhs){
			this->eye_num = rhs.eye_num;
		}
		std::cout << "Animal::operator= called" << std::endl;
		return *this;
	}
	//method
	void display_private_access_class_member_animal() {std::cout << eye_num << std::endl;}
};

class Dog: public Animal {
	std::string color;
public:
	//cons
	Dog()
		: Animal(), color{"white"} {
			display_private_access_class_member_animal();
		}
	Dog(std::string color_val)
		: color{color_val} {
			std::cout << "1-arg cons: Dog" << std::endl;
		}
	//copy cons
	Dog(const Dog &source)
		: Animal(source), color{source.color} {
			std::cout << "copy cons for Dog" << std::endl;
		}
	//operator=
	Dog &operator=(const Dog &rhs){ //s1.operator=(s2)
		if (this != &rhs){
			Animal::operator=(rhs);
			color = rhs.color;
		}
		std::cout << "Dog::operator= called" << std::endl;
		return *this;
	}

	//method
	void display_private_access_class_member_dog() {std::cout << color << std::endl;}

};

int main() {

	Animal iguana;
	Animal spider {4};
	iguana.display_private_access_class_member_animal(); //2
	spider.display_private_access_class_member_animal(); //4

	//copy cons for iguana
	Animal snake {iguana};

	//operator=
	iguana = spider;
	iguana.display_private_access_class_member_animal(); //4

	//derived class
	Dog spaniel; //2
	Dog sitchu {"brown"}; //no-arg for animal, 1-arg cons for dog
	std::cout << "-------------------------" << std::endl;
	Dog maltese {sitchu};
	std::cout << "-------------------------" << std::endl;
	maltese = spaniel;



	return 0;
}
