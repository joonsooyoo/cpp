#include <iostream>
#include <cmath>

using namespace std;

/*

FUNCTION EXERCISE #1: using function prototypes

*/

// function prototype
double fahrenheit_to_celsius(double);
double fahrenheit_to_kelvin(double);

// main function
int main() {
	double fahrenheit_temparature {50};

	cout << fahrenheit_to_celsius(fahrenheit_temparature) << endl;
	cout << fahrenheit_to_kelvin(fahrenheit_temparature) << endl;

	return 0;
}

// function definition (full detail)
double fahrenheit_to_celsius(double temparature){
	double celsius {};
	celsius = (5.0/9.0) * (temparature - 32);
	return round(celsius);
}

double fahrenheit_to_kelvin(double temparature){
	double kelvin {};
	kelvin = (5.0/9.0) * (temparature - 32) + 273;
	return round(kelvin);
}