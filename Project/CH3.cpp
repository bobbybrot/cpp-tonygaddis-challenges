/*
* Chapter 3: Expressions and Interactivity
* Book Pages: 144 - 150
* 
* NOTE: Each programming challenge are separated into their own functions:
* 
* XXX_NAME
* 
* XXX  = Challenge Number (matching number in book)
* NAME = Name of challenge (matching challenge name from book).
*/

#include<iostream>
using namespace std;

/****************** FUNCTION DEFINITIONS ******************/
void One_Miles_Per_Gallon(void)
{
	float max_gallons_supported, max_miles_full_tank;

	//Ask and read max tank gallons
	cout << "Enter maximum amount of gallons the car tank supports: ";
	cin >> max_gallons_supported;

	//Ask and read max full tank miles
	cout << "Enter max miles you can drive on a full tank: ";
	cin >> max_miles_full_tank;

	//Calculate and display MPG based on given information
	//MPG = Miles_driven / gallons_used
	cout << "MPG: " << (max_miles_full_tank / max_gallons_supported) << "MPG" << endl;
}

/****************** MAIN ******************/
int main()
{
	One_Miles_Per_Gallon();

	return 0;
}