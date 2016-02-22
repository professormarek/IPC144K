/*
this program prompts the user for two integers (a numerator and denominator) and computes their 
greatest common divisor (GCD). This program will be able to handle "junk" input from the user
but doesn't worry about 0's or negative numbers

(this program demonstrates passing variables by address to a function)
*/
#include <stdio.h>

//declare functions

/*
this function forces the user to enter two integers
NOTE: try to prevent the user from entering both as 0
*/
void getIntegers(int *a, int *b){
	//declare variables
	int temp1=0, temp2=0;
	//store how many integers the user correctly entered
	int count = 0;
	//prompt the user
	printf("Enter two integers, numerator and denominator, separated by a space: ");
	count = scanf("%d %d", &temp1, &temp2);
	//TODO: ensure that the user correctly entered two integers

	//once we're done - assign temporary variables to a and b
	//how do you use the pointers to a and b?
	*a = temp1;
	*b = temp2;
}


//function implementations 
int main(void){
	//declare variables 
	int numerator = 0;
	int denominator = 0;
	int gcd = 0;

	//print a welcome message
	printf("Welcome to Greatest Common Divisor Calculator!!!\n");
	
	//think of a function name that will get the numerator and denominator
	//call your function and pass the numerator and deonminator by address
	getIntegers(&numerator, &denominator);

	printf("The lowest common denominator of %d and %d is %d\n", numerator, denominator, gcd);
}

//other functions...
