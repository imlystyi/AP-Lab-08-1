// ??????????? ?????????, в-11, ??, unit-???? ?? ?? 8.1 (??. ??????)
#include "pch.h"
#include "CppUnitTest.h"
#include "../AP_Lab_08_1_Iterative/Lab_08_1_Iterative.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace APLab081IterativeUT
{
	TEST_CLASS(APLab081IterativeUT)
	{
	public:
		
		TEST_METHOD(TestCount)
		{
			char* stringToTest = "a b c abc helloabc helloab c a_b_c dabc";

			int expectedCount = 3, actualCount = CountGroups(stringToTest);

			Assert::AreEqual(expectedCount, actualCount);
		}
	};
}
