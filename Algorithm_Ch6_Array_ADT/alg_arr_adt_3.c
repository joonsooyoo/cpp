#include <stdio.h>

/*
	Linear search
		1. simple linear search
		2. transposition linear search
		3. move to front linear search
*/

struct Array {
	int data[10];
	int size;
	int length;
};

void display(struct Array arr){
	for (int i=0;i<arr.length;i++)
		printf("%d ", arr.data[i]);
	printf("\n");
}

int linear_search(struct Array arr, int key){
	for (int i=0;i<arr.length;i++){
		if (key == arr.data[i])
			return i;
	}
	return -1;
}

void swap(int *num1, int *num2){
	int temp;
	temp = *num1;
	*num1 = *num2;
	*num2 = temp;
}

int transposition_linear_search(struct Array *arr, int key){
	for (int i=0;i<arr->length;i++){
		if (key == arr->data[i]){
			swap(&arr->data[i], &arr->data[i-1]);
			return i;	
		}
	}
	return -1;
}

int movetofront_linear_search(struct Array *arr, int key){
	for (int i=0;i<arr->length;i++){
		if (key == arr->data[i]){
			swap(&arr->data[i], &arr->data[0]);
			return i;	
		}
	}
	return -1;
}

int main(){
	struct Array arr = {{2,3,4,5,6}, 10, 5};

	display(arr);

	int num;
	// printf("What do you want to search? ");
	// scanf("%d", &num);

	// printf("Index of Your search(%d): %d\n", num, linear_search(arr, num));

	/* transposition linear search */
	printf("What do you want to search? ");
	scanf("%d", &num);

	printf("Index of Your search(%d): %d\n", num, transposition_linear_search(&arr, num));
	display(arr);

	/* move to front linear search */
	// printf("What do you want to search? ");
	// scanf("%d", &num);

	// printf("Index of Your search(%d): %d\n", num, transposition_linear_search(&arr, num));
	// display(arr);


	return 0;
}