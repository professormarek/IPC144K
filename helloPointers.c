/*
this program demonstrates how to declare pointers,
get the memory address of variables
and display memory addresses
*/

#include <stdio.h>

int main (void){
	int x, y, z; // we can declare more than one variable in one line, separated by commas

	//below we'll declare a pointer to an integer
	//pointers store memory addresses
	//it's best to initialize pointers to 0 or NULL
	int *myPtr = NULL; //NULL is a special symbol that indicates a non-initialized or invalid memory address (0)
	
	//a simple calculation that we can do without using memory address
	x = 5;
	y = 9;
	z = x+y;
	
	//get the address of variable x and store it in myPtr
	myPtr = &x;
	//display the address of x
	printf("The address of variable x is: %x\n", myPtr);
	//recall that * is the dereference operator, it will "get the value" when applied to a pointer
	printf("The value stored at address %x is %d\n", myPtr, *myPtr);
	printf("The address of variable y is: %x\n", &y);
	printf("The address of variable z is: %x\n", &z);

	return 0;
}
