#include <stdio.h>

/*
this function demonstrates that arrays are in fact passed by address
when we make changes in this function the changes to the array are 
reflected in main!

NOTE: this implies that when we pass arrays of structs we can also make changes to the originals!
*/
void changeArray(int a[], int size){
	//change array by setting all elements to 0
	int i;
	for(i = 0; i < size; i++){
		a[i] = 0;
	}
}

int main(void){

	//let's make an array to play with
	int test[4] = {1,2,3,4};
	int i;
	//display the elements of test
	for(i = 0; i < 4; i++){
                printf("test element %d is %d\n", i , test[i]);
        }
	//pass the array to changeArray and see if it changes the values!
	changeArray(test, 4);
	//print out the array. has it changed?
	printf("AFTER PASSING TO changeArray\n\n\n");
	for(i = 0; i < 4; i++){
                printf("test element %d is %d\n", i , test[i]);
        }

}
