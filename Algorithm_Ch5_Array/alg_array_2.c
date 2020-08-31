#include <stdio.h>
#include <stdlib.h>

/*
	Three Ways to Create 2d Array
*/

int main(){

	char intro[100] = "Array: ";
	// 1. using square brackets (only in stack)
	int A[2][3] = {{1,2,3}, {4,5,6}};
	printf("%s\n", intro);
	// print an array
	for (int i=0;i<2;++i){
		for (int j=0;j<3;++j){
			printf("%d ", A[i][j]);
		}
		printf("\n");
	}

	// 2. using a stack and a heap
	int *B[2];
	// int *B[0] = (int *)malloc(3*sizeof(int));
	for (int i=0;i<2;i++){
		B[i] = (int*)malloc(3*sizeof(int));
	}
	for (int i=0;i<2;i++){ // assign
		for (int j=0;j<3;j++)
			B[i][j] = 3*i+(j+1);
	}
	for (int i=0;i<2;++i){ // print
		for (int j=0;j<3;++j){
			printf("%d ", B[i][j]);
		}
		printf("\n");
	}

	// 3. using only a heap
	int **C;
	C = (int **)malloc(2*sizeof(int *));
	for (int i=0;i<2;i++){
		C[i] = (int *)malloc(sizeof(int));
	}
	for (int i=0;i<2;i++){ // assign
		for (int j=0;j<3;j++)
			C[i][j] = 3*i+(j+1);
	}
	for (int i=0;i<2;++i){ // print
		for (int j=0;j<3;++j){
			printf("%d ", C[i][j]);
		}
		printf("\n");
	}




	return 0;

}