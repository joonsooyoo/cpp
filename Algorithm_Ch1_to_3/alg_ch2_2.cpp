#include <iostream>

class Rectangle {
private:
	int length;
	int breadth;
public:
	//cons
	Rectangle(int length, int breadth);
	//des
	~Rectangle() {};
	//method
	int area();
	void ChangeLength(int length);
	void get_area();
};

Rectangle::Rectangle(int length, int breadth)
	: length{length}, breadth{breadth} {};

int Rectangle::area(){
	return length*breadth;
}

void Rectangle::ChangeLength(int length){
	this->length = length;
}

void Rectangle::get_area(){
	std::cout << this->length << std::endl;
}

int main(){

	Rectangle r {10, 5};
	r.area();
	r.ChangeLength(7);
	r.get_area();

}