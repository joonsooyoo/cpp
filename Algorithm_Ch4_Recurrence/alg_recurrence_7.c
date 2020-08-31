#include <stdio.h>

/*
	Recurrence Relation of combinatorics
*/

int fact(int n){
	if (n==0)
		return 1;
	return fact(n-1)*n;
}

int nCr(int n, int r){ // n! / (n-r)!r!
	int t0, t1, t2;
	t0 = fact(n);
	t1 = fact(r);
	t2 = fact(n-r);
	return t0 / (t1*t2);
}

int RnCr(int n, int r){
	if (r==0 || n==r)
		return 1;
	return RnCr(n-1, r-1) + RnCr(n-1, r);
}

int main(){
	// c1 is using formula for combinatorics
	printf("%d\n", nCr(5,2)); //10
	// c2 is using recurrence relation
	printf("%d\n", RnCr(5,2)); //10

	return 0;
}