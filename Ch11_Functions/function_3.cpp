#include <iostream>
using namespace std;

/*

FUNCTION EXERCISE #3: overloading functions

*/

// prototype
int find_area(int);
double find_area(double, double);

int main() {

	int square_area {find_area(2)};
	double rectangle_area {find_area(4.5, 2.3)};

	cout << "square_area is " << square_area << endl;
	cout << "rectangle_area is " << rectangle_area << endl;

	return 0;
}

// definition
int find_area(int side_length){
	// find area of a square
	return side_length*side_length;
}
double find_area(double length, double width){
	// find area of a rectangle
	return length*width;
}