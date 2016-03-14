#include <stdio.h>

#define MAX_BOOKS 10000

/*
this function clears the buffer
*/
void clearBuffer(void){
	char c = 0;
	while(c != '\n'){
		c = getchar();
	}

}

/*a function that accepts two integer arguments and validates user input to ensure the user enters a number between the two 
arguments this function returns an int*/

int getUserInteger(int minimum, int maximum){
	int userInput = minimum-1;
	while(userInput < minimum || userInput > maximum){
		printf("Enter a number (%d - %d):", minimum, maximum);
		scanf("%d", &userInput);
		clearBuffer();			
	}
	return userInput;

}

/*a function that accepts two double arguments and validates user input to ensure the user enters a number between the two
arguments this function returns a double

recall: double is a floating point type (like float) but gives you more precision (bits) and you have to use %lf

*/
double getUserDouble(double minimum, double maximum){
        double userInput = minimum-1;
        while(userInput < minimum || userInput > maximum){
                printf("Enter a number (%.2lf - %.2lf):", minimum, maximum);
                scanf("%lf", &userInput);
                clearBuffer();
        }

	return userInput;
}


/*
this program implements a "database" that stores the inventory information of a bookstore
*/

int main(void){
	//declare three arrays to store the ISBN, price, and quantity of books in our bookstore
	//declare an array for ISBN
	int isbn[MAX_BOOKS];
	//declare an array for prices
	double price[MAX_BOOKS];
	//declare an array for quantity
	int quantity[MAX_BOOKS];
}
