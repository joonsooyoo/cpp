#include <stdio.h>

int power(int x, int n){
	if (n==0)
		return 1;
	if (n%2 == 0)
		return power(x*x, n/2);
	else
		return x*power(x, (n-1)/2);
}

int fac(int n){
	if (n==0)
		return 1;
	else
		return n*fac(n-1);
}

double taylor_seq(int x, int n){
	return (double)power(x, n) / fac(n);
}

double taylor_series(int x, int n){
	if (n==0)
		return 1;
	return taylor_series(x, n-1) + taylor_seq(x, n);
}

int main(){
	
	int x = 3;
	int n = 5;
	double res;

	res = taylor_series(x, n);
	printf("%f", res);
	
	return 0;
}