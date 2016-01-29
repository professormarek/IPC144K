/*
this program uses a loop to bug the user to accept a cookie
*/

#include <stdio.h>

int main(void){
	//initialize variables used in the condition
	int response = 1;
	//in the condition below the != operator means "not equal to"
	//see your textbook sections on "expressions" and "logic"
	while (response != 0){
		printf("Do you want a cookie? Press 0 for yes:");
		//change the variable used in the condition
		// so that the loop can eventually finish
		scanf("%d", &response);
	}
	printf("you accepted the cookie. Mwa ha ha ha\n");

}


