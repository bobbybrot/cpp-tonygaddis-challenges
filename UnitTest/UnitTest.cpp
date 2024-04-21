#include "pch.h"
#include "CppUnitTest.h"
#include "../Project/CH4.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest
{
	TEST_CLASS(UnitTest)
	{
	public:
		
		TEST_METHOD(CHAPTER4_TASK19)
		{
			//Tests verifying edge cases and desired output based on given decimal value
			char test[14] = { 0 };
			double test_data;

			test_data = 1E-2 + 1E-3;
			Helper_Nineteen_Output(test_data, test);
			Assert::IsTrue(strcmp(test, "RADIOWAVES") == 0);
			test_data = 1E-2;
			Helper_Nineteen_Output(test_data, test);
			Assert::IsTrue(strcmp(test, "RADIOWAVES") == 0);
			test_data = 1E-2 - 1E-3;
			Helper_Nineteen_Output(test_data, test);
			Assert::IsTrue(strcmp(test, "MICROWAVES") == 0);
			test_data = 1E-3 + 1E-4;
			Helper_Nineteen_Output(test_data, test);
			Assert::IsTrue(strcmp(test, "MICROWAVES") == 0);
			test_data = 1E-3;
			Helper_Nineteen_Output(test_data, test);
			Assert::IsTrue(strcmp(test, "MICROWAVES") == 0);
			test_data = 1E-3 - 1E-4;
			Helper_Nineteen_Output(test_data, test);
			Assert::IsTrue(strcmp(test, "INFRARED") == 0);
			
			test_data = 7E-7 + 1E-8;
			Helper_Nineteen_Output(test_data, test);
			Assert::IsTrue(strcmp(test, "INFRARED") == 0);
			test_data = 7E-7;
			Helper_Nineteen_Output(test_data, test);
			Assert::IsTrue(strcmp(test, "INFRARED") == 0);
			test_data = 7E-7 - 1E-8;
			Helper_Nineteen_Output(test_data, test);
			Assert::IsTrue(strcmp(test, "VISIBLELIGHT") == 0);
			
			test_data = 4E-7 + 1E-8;
			Helper_Nineteen_Output(test_data, test);
			Assert::IsTrue(strcmp(test, "VISIBLELIGHT") == 0);
			test_data = 4E-7;
			Helper_Nineteen_Output(test_data, test);
			Assert::IsTrue(strcmp(test, "VISIBLELIGHT") == 0);
			test_data = 4E-7 - 1E-8;
			Helper_Nineteen_Output(test_data, test);
			Assert::IsTrue(strcmp(test, "ULTRAVIOLET") == 0);
			
			test_data = 1E-8 + 1E-9;
			Helper_Nineteen_Output(test_data, test);
			Assert::IsTrue(strcmp(test, "ULTRAVIOLET") == 0);
			test_data = 1E-8;
			Helper_Nineteen_Output(test_data, test);
			Assert::IsTrue(strcmp(test, "ULTRAVIOLET") == 0);
			test_data = 1E-8 - 1E-9;
			Helper_Nineteen_Output(test_data, test);
			Assert::IsTrue(strcmp(test, "XRAYS") == 0);
			
			test_data = 1E-11 + 1E-12;
			Helper_Nineteen_Output(test_data, test);
			Assert::IsTrue(strcmp(test, "XRAYS") == 0);
			test_data = 1E-11;
			Helper_Nineteen_Output(test_data, test);
			Assert::IsTrue(strcmp(test, "XRAYS") == 0);
			test_data = 1E-11 - 1E-12;
			Helper_Nineteen_Output(test_data, test);
			Assert::IsTrue(strcmp(test, "GAMMARAYS") == 0);
		}
	};
}
