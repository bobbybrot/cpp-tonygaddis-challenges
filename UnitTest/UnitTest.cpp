#include "pch.h"
#include "CppUnitTest.h"
#include "../Project/CH4.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

/*
* NOTE:
* The below are experiments with using Visual Studio projects to setup unit testing for some of the challenges performed.
* There was no requirement by C++ book to create unit tests.
*/

namespace UnitTest
{
	TEST_CLASS(UnitTestEdgeCases)
	{
	public:
		
		TEST_METHOD(Five_Underweight_Overweight_UNITTEST)
		{
			Assert::AreEqual(0, Five_Underweight_Overweight(18.4));
			Assert::AreEqual(1, Five_Underweight_Overweight(18.5));
			Assert::AreEqual(1, Five_Underweight_Overweight(18.6));

			Assert::AreEqual(1, Five_Underweight_Overweight(24.9));
			Assert::AreEqual(1, Five_Underweight_Overweight(25.0));
			Assert::AreEqual(2, Five_Underweight_Overweight(25.1));
		}

		TEST_METHOD(Six_Heavy_Little_UNITTEST)
		{
			Assert::AreEqual(1, Six_Heavy_Little(9.0));
			Assert::AreEqual(2, Six_Heavy_Little(10.0));
			Assert::AreEqual(2, Six_Heavy_Little(11.0));

			Assert::AreEqual(2, Six_Heavy_Little(999.0));
			Assert::AreEqual(2, Six_Heavy_Little(1000.0));
			Assert::AreEqual(0, Six_Heavy_Little(1001.0));
		}

		TEST_METHOD(Seven_Min_Hours_Days_UNITTEST)
		{
			Assert::AreEqual(0, Seven_Min_Hours_Days(59));
			Assert::AreEqual(1, Seven_Min_Hours_Days(60));
			Assert::AreEqual(1, Seven_Min_Hours_Days(61));
			
			Assert::AreEqual(1, Seven_Min_Hours_Days(3599));
			Assert::AreEqual(2, Seven_Min_Hours_Days(3600));
			Assert::AreEqual(2, Seven_Min_Hours_Days(3601));
			
			Assert::AreEqual(2, Seven_Min_Hours_Days(86399));
			Assert::AreEqual(3, Seven_Min_Hours_Days(86400));
			Assert::AreEqual(3, Seven_Min_Hours_Days(86401));
		}
	};
}
