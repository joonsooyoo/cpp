#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int *p = (int *)malloc(5*sizeof(int));
	for (int i=0;i< 5; ++i){
		*(p+i) = i+1;
		printf("%d ", p[i]);
	}
	printf("\n");

	int *q = (int *)malloc(10*sizeof(int));
	for (int i=0;i<5;i++){
		*(q+i) = p[i];
	}
	printf("%u\n", p);
	free(p);
	printf("%u\n", p);
	printf("%d\n", *p); // data that p was pointing to was deleted
	p = q;
	printf("%u\n", p);
	free(q);

	return 0;
}