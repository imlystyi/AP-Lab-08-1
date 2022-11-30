// Якубовський Владислав, РІ-11, АП, unit-тест до ЛР 8.1 (рек. спосіб)
#include "pch.h"
#include "CppUnitTest.h"
#include "../AP_Lab_08_1_Recursive/Lab_08_1_Recursive.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace APLab081RecursiveUT
{
	TEST_CLASS(APLab081RecursiveUT)
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
