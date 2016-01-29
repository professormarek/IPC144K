/*
this program gives advice on the weather depending on the temperature
V2,0
this introduces the else statement. See how the output of this program is different than version 1
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
	}else{
		printf("Have a nice day!\n");
	}

	printf("PROGRAM COMPLETE\n");
}
