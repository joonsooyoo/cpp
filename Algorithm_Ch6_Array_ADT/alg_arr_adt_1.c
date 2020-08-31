#include "stdio.h"
#include "stdlib.h"

/*
	ADT exercise part1
		display elements of an array on the heap
*/

struct Array {
	int *A;
	int size;
	int length;
};

void display(struct Array arr){
	for(int i=0;i<arr.length;i++){
		printf("%d ", arr.A[i]);
	}
}

int main(){

	struct Array arr;
	int n;

	printf("enter size: ");
	scanf("%d", &arr.size);
	arr.A = (int *)malloc(arr.size*sizeof(int)); // creates ana array on the heap
	
	arr.length=0; // set array length default to 0
	printf("enter number of elements: ");
	scanf("%d", &n);
	arr.length = n;

	printf("enter elements of an array: ");
	for(int i=0;i<n;i++)
		scanf("%d", &arr.A[i]);

	display(arr);

	free(arr.A);

	return 0;
}