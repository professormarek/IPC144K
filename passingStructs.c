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

/*
this function accepts a struct Weather argument by address (pointer)
*/
void testModifyStructPtr(struct Weather *wPtr){
	/*when you have a pointer to a struct, you have to dereference it FIRST
	(using the dereference operator *)
	then you may access any of the fields using the . dot operator
	it ends up looking like (*pointer_name).field_name
	this is kind of ugly syntax, and I'll introduce shorthand in moment
	*/
	printf("testModifyStructPtr variable wPtr: date %d, temperature %.1f, humidity %.1f\n",
                         (*wPtr).date, (*wPtr).temperature, (*wPtr).humidity);
	//modify the date
	(*wPtr).date = -1;
	/* 
	the (*). syntax is kind of confusing. We can use the shorthand -> operator
	which does both the dereference and field access at the same time ex:
	*/
	//modify the humidity and temperature using the -> operator instead
	wPtr->temperature = -1000;
	wPtr->humidity = -0.1;
	printf("testModifyStructPtr variable wPtr (After changes): date %d, temperature %.1f, humidity %.1f\n",
                         (*wPtr).date, (*wPtr).temperature, (*wPtr).humidity);


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
	printf("today_copy (in main) after passing it to testModifyStruct: date %d, temperature %.1f, humidity %.1f\n",
                         today_copy.date, today_copy.temperature, today_copy.humidity);

	printf("Now let's test changing a struct when we pass it by address:\n");
	testModifyStructPtr(&today_copy);
	printf("today_copy (in main) after passing it to testModifyStructPtr: date %d, temperature %.1f, humidity %.1f\n",
                         today_copy.date, today_copy.temperature, today_copy.humidity);

}

