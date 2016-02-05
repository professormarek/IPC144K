/*
this program illustrates writing and using a simple function
that takes no arguments and provides no result
*/

#include <stdio.h>

//the function below, accepts no arguments => void
//the function below returns no result => void

void welcome_message(void){
	printf("Wecome to our awesome program\n");
	printf("eventually it will do cool stuff\n");
	printf("but for now, it only displays this welcome message\n");
}

int main(void){
	//we can use printf to debug (or figure out) our program flow
	printf("THIS IS THE FIRST LINE OF MAIN\n");
	//this is what a basic function call looks like
	//note you have to use the () even if your function accepts no arguments (void)
	welcome_message();
	printf("THIS IS THE LAST LINE OF MAIN\n");
}
