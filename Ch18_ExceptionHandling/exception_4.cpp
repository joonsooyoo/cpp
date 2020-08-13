#include <iostream>

/*

EXCEPTION HANDLING: stack unwinding and exception handling
	how stack unwinding occurs during exception handling
		important because of resource management 

*/

void function_a();
void function_b();
void function_c();

int main(){

	/* case 1 */
	// function_a();
	
	/* case 2 */
	try {
		function_a();
	}
	catch(int &ex){
		std::cerr << "error caught" << std::endl;
	}

	return 0;
}

void function_a(){
	std::cout << "function_a: start" << std::endl;
	function_b();
	std::cout << "function_a: end" << std::endl;
}
void function_b(){
	std::cout << "function_b: start" << std::endl;
	throw 0;
	function_c();
	std::cout << "function_b: end" << std::endl;
}
void function_c(){
	std::cout << "function_c: start" << std::endl;	
	// try {
	// 	std::cout << "function_c: start" << std::endl;	
	// 	throw 0;
	// }	
	// catch(int &ex){
	// 	std::cerr << "error caught in function c" << std::endl;
	// }
	std::cout << "function_c: end" << std::endl;
	
}
