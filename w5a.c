/*
this program prompts the user for two integers (a numerator and denominator) and computes their 
greatest common divisor (GCD). This program will be able to handle "junk" input from the user
but doesn't worry about 0's or negative numbers

(this program demonstrates passing variables by address to a function)
*/
#include <stdio.h>

//declare functions
/*
this function clears the buffer
*/
void clearBuffer(void){
	char c = 0;
	while(c != '\n'){
		c = getchar();
		printf("DEBUG: character left in buffer was: %c ASCII code: %d\n", c, c);
	}

}


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
	//encose scanf in a loop
	while(count != 2  ){
		count = scanf("%d %d", &temp1, &temp2);
		//Always clear the buffer after every input!!
		clearBuffer();
		printf("DEBUG: count is: %d\n", count);
		//if the user hans't entered two integers show them the alternate prompt
		if(count != 2 ){
			//show the erroor prompt
			printf("ERROR! Please enter two integers separated by a space: ");
		}
	}
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
