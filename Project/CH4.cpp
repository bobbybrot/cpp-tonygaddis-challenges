/*
* Chapter 4: Making Decisions
* Book Pages: 151 - 231
*
* NOTE: Each programming challenge are separated into their own functions.
*/

#include<iostream>
#include<string>
using namespace std;

//Miscellaneous function to test string comparison.
//Multiple conflicts was found with the checkpoint answers provided by regarding string comparisons, thus
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

		if (action == EQUAL_TOO && (strone == strtwo))
		{
			actionTrue = true;
		}
		else if (action == LESS_THAN && (strone < strtwo))
		{
			actionTrue = true;
		}
		else if (action == MORE_THAN && (strone > strtwo))
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


int main()
{
	return 0;
}