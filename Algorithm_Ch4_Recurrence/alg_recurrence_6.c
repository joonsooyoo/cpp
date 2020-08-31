#include <stdio.h>

/*
	Fibonacci using three different ways
		i. using loop
		ii. using tree recursion
		iii. using memoization
*/

int fib(int n){
	int a0 = 0, a1 = 1, s = 0;
	for (int i=2; i<=n; i++){ //obtain nth term of a: an
		s = a0 + a1;
		a0 = a1;
		a1 = s;
	}
	return s;
}

int fib2(int n){ //using tree recursion
	if (n == 0 | n == 1)
		return n;
	return fib(n-1) + fib(n-2);
}

int F[100];

int fib3(int n){ //using memoization
	
	if (n == 0 | n == 1){
		F[n] = n;
		return n;
	}
	else {
		if (F[n-2] == -1){
			F[n-2] = fib3(n-2);
		}
		if (F[n-1] == -1){
			F[n-1] = fib3(n-1);
		}
		return F[n-2] + F[n-1];
	}
}

int main(){

	int n = 5, res, res2, res3;

	char s1[100] = "Fibonacci method 1 result: ";
	char s2[100] = "Fibonacci method 2 result: ";
	char s3[100] = "Fibonacci method 3 result: ";

	for (int i=0; i<=n; ++i)
		F[i] = -1;

	res = fib(n);
	res2 = fib2(n);
	res3 = fib3(n);

	printf("%s\n", s1);
	printf("%d\n", res);

	printf("%s\n", s2);
	printf("%d\n", res2);

	printf("%s\n", s3);
	printf("%d\n", res3);

	return 0;
}