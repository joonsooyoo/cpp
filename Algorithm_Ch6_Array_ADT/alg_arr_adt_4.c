#include <stdio.h>

/* 
	construct get, set, max, min, sum, average
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

int get(struct Array arr, int index){
	return arr.A[index];
}

void set(struct Array *arr, int index, int value){
	arr->A[index] = value;
}

int max(struct Array arr){
	int max_value = arr.A[0];
	for (int i=1;i<arr.length-1;i++){
		if (arr.A[i] > max_value)
			max_value = arr.A[i];
	}
	return max_value;
}

int min(struct Array arr){
	int min_value = arr.A[0];
	for (int i=1;i<arr.length-1;i++){
		if (arr.A[i] < min_value)
			min_value = arr.A[i];
	}
	return min_value;
}

int sum_by_loop(struct Array arr){
	int temp = 0;
	for (int i=0;i<arr.length-1;i++)
		temp += arr.A[i];
	return temp;
}

float avg(struct Array arr){
	return (float)sum_by_loop(arr) / arr.length; 
}

int main(){

	struct Array arr = {{3,1,2,4,5,6}, 10, 6};

	display(arr);

	// get array element
	printf("%d\n", get(arr, 3)); //4

	// set array element
	set(&arr, 1, 77);
	display(arr);

	// max
	printf("%d\n", max(arr)); //77

	// min
	printf("%d\n", min(arr)); //2

	// sum by loop & sum by recurrence
	printf("%d\n", sum_by_loop(arr)); //91

	// avg
	printf("%f\n", avg(arr));
	
	return 0;
}