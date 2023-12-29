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
	//10 dimes   = 0.01
	//4 quarters = 0.25

}

int main() 
{
	//One_Minimum_Maximum();
	//Two_Roman_Numerical_Converter();
	//Three_Magic_Dates();
	//Four_Area_Of_Rectangles();
	//Five_Body_Max_Index();
	//Six_Mass_Weight();
	//Seven_Time_Calculator();
	//Eight_Colour_Mixer();

	return 0;
}