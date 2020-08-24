#include <stdio.h>

/*
	recursion using static and global variables
*/

int y = 0; // declaring a global variable;

int func1(int n){ //control group
	// expects 1+2+3+4+5 = 15
	if (n > 0)
	{
		return func1(n-1) + n;
	}
	return 0;
}

int func2(int n){
	static int x=0; // this creates a single variable in the code section, not in "stack"
	y++;
	if (n > 0){
		++x;
		return func2(n-1) + x;
	}
	return 0;
}


int main(){

	int a;
	// a = func1(5); //15
	a = func2(5); //25
	printf("%d ", a);
	printf("%d ", y); //6

	return 0;

}