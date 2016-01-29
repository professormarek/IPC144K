/*
this program gives advice on the weather depending on the temperature
V2,0
introduces the if-else-if
*/

#include <stdio.h>

int main(void){
	//this holds the user input (current outdoor temperature)
	int temperature;
	//get the temprerature from the user
	printf("Please enter the temperature outside: ");
	scanf("%d",&temperature);
	if(temperature > 30){
		printf("go to the beach\n");
	}else if(temperature == 0){
		printf("stay home; could be icy!\n"); 
	}else if(temperature < 0){
		printf("wear a jacket\n");
	}else{
		printf("Have a nice day!\n");
	}

	printf("PROGRAM COMPLETE\n");
}
