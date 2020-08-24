#include <iostream>

/*

review of c++ object oriented programming

*/

class Rectangle{
private:
	int length;
	int breadth;
public:
	//cons
	Rectangle(int length=1, int breadth=1);
	//getter&setter
	int get_length();
	int set_length(int length);
	//facilitator
	int area();
	int perimeter();
	//des
	~Rectangle() {};
};

Rectangle::Rectangle(int length, int breadth)
	: length{length}, breadth{breadth} {};

int Rectangle::get_length(){
	return length;
}

int Rectangle::set_length(int length){
	this->length=length;
	return this->length;
}

int Rectangle::area(){
	return length*breadth;
}

int Rectangle::perimeter(){
	return 2*(length+breadth);
}


int main(){

	Rectangle r {10, 5};
	std::cout << r.get_length() << std::endl; //10
	std::cout << r.area() << std::endl; //50
	std::cout << r.perimeter() << std::endl; //30
	r.set_length(20);
	std::cout << r.get_length() << std::endl; //20
	

	return 0;
}