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


/*FIXED!: this function searches for a book by isbn and returns the price as a double
OR prints an error message if the book's ISBN number is not in the array
*/
double searchPrice(int isbn_to_find, int i[], double p[], int count){
	int j;
	for(j = 0; j < count ; j++){
		if(i[j] == isbn_to_find){
			//if the condition above is true, we have found the book!
			//so return the price (from the price array named p)
			return p[j];			
		}
	}
	//if we didn't hit the return statement above we'll reach this point
	printf("WARNING: ISBN %d not found!\n");
	//return a price of 0.0 as specified
	return 0.0;
}

/*
this is an example function that accepts arrays as arguments and displays their contents
i, p, and q are the arrays we want to display, and count stores the number of items in each
*/
void debugArrayPrint(int i[], double p[], int q[], int count){
	int j;
	printf("DEBUGGING ARRAY CONTENTS: \n");
	for(j = 0; j < count; j++){
		//print out the array values at the current index
		printf("DEBUG: index: %d, isbn: %d, price: %.2lf, quantity: %d \n", j, i[j], p[j], q[j]);
	}

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
	//store the isbn entered by the user, so we can inspect it
	int temp_isbn = -1;
	//keep track of how many books have been entered (use as array index)
	//array indexes are always integers
	int book_count = 0;

	//print welcome banner
	printf("Welcome to Bookstore inventory manager dot com\n");
	printf("==============================================\n");
	//write a loop to ask the user to fill the array (0 to finish)
	while(temp_isbn != 0){
		printf("Enter a book starting with shortened ISBN (0 to quit):\n");
		printf("ISBN: ");
		temp_isbn = getUserInteger(0, 9999);
		if(temp_isbn != 0){
			//store the temp_isbn in our array!
			isbn[book_count] = temp_isbn;
			//keep asking question
			//ask for price
			printf("Enter book price: ");
			price[book_count] = getUserDouble(0.0, 1000000.0);			
			//ask for quantity
			printf("Enter book quantity: ");
			quantity[book_count] = getUserInteger(0,1000000);
			//remember to count the new book!
			book_count++;
		}
	}
	debugArrayPrint(isbn, price, quantity, book_count);
	
	/*
	TODO: repeatedly prompt the user for ISBN numbers to search until they enter 0
	and search for that book within the arrays by calling the search function we wrote together
	hint: use a loop like we did above, to keep asking for ISBN's!
	hint: use the search function we started together - I fixed it to return the price
	or to print an error message if the ISBN is not found in the array
	it's now changed to: double searchPrice(int isbn_to_find, int i[], double p[], int count)
	*/
	
}
