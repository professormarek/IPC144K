/*
this program illustrates writing and using a simple function
that takes no arguments and provides no result
*/

#include <stdio.h>

//the function below, accepts no arguments => void
//the function below returns no result => void
//welcome_message prints a welcome message
void welcome_message(void){
	printf("Wecome to our awesome program\n");
	printf("eventually it will do cool stuff\n");
	printf("but for now, it only displays this welcome message\n");
}

//this function accepts one argument, but provides no result
//print a goodybe message the indicated number of times
//int times is like a variable that is only available within the {} following the next line
void goodbye_message(int times){
	int i =0;
	while(i < times){
		printf("Goodbye!\n");
		//use printf to figure out what is wrong
		//printf("DEBUG: inside loop, i is %d, times is %d\n", i, times);
		i++;
	}
}

//the function below will accept two arguments
//and provide a result
//the power function returns the result of base raised to the indicated exponent
int power(int base, int exponent){
	//a variable to hold the result
	int answer = 1;
	//variable to use in the loop
	int i;	
	//use a loop to compute the result;
	for(i = 0; i < exponent; i++){
		answer = answer * base;
		//printf("DEBUG: inside loop answer: %d base: %d exponent: %d i: %d\n", answer, base, exponent, i);
	}
	//function that produces a result must use the return keyword at the end
	//to indicate which value is the result (pay attention to types)
	return answer;
}

int main(void){
	int result=0;
	int user_exp =0;
	int user_base = 0;
	//we can use printf to debug (or figure out) our program flow
	printf("THIS IS THE FIRST LINE OF MAIN\n");
	//this is what a basic function call looks like. Just use the function name
	//followed by the () even if your function accepts no arguments (void)
	welcome_message();
	printf("enter a base: ");
	scanf("%d", &user_base);
	printf("enter an exponent: ");
	scanf("%d", &user_exp);
	//call the function by using its name, and an ordered list of arguments
	//separated by commas
	result = power(user_base, user_exp);
	printf("%d raised to the power of %d is %d\n", user_base, user_exp, result);
	goodbye_message(5);
	printf("THIS IS THE LAST LINE OF MAIN\n");
}
