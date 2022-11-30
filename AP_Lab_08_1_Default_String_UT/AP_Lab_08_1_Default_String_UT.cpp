// ����������� ���������, в-11, ��, unit-���� �� �� 8.1 (���. ��. �����. string)
#include "pch.h"
#include "CppUnitTest.h"
#include "../AP_Lab_08_1_Default_String/AP_Lab_08_1_Default_String.cpp"
#include <string>

using namespace Microsoft::VisualStudio::CppUnitTestFramework;
using namespace std;

namespace APLab081DefaultStringUT
{
	TEST_CLASS(APLab081DefaultStringUT)
	{
		
	public:
		TEST_METHOD(TestCount)
		{
			string stringToTest = "a b c abc helloabc helloab c a_b_c dabc";

			int expectedCount = 3, actualCount = CountGroups(stringToTest);

			Assert::AreEqual(expectedCount, actualCount);
		}
	};
}
