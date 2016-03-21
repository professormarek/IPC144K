#include <stdio.h>

struct Weather{
	int date;
	float humidity;
	float temperature;
};

/*
this function accepts a struct Weather argument by value (not using a pointer)
*/
void testModifyStruct(struct Weather w){
	//first let's display it
	printf("testModifyStruct variable w: date %d, temperature %.1f, humidity %.1f\n",
                         w.date, w.temperature, w.humidity);
	//then we'll try to modify it
	w.date = -1;
	w.temperature = -1000;
	w.humidity = -0.1;
	printf("testModifyStruct variable w after modification: date %d, temperature %.1f, humidity %.1f\n", 
                         w.date, w.temperature, w.humidity); 
	
}

int main(void){

	//declare a varaible of our Weather type
	struct Weather today_weather = {21, 45.0, -1.5};
	/*display it -  recall that the . (dot operator) is used to access the fields of a struct variable (object) */
	printf("Weather info for today: date %d, temperature %.1f, humidity %.1f\n", 
			 today_weather.date, today_weather.temperature, today_weather.humidity);
	/*we can copy a struct variable to another struct variable (field-by-field) by using the assignment operator */
	//this variable will hold a copy of today_weather
	struct Weather today_copy = {0,0,0};
	//display today_copy
	printf("today_copy initial state: date %d, temperature %.1f, humidity %.1f\n",
                         today_copy.date, today_copy.temperature, today_copy.humidity);
	//copy today_weather to today_copy by using the = operator (will copy each field)
	today_copy = today_weather;
	printf("today_copy after assignment: date %d, temperature %.1f, humidity %.1f\n",
                         today_copy.date, today_copy.temperature, today_copy.humidity);

	//call testModifyStruct to see if it will alter today_copy!
	testModifyStruct(today_copy);
	printf("today_copy after passing it to testModifyStruct: date %d, temperature %.1f, humidity %.1f\n",
                         today_copy.date, today_copy.temperature, today_copy.humidity);

}
