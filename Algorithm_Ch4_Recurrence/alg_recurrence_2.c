#include <stdio.h>

/* construct factorial using recurrence relation */

int fac(int n){ //factorial with recurrence :: O(n) for time complexity 
				// as well as space complexity
	if (n==1)
		return 1;
	else
		return n*fac(n-1);
}

int fac2(int n){ //using while loop
	int s = 1;
	while (n != 1){
		n--;
		s = s*n;
	}
	return s;
}

int main(){

	int n = 5;
	int res1, res2 = 0;

	res1 = fac(5);
	printf("%d ", res1);

	res2 = fac(5);
	printf("%d ", res2);


	return 0;
}