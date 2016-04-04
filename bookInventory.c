/*
this program reads in book inventory from a file
and displays the inventory
*/
#include <stdio.h>

/*
this function will open the file indicated by filename
and read in records of data holding sku,price on each line
and fills the s and p arrays with the sku and price respectively
*/
void readBookInventory(const char filename[], int s[], float p[]){
	//open a file with name indicated by filename[]
	//declare a file pointer
	FILE *input = NULL;
	input = fopen(filename, "r");
	//declare variables that we will use in the loop
	//keep track of how many things we have read out of the file
	int count=0;
	//these store values that we read out of the file
	int tempInt = 0;
	float tempFloat = 0;	

	if(input != NULL){
		//use a loop and fscanf to read from that file
		//notice the space in front, which should get rid of any whitespace that strayed in there
		while(fscanf(input, " %d,%f", &tempInt, &tempFloat) == 2 ){
			//save the values read out of the file into the arrays
			s[count] = tempInt;
			p[count] = tempFloat;
			count++;			
		}
		
		//once I'm done with the file, remember to close it
		fclose(input);
	}
} 

int main(void){
	//an array of SKUs
	//an array of book prices;
	int sku[10];
	float price[10];
	readBookInventory("bookInventory.csv", sku, price);
	printf("Displaying book inventory:\n");
	int i;
	for(i = 0 ; i < 10; i++){
		printf("index %d, book number: %d, book price: %f\n", i, sku[i], price[i]);

	}	
	return 0;

}
