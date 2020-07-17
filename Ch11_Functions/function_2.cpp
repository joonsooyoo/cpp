#include <iostream>
using namespace std;

/* 

FUNCTION EXERCISE #2: using default argument values

*/

// function prototype
void print_grocery_list(int apples=3, int oranges=7, int mangos=13);


int main(){

	print_grocery_list();
	print_grocery_list(5);
	print_grocery_list(7,11);
	
	return 0;
}

// function definition
void print_grocery_list(int mangos, int apples, int oranges){
	cout << apples << " apples" << "\n" << oranges << " oranges" << "\n" << mangos << " mangos" << "\n";
}
