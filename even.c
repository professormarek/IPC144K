/*
this program will tell the user whether a number they enter is even or not
*/

#include <stdio.h>
int main(void){
	int number;
	//prompt the user for the number
	printf("enter a number:");
	scanf("%d", &number);

	if(number % 2 == 0){
		printf("%d is even\n", number);
	}else{
		printf("%d is odd\n", number);
	}

	printf("PROGRAM COMPLETE\n");

}
