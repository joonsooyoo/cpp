#include <stdio.h>

/* 
	construct reverse, shift, rotate
*/

struct Array {
	int A[10];
	int size;
	int length;
};

void display(struct Array arr){
	for (int i=0;i<arr.length;i++)
		printf("%d ", arr.A[i]);
	printf("\n");
}

void reverse(struct Array *arr){
	int temp[arr->length];
	for (int i=arr->length-1, j=0; i>=0; i--, j++){
		temp[j] = arr->A[i];
	}
	for (int i=0;i<arr->length;i++){
		arr->A[i] = temp[i];
	}
	// for (int i=0;i<arr->length-1;i++)
	// 	printf("%d ", temp[i]);
	// printf("\n");
}

void left_shift(struct Array *arr){
	for (int i=0;i<arr->length;i++)
		arr->A[i] = arr->A[i+1];
	arr->A[arr->length-1] = 0;
}

void rotate(struct Array *arr){
	int temp = arr->A[0];
	for (int i=0;i<arr->length;i++)
		arr->A[i] = arr->A[i+1];
	arr->A[arr->length-1] = temp;
}

int main(){

	struct Array arr = {{3,1,2,4,5,6}, 10, 6};

	display(arr);

	// reverse
	reverse(&arr);
	display(arr);

	// left shift
	left_shift(&arr);
	display(arr);

	// rotate
	rotate(&arr);
	display(arr);



	return 0;
}