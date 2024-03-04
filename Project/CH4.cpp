#include "CH4.h"
/*
* Chapter 4: Making Decisions
* Book Pages: 151 - 231
*
* NOTE: Each programming challenge are separated into their own functions.
*
* XXX_YYY_YYY
*
* XXX  = Challenge Number (matching number in book)
* YYY  = Name of challenge (matching challenge name from book).
*/

#include<iostream>
#include<string>
#include<iomanip>
using namespace std;

int Helper_Int_Is_Larger(int valone, int valtwo)
{
	int ret;
	if (valone > valtwo)
	{
		ret = valone;
	}
	else if (valone < valtwo)
	{
		ret = valtwo;
	}
	else //valone == valtwo
	{
		return -1;
	}
	return ret;
}

//Miscellaneous function to test string comparison.
//Multiple conflicts was found with the checkpoint answers provided by C++ book, regarding string comparisons, thus
//created function below to manually verify answers.
void Misc_Str_Compare(void)
{
	int reloop = 0;

	while (reloop != 1)
	{
		const int EQUAL_TOO = 0;
		const int LESS_THAN = 1;
		const int MORE_THAN = 2;
		string strone;
		string strtwo;
		int action;
		bool actionTrue = false;

		cout << endl << "Enter String 1: ";
		getline(cin, strone);

		cout << endl << "0 (equal to), 1 (less than), 2 (more than): ";
		cin >> action;

		cout << endl << "Enter String 2: ";
		getline(cin, strtwo);

		if ( (action == EQUAL_TOO) && (strone == strtwo) )
		{
			actionTrue = true;
		}
		else if ( (action == LESS_THAN) && (strone < strtwo) )
		{
			actionTrue = true;
		}
		else if ( (action == MORE_THAN) && (strone > strtwo) )
		{
			actionTrue = true;
		}

		cout << endl << "ACTION: " << ((actionTrue) ? "true" : "false");

		cout << endl << "Repeat? (0 to repeat): ";
		cin >> reloop;
		
		//As cin leaves \n in keyboard buffer, getline will immediately reach it and skip first input on cycle repeat, which is unintentional.
		//Thus, ignore the left over \n character and allow first getline(), when loop repeats, to correctly wait for user input.
		cin.ignore();
	}
}

void One_Minimum_Maximum(void)
{
	int ione, itwo;

	cout << "Please enter two numbers: ";
	cin >> ione >> itwo;
	
	cout << "Input " << Helper_Int_Is_Larger(ione,itwo) << " is largest";
}

void Two_Roman_Numerical_Converter(void)
{
	int ione;
	cout << "Please enter number between one and ten ";
	cin >> ione;
	
	cout << endl;
	switch (ione)
	{
		case 1:	cout << "I"; break;
		case 2:	 cout << "II"; break;
		case 3:  cout << "III"; break;
		case 4:	 cout << "IV"; break;
		case 5:	 cout << "V"; break;
		case 6:	 cout << "VI"; break;
		case 7:	 cout << "VII"; break;
		case 8:	 cout << "VII"; break;
		case 9:	 cout << "VIII"; break;
		case 10: cout << "IX"; break;
		default:
			cout << "Invalid number, please try again...";
	}
	cout << endl;
}

void Three_Magic_Dates(void)
{
	int date, month, year, calc;
	cout << "Enter Date: ";
	cin >> date;
	cout << "\nEnter Month: ";
	cin >> month;
	cout << "\nEnter Year (two digits): ";
	cin >> year;
	cout << endl;
	
	calc = date * month;

	//E.G. 6/10/66 is considered a magic date (6 * 10 = 66)
	if (calc == year)
	{
		cout << "Date is magic\n";
	}
	else
	{
		cout << "Date is not magic\n";
	}
}

void Four_Area_Of_Rectangles(void)
{
	//area = length * width
	int areaone, length, width, areatwo;

	cout << "Length and Width of rectangle ONE: ";
	cin >> length >> width;
	areaone = length * width;
	cout << endl;

	cout << "Length and Width of rectangle TWO: ";
	cin >> length >> width;
	areatwo = length * width;
	cout << endl;

	int result = Helper_Int_Is_Larger(areaone, areatwo);

	if (result == areaone)
	{
		cout << "Rectange ONE is larger";
	}
	else if (result == areatwo)
	{
		cout << "Rectange TWO is larger";
	}
	else
	{
		cout << "BOTH rectangle SAME";
	}
}

int Five_Underweight_Overweight(double bmi)
{
	const float UNDERWEIGHT = 18.5;
	const float OVERWEIGHT = 25.0;
	
	//Used for unit testing:
	//0 = Underweight
	//1 = Optimal
	//2 = Overweight
	int result;

	if (bmi < UNDERWEIGHT)
	{
		cout << "Underweight." << endl;
		result = 0;
	}
	else if ((bmi >= UNDERWEIGHT) && (bmi <= OVERWEIGHT))
	{
		cout << "Optimal." << endl;
		result = 1;
	}
	else //bmi > OVERWEIGHT
	{
		cout << "Overweight." << endl;
		result = 2;
	}

	return result;
}

void Five_Body_Max_Index(void)
{
	float weight;
	float height;
	double bmi;

	cout << "Enter weight (in pounds) and height (in inches), seprated by space: ";
	cin >> weight >> height;
	cout << endl;

	bmi = (double)(weight * 703) / pow(height, 2);

	(void)Five_Underweight_Overweight(bmi);
}

int Six_Heavy_Little(float weight)
{
	const float TOO_HEAVY = 1000;
	const float TOO_LITTLE = 10;
	
	//Used for unit testing:
	//0 = Heavy
	//1 = Little
	//2 = Ok
	int result;

	if (weight > TOO_HEAVY)
	{
		cout << "\n Too heavy\n";
		result = 0;
	}
	else if (weight < TOO_LITTLE)
	{
		cout << "\n Too light\n";
		result = 1;
	}
	else
	{
		//Weight is normal, no output required.
		result = 2;
	}
	return result;
}

void Six_Mass_Weight(void)
{
	float mass;
	float weight;

	cout << "Enter object mass to calculate neutons: ";
	cin >> mass;

	weight = mass * 9.8f;
	cout << "\nWeight = \n" << weight << " neutons\n";

	(void)Six_Heavy_Little(weight);
}

int Seven_Min_Hours_Days(int seconds)
{
	const int MINUTE = 60;
	const int HOUR   = 3600;
	const int DAY    = 86400;

	//Used for unit testing:
	//0 = No output
	//1 = Minutes
	//2 = Hours
	//3 = Days
	int result = 0;

	if (seconds < MINUTE)
	{
		result = 0;
	}
	else if ( (seconds < HOUR))
	{
		cout << "Minutes: " << ((float)seconds / MINUTE) << endl;
		result = 1;
	}
	else if (seconds < DAY)
	{
		cout << "Hours: " << ((float)seconds / HOUR) << endl;
		result = 2;
	}
	else if (seconds >= DAY)
	{
		cout << "Days: " << ((float)seconds / DAY) << endl;
		result = 3;
	}
	return result;
}

void Seven_Time_Calculator(void)
{
	int seconds;
	cout << "Enter seconds: ";
	cin >> seconds;
	cout << endl;

	(void)Seven_Min_Hours_Days(seconds);
}

void Eight_Colour_Mixer(void)
{
	string iOne;
	string iTwo;
	int invalidInput = false;
	cout << "Enter two primary colours (capital first letter), separated by spaces...";
	cin >> iOne >> iTwo;

	//Vet input
	if ( (iOne == "Red") || (iOne == "Blue") || (iOne == "Yellow") )
	{
		if ( (iTwo == "Red") || (iTwo == "Blue") || (iTwo == "Yellow") )
		{
			//All inputs vetted.
			if ((iOne == "Red") && (iTwo == "Blue"))
			{
				cout << "Purple" << endl;
			}
			else if ((iOne == "Red") && (iTwo == "Yellow"))
			{
				cout << "Orange" << endl;
			}
			else if ((iOne == "Blue") && (iTwo == "Yellow"))
			{
				cout << "Green" << endl;
			}
			else
			{
				//No requirement given for when no matching combination to above given, hence default output
				cout << "No match" << endl;
			}
		}
		else
		{
			invalidInput = true;
		}
	}
	else
	{
		invalidInput = true;
	}

	if (invalidInput)
	{
		cout << "Error, invalid input... no action preformed!!!" << endl;
	}
}

void Nine_Dollar_Game(void)
{
	//How many to make dollar???
	//100 penies = 0.01
	//20 nickels = 0.05
	//10 dimes   = 0.1
	//4 quarters = 0.25
	int pennies = 0;
	int nickels = 0;
	int dimes = 0;
	int quarter = 0;
	float result = 0;

	cout << "\nPennies: ";
	cin >> nickels;
	cout << "\nNickels: ";
	cin >> nickels;
	cout << "\nDimes: ";
	cin >> dimes;
	cout << "\nQuarter: ";
	cin >> quarter;

	result = (pennies * 0.01f) + (nickels * 0.05f) + (dimes * 0.1f) + (quarter * 0.25f);

	if (result == 1)
	{
		cout << "\nCongratulations for winning!!!\n";
	}
	else
	{
		if (result > 1)
		{
			cout << "\nResult was more than...\n";
		}
		else
		{
			cout << "\nResult was less than...\n";
		}
	}
}

void Ten_Days_In_Month(void)
{
	int month = 0;
	int year = 0;
	bool leapyear = false;
	while (1)
	{
		//Vet user input and only continue forward if accepted...
		cout << "Enter a month (1 - 12): ";
		cin >> month;
		if (month < 1 || month > 12)
		{
			cout << "\n";
			continue;
		}
		else
		{
			break;
		}
	}
	cout << "\nEnter a year: ";
	cin >> year;

	//Calculate and determine leap year based on algorithm provided by book.
	if ( ((year % 100) == 0) && ((year % 400) == 0) )
	{
		leapyear = true;
	}
	else if ((year % 4) == 0)
	{
		leapyear = true;
	}
	else
	{
		//No action
		;
	}

	switch (month)
	{
		case 2:
			cout << "\n" << ((leapyear) ? "29" : "28");
			break;

		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:
			cout << "\n31 days";
			break;

		case 4:
		case 6:
		case 9:
		case 11:
			cout << "\n30 days";
			break;

		default:
			//Not possible to reach here due to validation checks done in while loop.
			cout << "ERROR";
			break;
	}
}

void Eleven_Math_Tutor(void)
{
	const int MAX_RANGE = 1000, MIN_RANGE = 1;
	int random_one, random_two, total;
	int userinput;
	//Random generation seed setup
	unsigned int seed = (unsigned int)time(0);
	srand(seed);

	random_one = (rand() % (MAX_RANGE - MIN_RANGE + 1)) + MIN_RANGE;
	random_two = (rand() % (MAX_RANGE - MIN_RANGE + 1)) + MIN_RANGE;
	total = random_one + random_two;

	cout << " " << random_one << endl;
	cout << "+" << random_two << endl;
	cout << "-----";
	//cin.ignore(); //Wait for user input

	cout << "\nAnswer: ";
	cin >> userinput;
	if (userinput == total)
	{
		cout << "\nCongratulations";
	}
	else
	{
		cout << "\nAnswer was: " << total;
	}
	cout << endl;
}

void Twelve_Software_Sales(void)
{
	const int PACKAGE_COST = 99; //$99
	int units_sold;
	float discount;
	float totalcost;
	
	while (1)
	{
		cout << "Enter units sold: ";
		cin >> units_sold;
		//Validation Input
		if (units_sold > 0)
		{
			break;
		}
		cout << "\n";
	}

	totalcost = (float)units_sold * PACKAGE_COST;
	
	if ( (units_sold >= 10) && (units_sold <= 19))
	{
		discount = 0.2f;
	}
	else if ((units_sold >= 20) && (units_sold <= 49))
	{
		discount = 0.3f;
	}
	else if ((units_sold >= 50) && (units_sold <= 99))
	{
		discount = 0.4f;
	}
	else if ((units_sold >= 100))
	{
		discount = 0.5f;
	}
	else
	{
		discount = 0;
	}

	if (discount != 0)
	{
		totalcost -= (totalcost * discount);
	}

	cout << "\nTotal cost: " << totalcost;
}

void Thirteen_Book_Club_Points(void)
{
	int book_purchased;

	cout << "Enter number of books purchased: ";
	cin >> book_purchased;

	cout << endl;
	if (book_purchased == 0)
	{
		cout << "0 ";
	}
	else if (book_purchased == 1)
	{
		cout << "5 ";
	}
	else if (book_purchased == 2)
	{
		cout << "15 ";
	}
	else if (book_purchased == 3)
	{
		cout << "30 ";
	}
	else if (book_purchased >= 4)
	{
		cout << "60 ";
	}
	cout << "points" << endl;
}

void Fourteen_Bank_Charges (void)
{
	//$10 per month +
	//.10 if < 20 checks
	//.08 if 20-39
	//.06 for 40 - 59 checks
	//.04 for 60 or more
	//EXTRA charge if account $400 below.
	float start_balance;
	float checks;
	float charge = 0;

	cout << "Enter Balance: ";
	cin >> start_balance;

	if (start_balance < 0)
	{
		cout << "URGENT: ACCOUNT OVERDRAWN" << endl;
	}
	else
	{
		while (1)
		{
			cout << "\nEnter number of checks: ";
			cin >> checks;
			if (checks >= 0)
			{
				break;
			}
			cout << endl;
		}

		cout << endl;

		//Set decimal position to reflect dollar output (2 decimal places).
		cout << fixed << setprecision(2);

		//Calculate bank charge based on quantity of checks
		if (checks < 20)
		{
			charge = checks * 0.10f;
		}
		else if ((checks >= 20) && (checks <= 39))
		{
			charge = checks * 0.08f;
		}
		else if ((checks >= 40) && (checks <= 59))
		{
			charge = checks * 0.06f;
		}
		else if (checks >= 60)
		{
			charge = checks * 0.04f;
		}

		//Check if extra charge applies if balance less than $400
		if (start_balance < 400)
		{
			charge += 15.00f;
		}

		cout << "Bank Service Fee: $" << charge << endl;
	}
}

void Fifteen_Shipping_Charges(void)
{
	const float RATE_PER_MILES = 500;

	//This program assumes weight and distance to be whole values, not decimal values
	int weight;
	int distance;
	float distance_chargerate = 0;
	float weight_chargerate = 0;

	//Vet weight based on book requirements
	while (1)
	{
		const int MIN = 0;
		const int MAX = 20;
		cout << "Enter whole weight (kg, no decimal): ";
		cin >> weight;

		if ((weight <= MIN) || (weight > MAX))
		{
			//Not acceptable range, repeat while loop
			continue;
		}
		else
		{
			//Acceptable input, continue
			break;
		}
		cout << endl;
	}

	//Vet distance based on book requirements
	while (1)
	{
		const int MIN = 10;
		const int MAX = 3000;
		cout << "Enter distance: ";
		cin >> distance;

		if ((distance < MIN) || (distance > MAX))
		{
			continue;
		}
		else
		{
			break;
		}
		cout << endl;
	}

	//Calculate base rate for weight given per 500 miles
	if (weight <= 2)
	{
		distance_chargerate = (float)1.10;
	}
	else if ((weight > 2) && (weight <= 6))
	{
		distance_chargerate = (float)2.20;
	}
	else if ((weight > 6) && (weight <= 10))
	{
		distance_chargerate = (float)3.70;
	}
	else if ((weight > 10) && (weight <= 20))
	{
		distance_chargerate = (float)4.80;
	}

	//Identify how many times base rate must increase if distance more than 500 miles.
	if (distance <= 500)
	{
		weight_chargerate = 1;
	}
	else
	{
		weight_chargerate = (distance / RATE_PER_MILES);
	}

	cout << setprecision(2) << fixed;
	cout << "Charges: $" << (distance_chargerate * weight_chargerate) << endl;
}

void Helper_Vet_Input()
{
	while (1)
	{

	}
}
void Sixteen_Running_Race(void)
{
	string runner_one;
	float time_s;
	string runner_two;
	string runner_three;
	cout << "Enter name of first runner: ";
	cin >> runner_one;

	cout << "Enter name of second runner: ";
	cin >> runner_two;
	cout << "Enter name of third runner: ";
	cin >> runner_three;
}