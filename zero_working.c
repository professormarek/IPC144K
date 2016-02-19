/*
this program is our second attempt to use a function to set a varible found in main to zero -> 0
this version uses pointers to accomplish the task
*/

#include <stdio.h>
//this is also an example of declaring a fuction before main and defining it following main

//function declaration
void zero(int *num);

int main(void){
	int x = 5;
	printf("x before calling zero(x) is : %d\n", x);
	zero(&x);
	printf("x after callig zero(x) is %d\n", x); // we want to get 0
	return 0;
}

//this is the defininition of the zero function that was declared above
void zero(int *num){
	*num = 0;
}
