#include <stdio.h>

#define MAXIMUM_PLAYER_HEALTH 30

/*
this function clears the buffer
*/
void clearBuffer(void){
	char c = 0;
	while(c != '\n'){
		c = getchar();
	}

}


/*a function that displays a welcome message */

void welcome(void){
	printf("WELCOME TO HEROES AND MONSTERS!!!\n Prepare to do battle...\n");

}

/*a function that accepts two integer arguments and validates user input to ensure the user enters a number between the two 
arguments */

int getUserInteger(int minimum, int maximum){
	int userInput = -1;
	while(userInput < minimum || userInput > maximum){
		printf("Enter a number (%d - %d):", minimum, maximum);
		scanf("%d", &userInput);
		clearBuffer();			
	}


}

/*a function that generate a random number between a minimum and maximum number specified by the arguments*/

int generateRandomNumber(int minimum, int maximum){

	//your implementation here

}

/*a function that displays the combat menu*/

void displayMenu(void){

	//your implementation here

}

/*a function that displays a message appropriate for when the player wins the combat*/

void winningMessage(void){

	//your implementation here

}

/*a function that displays a message appropriate for when the player loses the combat*/

void losingMessage(void){
	//implementation here

}

/*a function that displays the end screen.*/

void gameOver(void){

//your implementation here

}

/* main function - implements combat (a battle) between a monster and a hero */
int main(void){
	//store the player's health
	int playerHealth = 0;

	//display welcome message
	welcome();
	//get the starting health of the player
	printf("What is the starting health of the player?: ");
	playerHealth = getUserInteger(1,MAXIMUM_PLAYER_HEALTH);
	printf("DEBUG: player entered maximum health: %d\n", playerHealth);
}
