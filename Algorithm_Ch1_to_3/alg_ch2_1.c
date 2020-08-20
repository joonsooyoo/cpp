#include <stdio.h>
#include <stdlib.h>

struct Rectangle{

	int length;
	int breadth;

};

void initialize(struct Rectangle *r, int length, int breadth); //pass by address
int area(struct Rectangle r); //pass by value
// void ChangeLength(struct Rectangle &r, int length); //pass by reference

int main(){

	struct Rectangle r;

	initialize(&r, 10, 5);
	area(r);
	ChangeLength(r, 20);

	printf("%d", r.length); //20

	return 0;
}

void initialize(struct Rectangle *r, int length, int breadth){

	r->length=length;
	r->breadth=breadth;
}

int area(struct Rectangle r){
	return r.length * r.breadth;
}

// void ChangeLength(struct Rectangle &r, int length){
// 	r.length=length;
// }