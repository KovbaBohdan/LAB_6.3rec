#include "pch.h"
#include "CppUnitTest.h"
#include "../LAB_6.3rec/lab_6.3rec.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1LAB63rec
{
	TEST_CLASS(UnitTest1LAB63rec)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int b[] = { 1, 2, 3, 4, 5 };
			int result = Sum(b, 5, 0, 0);
			Assert::AreEqual(9, result);
		}
	};
}
