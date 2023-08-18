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
#include<iomanip>
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

void Two_Stadium_Seating(void)
{
	//Ask for Class A,B,C how many seats sold.
	float seats_sold_a, seats_sold_b, seats_sold_c, total_sales_income;
	const float SEATS_A_PRICE = 15; //$15
	const float SEATS_B_PRICE = 12; //$12
	const float SEATS_C_PRICE =  9;  //$9

	cout << "Pleaes enter (separated by spaces) number of tickets sold for A,B and C: " << endl;
	cin >> seats_sold_a >> seats_sold_b >> seats_sold_c;

	total_sales_income = (seats_sold_a * SEATS_A_PRICE) + (seats_sold_b * SEATS_B_PRICE) + (seats_sold_c * SEATS_C_PRICE);

	cout << setprecision(2) << fixed << showpoint;
	cout << "Total Income: $" << total_sales_income << endl;
}

/****************** MAIN ******************/
int main()
{
	//One_Miles_Per_Gallon();
	//Two_Stadium_Seating();
	return 0;
}