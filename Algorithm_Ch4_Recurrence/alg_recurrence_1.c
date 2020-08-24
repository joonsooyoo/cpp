#include <stdio.h>

/*
	Recurrence: sum of n consecutive numbers 
*/

int func1(int n){ //using formula
	return n*(n+1) / 2;
}

int func2(int n){ // using for loop
	int s=0;
	for (int i=1;i<=n;i++){
		s = s+i;
	}
	return s;
}

int func3(int n){ //using recurrence relation
	if (n==0)
		return 0;
	else 
		return func3(n-1) + n;
}

int main(){

	int n = 5;
	int res1, res2, res3 = 0;
	res1 = func1(n);
	printf("%d\n", res1);
	res2 = func2(n);
	printf("%d\n", res2);
	res3 = func3(n);
	printf("%d\n", res3);


	return 0;
}