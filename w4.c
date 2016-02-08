/*
this program is a math tutor program
it can answer several kinds of math questions
it presents a menu to the user
and does a calculation based on their choices
*/

#include <stdio.h>

/*
this function accepts an integer as an argument
and will return 1 if that integer was prime
and 0 otherwise.
*/
int is_prime(int number){
	int result = 1; //1 if it's prime, 0 if not
	int i;//variable to control the loop
	//check whether it's prime
	for(i = 2 ; i < number; i++){
		if(number % i == 0){
			result = 0; // number is not prime
		}
	}
	return result;
}

double power(double base, int exponent){
	double answer = 1;
	int i;	
	//use a loop to compute the result;
	for(i = 0; i < exponent; i++){
		answer = answer * base;
	}
	return answer;
}

int main(void){
	char choice = 0;
	int user_int = 0;
	int result_int =0;
	double base=0.0;
	int exponent = 0;
	double result_double=0.0;
	printf("Welcome to math calaculatr!!!\n");
	
	while(choice != 'q'){
		printf("Enter your choice: ! for factoriral, e for pow(e)r, p for (p)rime, f for (f)ibonnaci, q to (q)uit:");
		scanf(" %c", &choice);
		if(choice == 'q'){
			printf("Thanks for using match calcuclatr\n");	
		}else if(choice == 'p'){
			printf("Please enter a positive integer:");
			scanf("%d", &user_int);	
			result_int = is_prime(user_int);
			if(result_int == 1){
				printf("%d was prime\n", user_int);
			}else{
				printf("%d was NOT prime\n", user_int);
			}
		}else if(choice == 'e'){
			printf("Enter a real number base:\n");
			scanf("%lf", &base);
			printf("Enter an integer exponent:\n");
			scanf("%d", &exponent);
			result_double = power(base, exponent);
			printf("base %lf raised to the power of %d is %lf\n", base, exponent, result_double);
		}

	}

	return 0;
}
