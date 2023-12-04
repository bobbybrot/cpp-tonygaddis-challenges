#include "pch.h"
#include "CppUnitTest.h"
#include "../Project/CH4.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest
{
	TEST_CLASS(UnitTest)
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

			Assert::AreEqual(1, Six_Heavy_Little(9));
			Assert::AreEqual(2, Six_Heavy_Little(10));
			Assert::AreEqual(2, Six_Heavy_Little(11));

			Assert::AreEqual(2, Six_Heavy_Little(999));
			Assert::AreEqual(2, Six_Heavy_Little(1000));
			Assert::AreEqual(0, Six_Heavy_Little(1001));
		}
	};
}
