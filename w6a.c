#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//we use #define to make constants that we can easily change later

#define MAXIMUM_PLAYER_HEALTH 30
#define MAXIMUM_POTIONS 5
#define MONSTER_NAME "Hobbit"

//define true and false constants
#define FALSE 0
#define TRUE 1

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

	int n =  minimum + rand() % (maximum + 1 - minimum);
	return n;

}

/*a function that displays the combat menu*/

void displayMenu(int health, int potions){
	printf("placeholder menu for you\n");
	printf("current health: %d current potions: %d\n", health, potions);
	printf("Press f to fight the monster\np to use a potion (if available!)");
	printf("\nPress r to run (quit the game):\n");

}

/*a function that displays a message appropriate for when the player wins the combat*/
void winningMessage(void){

	printf("PKACEHOLDER PLAYER WINS\n");
}

/*a function that displays a message appropriate for when the player loses the combat*/

void losingMessage(void){
	printf("PKACEHOLDER PLAYER LOSES\n");

}

/*a function that displays the end screen.*/

void gameOver(void){

	printf("PLACEHOLDER GAME OVER\n");

}

/* main function - implements combat (a battle) between a monster and a hero */
int main(void){
	//store the player's health
	int playerHealth = 0;
	//store the players minimum damage
	int playerMinDamage = 0;
	//other variables...
	int playerMaxDamage = 0;
	int numberOfPotions = 0;
	int minMonsterHealth =0;
	int maxMonsterHealth =0;
	int currentMonsterHealth =0;
	int monsterMinDamage=0;
	int monsterMaxDamage=0;
	//NEW VARIABLE:
	int gameOver = 0;//0==FALSE, 1==TRUE
	//variable to store the user's combat action choice
	char userChoice=0;
	//uncomment the next line, if you want the program to produce different output
	srand(time(NULL));

	//display welcome message
	welcome();
	//get the starting health of the player
	printf("What is the starting health of the player?: ");
	playerHealth = getUserInteger(1,MAXIMUM_PLAYER_HEALTH);
	//get the minimum damage for the player
	printf("What is the minimum player damage?:");
	playerMinDamage = getUserInteger(1, 30);
	//get the maximum damage for the player
	printf("What is the maximum player damage?:");
	playerMaxDamage = getUserInteger(playerMinDamage, 1000);
	//get the number of potions
	printf("How many potions does the hero start with:");
	numberOfPotions = getUserInteger(0,MAXIMUM_POTIONS);
	//get the minimum health for the monster
	printf("What is the minimum monster health?:");
	minMonsterHealth = getUserInteger(1,30);
	//get the maximum health for the monster
	printf("What is the maximum monster health?:");
	maxMonsterHealth = getUserInteger(minMonsterHealth,1000);
	//get the minimum damage for the monster
	printf("What is the minimum monster damage:");
	monsterMinDamage = getUserInteger(1, 5);
	//get the maximum damage for the monster
	printf("What is the maximum monster damage?:");
	monsterMaxDamage = getUserInteger(monsterMinDamage,30);

	//simulate combat
	//tell the user the monster is here
	/*remember the compiler does find-and-replace here and replaces MONSTER_NAME with whatever you used in the #define statement above */
	printf(MONSTER_NAME);
	printf(" has come to fight you!\n");	

	//select a starting monster health
	//use the random number generation function we wrote together (based on notes)
	currentMonsterHealth = generateRandomNumber(minMonsterHealth,maxMonsterHealth);
	printf("DEBUG: randomly selected monster initial health: %d\n", currentMonsterHealth);
	//combat continues until monster or player health reaches 0
	while(playerHealth > 0 && currentMonsterHealth > 0 && gameOver==FALSE){
		displayMenu(playerHealth, numberOfPotions);
		//get the user's menu choice
		scanf(" %c", &userChoice);
		clearBuffer();
		printf("DEBUG: users's choice was: %c\n", userChoice);
		/*hint: here you should use if, else if, and else statements to do something based on the user's menu choice */
	}
}
