#include <iostream>
#include <iomanip>

/*

STREAM MANIPULATOR EXERCISE: floating point number

*/

int main(){
	
	double num1 {1.323};
	double num2 {1.323454};
	double num3 {1.32345678};

	std::cout << num1 << std::endl;
	std::cout << num2 << std::endl;
	std::cout << num3 << std::endl;	
// 1.323
// 1.32345
// 1.32346

	std::cout << std::setprecision(9);
	std::cout << num1 << std::endl;
	std::cout << num2 << std::endl;
	std::cout << num3 << std::endl;

// 1.323
// 1.323454
// 1.32345678

	std::cout << std::fixed;
	std::cout << num1 << std::endl;
	std::cout << num2 << std::endl;
	std::cout << num3 << std::endl;

// 1.323000000
// 1.323454000
// 1.323456780

	std::cout << "-------------------" << std::endl;
	std::cout << std::setprecision(5) << std::scientific;

	double num4 {12345678.912345};
	std::cout << num4 << std::endl;

	std::cout << "-------------------" << std::endl;
	std::cout << std::resetiosflags(std::ios::fixed);
	std::cout << std::setprecision(6) << std::fixed << std::scientific << std::showpos
		<< std::uppercase << std::showbase;
	std::cout << num4 << std::endl; 

	std::cout << "-------------------" << std::endl;
	std::cout << std::setprecision(6); /////by default 6
	std::cout << std::resetiosflags(std::ios::showpos);
	std::cout << std::resetiosflags(std::ios::uppercase);
	std::cout << std::resetiosflags(std::ios::scientific);
	std::cout << std::resetiosflags(std::ios::fixed);

	double num5 {1.53};
	std::cout << num5 << std::endl; //1.53
	std::cout << std::showpoint;
	std::cout << num5 << std::endl; //1.53000
	std::cout.unsetf(std::ios::showpoint); 
	std::cout << num5 << std::endl; //1.53


	return 0;
}