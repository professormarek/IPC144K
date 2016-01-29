/*
this program gives advice on the weather depending on the temperature
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
	}

	printf("Have a nice day!\n");
	

}
