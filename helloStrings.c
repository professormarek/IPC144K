#include <stdio.h>
//needed for strlen function
#include <string.h>
int main(void){
	//declare and initalize a string of size 100
	//remember that it will insert the null (0) terminating byte for you
	char text[100] = "this is my default text";
	
	//just to experiment, let's write a loop that will go through the array and show the contents
	int i;
	printf("the ascii codes of each character in this string are: \n");
	for(i = 0 ; i < 100; i++){
		printf("%d ", text[i]);
	}
	printf("<- end of string\n");
	//a different easier way to diplay it would be with printf and %s
	printf("the default text is -> %s <-\n", text);

	//let the user enter a different text to store in the string
	printf("please enter a string 99 characters or less: ");
	/*
	the 99 limits input to 99 characters and the [^\n] part will stop reading characters at the newline
	the newline itself is not copied into the string
	usually we would clear the buffer after this to get rid of any other stuff in the buffer (ex. '\n')
	notice the space between " and the %   do this in order to ignore any leading whitespace
	*/
	scanf(" %99[^\n]", text);
	int stringLength = strlen(text);
	printf("the new string entered is: %s its length is: %d\n", text, stringLength);
	return 0;
}
