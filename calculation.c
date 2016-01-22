/*
This is a multiline comment. It begins with the slash-star above
and it ends with the star-slash below
anything between these symbols is ingored..

The purpose of this program is to ask the user for two whole numbers
add the numbers up
and display the result to the user

*/

#include <stdio.h>

int main(void){
	//declare variables
	//first number
	int a;
	//second number
	int b;
	//result
	int sum;
	
	//get the input numbers from the user
	//ask the user to enter the first number
	printf("Enter the first number: ");
	//copy the bytes from the keyboard buffer into our variable
	scanf("%d", &a);
	//prompt the user for the second number
	printf("Enter the second number: ");
	//copy the second number into the correct variable
	scanf("%d",&b);

	//compute the result by adding the two numbers
	sum = a + b;

	//display the result to the user
	printf("The sum of the two numbers is: %d \n", sum);
}
