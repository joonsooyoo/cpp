#include <iostream>
#include <vector>
/*

POLYMORPHISM EXERCISE: abstract class and concrete class using a different example

*/

// Abstract Class
class Shape { 
public:
		virtual void draw()=0; //pure virtual function
		virtual void rotate()=0;
	virtual ~Shape() {};
};
class Open: public Shape { // such as line
public:
	virtual ~Open() {};
};
class Closed: public Shape { // such as circle, rectangle
public:
	virtual ~Closed() {};
};

// Concrete Class
class Line final: public Open {
public:
	virtual void draw() override {
		std::cout << "Line::draw" << std::endl;
	}
	virtual void rotate() override {
		std::cout << "Line::rotate" << std::endl;
	}
	virtual ~Line() {};
};
class Circle final: public Closed {
public:
	virtual void draw() override {
		std::cout << "Circle::draw" << std::endl;
	}
	virtual void rotate() override {
		std::cout << "Circle::rotate" << std::endl;
	}
	virtual ~Circle() {};
};
class Rectangle final: public Closed {
public:
	virtual void draw() override {
		std::cout << "Rectangle::draw" << std::endl;
	}
	virtual void rotate() override {
		std::cout << "Rectangle::rotate" << std::endl;
	}
	virtual ~Rectangle() {};
};

int main() {

	// Shape *p1 = new Open; //compile error? yes... abstract class
	Shape *p1 = new Line;
	Shape *p2 = new Circle;
	Shape *p3 = new Rectangle;

	std::vector<Shape *> vec_ptrs {p1, p2, p3};
	for (auto ptr: vec_ptrs){
		ptr->draw();
		ptr->rotate();
	}

	delete p1;
	delete p2;
	delete p3;

	return 0;
}