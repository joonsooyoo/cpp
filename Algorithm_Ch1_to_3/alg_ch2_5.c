#include <stdio.h>

/*
	RECURSION:
		tail recursion and head recursion
			ascending and descending
				Time complexity: O(n) 
					with recurrence relation T(n) = T(n-1) + 2
*/ 

void func(int n){

	if (n>0)
	{
		printf("%d ", n); //recursion (ascending stack)
		func(n-1);
	}
	
}

int main(){
	int x = 3;
	
	func(x); // returns 3, 2, 1

	return 0;
}