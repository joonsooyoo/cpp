#include <stdio.h>

/*
	ADT basic functions part2
		append, insert, delete
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

void append(struct Array *arr, int value){ // accessing without arrow operator
	if ((*arr).length < arr->size){
		(*arr).A[(*arr).length] = value;
		(*arr).length++;
	}
	else {
		printf("Array Currently Full\n");
	}
}

void insert(struct Array *arr, int index, int value){
	if (arr->length < arr->size){
		for (int i=arr->length;i>index;i--)
			arr->A[i] = arr->A[i-1];
		arr->A[index] = value;
		arr->length++;
	}
	else {
		printf("Array Currently Full\n");	
	}
}

int delete(struct Array *arr, int index){

	if (index >=0 || index < arr->length){
		
		int x = arr->A[arr->length];
		for (int i=index;i<arr->length-1;i++)
			arr->A[i] = arr->A[i+1];
		arr->length--;
		return x;
	}	
	else 
		return 0;
}

int main(){

	struct Array arr = {{1,2,3,4,5}, 10, 5};
	display(arr);
	
	append(&arr, 6);
	display(arr);

	insert(&arr, 3, 7);
	display(arr);

	delete(&arr, 2);
	display(arr);



	return 0;
}