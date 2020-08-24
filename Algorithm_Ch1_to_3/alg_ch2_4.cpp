#include <iostream>

/*

using generic programmings

*/

template <class T>
class Rectangle{
private:
	T length;
	T breadth;
public:
	//cons
	Rectangle(T length=1, T breadth=1);
	//getter&setter
	T get_length();
	T set_length(T length);
	//facilitator
	T area();
	T perimeter();
	//des
	~Rectangle() {};
};

template <class T>
Rectangle<T>::Rectangle(T length, T breadth)
	: length{length}, breadth{breadth} {};

template <class T>
T Rectangle<T>::get_length(){
	return length;
}

template <class T>
T Rectangle<T>::set_length(T length){
	this->length=length;
	return this->length;
}

template <class T>
T Rectangle<T>::area(){
	return length*breadth;
}

template <class T>
T Rectangle<T>::perimeter(){
	return 2*(length+breadth);
}


int main(){

	Rectangle<int> r {10, 5};
	std::cout << r.get_length() << std::endl; //10
	std::cout << r.area() << std::endl; //50
	std::cout << r.perimeter() << std::endl; //30
	r.set_length(20);
	std::cout << r.get_length() << std::endl << std::endl; //20

	Rectangle<double> r2 {5.2, 3.7};
	std::cout << r2.get_length() << std::endl; 
	std::cout << r2.area() << std::endl; 
	std::cout << r2.perimeter() << std::endl; 
	r2.set_length(7.8);
	std::cout << r2.get_length() << std::endl;
	
	return 0;
}