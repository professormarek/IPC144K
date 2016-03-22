#include <stdio.h>

/*
This program demonstrates using programmer defined structs to 
model a few days worth of weather data
*/


/* 
the following is declaring our struct
(this doesn't allocate any memory YET)
this is just telling the compiler about
the aggregate type we are defining
*/
struct Weather{
	/*here we list the fields - or pieces of information that make up our new type*/
	int date; 
	int month;//added
	int year;//added
	float temperature;
	float humidity;
};//don't forget me!

//clears input buffer
void clearBuffer(void){
	//variable to store the next character in the buffer
	char c=0;
	while(c != '\n'){
		c = getchar();
	}
}

//validates user input - integer version
int getUserInteger(int minimum, int maximum){
	//choose an invalid initial value for the user input
	int userInput = minimum - 1;
	/*the || operator means "OR" - it can be used to combine simple 
	conditions into more complicated conditions */
	while(userInput < minimum || userInput > maximum){
		//ask the user to enter a number within the range
		printf("Enter an integer between %d and %d: ", minimum, maximum);
		//validate the input
		scanf("%d", &userInput);
		clearBuffer();		
	}
	return userInput;
}

//validates user input - float version
float getUserFloat(float minimum, float maximum){
        //choose an invalid initial value for the user input
        float userInput = minimum - 1;
        /*the || operator means "OR" - it can be used to combine simple
        conditions into more complicated conditions */
        while(userInput < minimum || userInput > maximum){
                //ask the user to enter a number within the range
                printf("Enter a floating point number between %.1f and %.1f: ", minimum, maximum);
                //validate the input
                scanf("%f", &userInput);
                clearBuffer();
        }
        return userInput;
}



/*
we can call this function to display the report!
this function accepts an array of Weather objects, and the size (days) of the array
it displays to the user the information contained in the array of Weather
w[] is the array of Weather, and int days represents the size of the array
*/
void displayWeatherForecast(struct Weather w[], int days){
	//use a loop to visit each struct in the array, and display its contents
	int i;
	for(i=0; i<days; i++){
		//to access the fields in a struct object or variable use the . (dot) operator
		//=> identifier.field_name
		printf("Day %d, Date %d, Temperature %.1f, Humidity %.1f\n", i, w[i].date, w[i].temperature, w[i].humidity);

	}
}

/*
this function accepts the address of a struct
it will prompt the user for a day's worth of data
and write that weather data to the struct whose address was passed
this function demonstrates passing a struct to a function by address
and modifying its original contents
*/
void input(struct Weather *w_ptr){
	//recall that the -> arrow operator performs a dereference AND field access operation
	printf("Enter the year of the weather readings:");
	w_ptr->year = getUserInteger(1900, 9999);
	printf("Enter the month of the weather readings:");
	w_ptr->month = getUserInteger(1,12);
	printf("Enter the date of the weather readings:");
	w_ptr->date = getUserInteger(1,31);
	printf("Enter the temperature reading (celsius):");
        w_ptr->temperature = getUserFloat(-100.0, 999.9);
	printf("Enter the humidity reading (percentage):");
        w_ptr->humidity = getUserFloat(0.0, 100.0); 
}

/* displays a menu
see the workshop posting on blackboard for the sample menu
go ahead and replace the function below with your own implementation
*/
void displayMenu(){
	printf("Placeholder Menu - finish this function for part A\n");

}	

//main function
int main(void){
	//declare a temporary struct to hold user input (we'll use this later)
	struct Weather temporary_weather;
	
	//demonstrate declaring an array of Weather structs or "objects"
	//store a forecast - today's tomorrow's and the next day's weather
	//also demonstates initializing an array of structs

	//this variable stores the maximum number of days of weather for our array of structs
	int max_days = 0;
	//get a maximum number from the user
	printf("Enter the maximum number (days) of Weather: \n");
	max_days = getUserInteger(1, 10000);

	//declare the array using the varible size (DO NOT INITALIZE using = { ... } )
	struct Weather forecast[max_days];

	//this variable will store the number of days entered by the user
	int days_entered = 0;

	//this variable holds user for the menu choice
	int menu_choice = -1;
	
	//loop to ask user for menu choice, and fulfil the request
	//recall, 0 to quit
	while(menu_choice != 0){
		//display the menu
		displayMenu();
		menu_choice = getUserInteger(0,3);
		if(menu_choice == 0){
			//if the condition menu_choice==0 is true now
			//we don't need to do anything more, look up:
			//the condition for the while() loop will now be false!
			printf("quitting...\n");
		}else if(menu_choice == 1){
			//recall the variable we declared at the top, temporary_weather
			//call the input function declared above,
			//which will copy user input into temporary_weather
			input(&temporary_weather);
			if(days_entered >= max_days){
				printf("ERROR: out of space. You should have chosen more capacity at the start!\n");
			}else{
				//store the weather entered by the user in the forecast array
				forecast[days_entered] = temporary_weather;
				//the user has entered another weather reading, so count it!
				days_entered++;
			}
		}else if(menu_choice == 2){
			//this one is up to you to implement
			//we already wrote a function that can print the report..
			//look for it above, all you need is to call it!
		}else if(menu_choice == 3){
			//up to you to implement...
			//the user selects the index of a weather object to replace
			//you can use a similar strategy as above to get user input
			//ex.input(&temporary_weather);
			/* then use assignment (=) to replace the Weather at the chosen index with temporary_weather */
			/* you shouldn't increase the days_entered count, because you are replacing an existing object at the chosen index */
		}
	}	
}

