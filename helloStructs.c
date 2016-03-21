#include <stdio.h>

#define NUM_DAYS 3 

/*
this program demonstrates using structs to model real world
complex data. 
it uses functions to input values into an array of structs
it uses functions to display the contents of the struct
*/

//define stucts before they are used in the code
//that means struct declartions go at the top
struct Weather{
	int date;
	float humidity;
	float temperature;
}; //don't forget me!

/*
this function displays an array of Weather data
it accepts an array of weather as well as the size of the array
this demonstrates passing an array of structs to a function
*/
void displayWeather(struct Weather data[], int number_of_days){
	//like before, use a loop to iterate through the array
	int i;
	for(i = 0; i< number_of_days; i++){
		//don't panic - this line is word wrapped...
		printf("Weather info: day %d , date %d, temperature %.1f, humidity %.1f\n", 
			i, data[i].date, data[i].temperature, data[i].humidity);
	}
}

/*
this function accepts the address of a struct
it will prompt the user for a day's worth of data
and write that weather data to the struct whose address was passed

this function demonstrates passing a struct to a function by address
and modifying it's origina contents
*/
void input(struct Weather *w_ptr){
	//I'll leave input validation for you
	printf("enter a temperature

}

int main(void){
	//declare a variable of our user defined Weather type
	//this variable will be used to store temporary user input
	struct Weather temporary;
	//declare an array that can hold 3 days worth of Weather - and initialize it!
	struct Weather forecast[NUM_DAYS] = { {18, 25.3, 0.8}, {19, 30.2, 17.5 }, {20, 31.1, 21.4} };
	//display the weather
	printf("Fantasy weather forecast: \n");
	displayWeather(forecast, NUM_DAYS);

}
