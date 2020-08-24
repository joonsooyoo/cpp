#include <stdio.h>

/*
	Recurrence: power a**n
*/

int power(int a, int n){
	if (n == 0)
		return 1;
	if (n%2 == 0)
		return power(a*a, n/2);
	else
		return a*power(a, n-1);
}

int power2(int a, int n){
	int res=1;
	while (n>0){
		res *= a;
		n--;
	}
	return res;
}

int power3(int a, int n){
	if (n==0)
		return 1;
	return a*power3(a, n-1);
}

int main(){

	int a = 2;
	int n = 9;
	int res, res2, res3 = 0;

	printf("%d\n", power(a, n)); // 2**9=512
	printf("%d\n", power2(a, n)); // 2**9=512
	printf("%d\n", power3(a, n)); // 2**9=512


	return 0;
}