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

	cout << "Please enter (separated by spaces) number of tickets sold for A,B and C (press enter when completed): " << endl;
	cin >> seats_sold_a >> seats_sold_b >> seats_sold_c;

	//Calculate total income
	total_sales_income = (seats_sold_a * SEATS_A_PRICE) + (seats_sold_b * SEATS_B_PRICE) + (seats_sold_c * SEATS_C_PRICE);

	//Per book challenge, set precision of decimal places, fixed and always show decimal point.
	cout << setprecision(2) << fixed << showpoint;
	cout << "Total Income: $" << total_sales_income << endl;
}

void Three_Test_Average(void)
{
	float test_one, test_two, test_three, test_four, test_five, test_avg;
	const float NUMBER_OF_VALUES = 5.0;

	//Ask and store 5 test scrores
	cout << "Please enter 5 test scores (space separated and press enter when completed): ";
	cin >> test_one >> test_two >> test_three >> test_four >> test_five;

	//Calculate average
	test_avg = (test_one + test_two + test_three + test_four + test_five) / NUMBER_OF_VALUES;

	//Setup IO output: Fixed point, one decimal point precision
	cout << setprecision(1) << fixed;

	//Display output with IO modifications
	cout << "Average: " << test_avg << endl;	
}

void Four_Average_Rainfall(void)
{
	//:Calculate average rainfall for three months.
	string month_one, month_two, month_three;
	float month_one_rainfall, month_two_rainfall, month_three_rainfall, rainfall_average;
	const float MONTH_NUMBER = 3;

	//Read and store name of 3 months and rainfall in inches
	cout << "Enter 3 months and rainfall (inches), separated by spaces and enter when done (EG. July 15.5): ";
	cin >> month_one >> month_one_rainfall >> month_two >> month_two_rainfall >> month_three >> month_three_rainfall;
	rainfall_average = (month_one_rainfall + month_two_rainfall + month_three_rainfall) / MONTH_NUMBER;

	//Print message in structure dictated by book.
	//Testing showed up to 4 decimal places shown, decided to reduce to 2dp for preference.
	cout << setprecision(2) << fixed;
	cout << "\nThe average rainfall for " << month_one << ", " << month_two << ", and " << month_three << " is "
		 << rainfall_average << " inches" << endl;
}

void Five_Male_Female_Percentages(void)
{
	//Calculate percentage of male and female attendance in a class
	const float PERCENTAGE_WHOLE_NUMBER_CONV = 100;
	float total_students, percentage_male, percentage_female;
	int male_students, female_students;

	//Ask and store male and female numbers
	cout << "Enter number of male and female students, seprated by spaces (enter to confirm): ";
	cin >> male_students >> female_students;

	total_students = male_students + (float)female_students;
	percentage_male = male_students / total_students;
	percentage_female = female_students / total_students;

	cout << "Total students: " << total_students << endl;
	cout << "Male student percentage: " << (percentage_male * PERCENTAGE_WHOLE_NUMBER_CONV) << "%" << endl;
	cout << "Female student percentage: " << (percentage_female * PERCENTAGE_WHOLE_NUMBER_CONV) << "%" << endl;

}

void Six_Ingredient_Adjuster(void)
{
	//With given ingredient data, ask user how many cookies they wish to make and calculate ingredients needed
	
	//The following are ingredients that produce 48 cookies :P
	const int COOKIES_MADE = 48;
	const float SUGAR_CUPS = 1.5;
	const float BUTTER_CUPS = 1;
	const float FLOUR_CUPS = 2.75;
	
	//Calculate how much one cup would be
	const float CUPS_SUGAR_ONE = SUGAR_CUPS / COOKIES_MADE;
	const float CUPS_BUTTER_ONE = BUTTER_CUPS / COOKIES_MADE;
	const float CUPS_FLOUR_ONE = FLOUR_CUPS / COOKIES_MADE;

	int cookies_to_make;

	cout << "How many cookies do you wish to make? ";
	cin >> cookies_to_make;
	cout << endl;

	cout << "Sugar Cups: " << CUPS_SUGAR_ONE * cookies_to_make << endl;
	cout << "Butter Cups: " << CUPS_BUTTER_ONE * cookies_to_make << endl;
	cout << "Flour Cups: " << CUPS_FLOUR_ONE * cookies_to_make << endl;
}

/****************** MAIN ******************/
int main()
{
	//One_Miles_Per_Gallon();
	//Two_Stadium_Seating();
	//Three_Test_Average();
	//Four_Average_Rainfall();
	//Five_Male_Female_Percentages();
	//Six_Ingredient_Adjuster();
	return 0;
}