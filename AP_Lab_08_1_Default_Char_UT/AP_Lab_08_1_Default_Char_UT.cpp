// Якубовський Владислав, РІ-11, АП, unit-тест до ЛР 8.1 (вик. ст. функц. char[])
#include "pch.h"
#include "CppUnitTest.h"
#include "../AP_Lab_08_1_Default_Char/AP_Lab_08_1_Default_Char.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace APLab081DefaultCharUT
{
	TEST_CLASS(APLab081DefaultCharUT)
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
