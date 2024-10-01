#include "pch.h"
#include "CppUnitTest.h"
#include "../lab_5_1/lab_5_1.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			

			//double k = (f(1, 1, 1) + f(1, 1, 1)) / (1 + pow(f(1, 1, 1), 2));
			//Assert::AreEqual(k, 0.44714);
                
			double tolerance = 0.000001;
			double k = (f(1, 1, 1) + f(1, 1, 1)) / (1 + pow(f(1, 1, 1), 2));
			double expectedValue = 0.44714;

			Assert::IsTrue(abs(k - expectedValue) < tolerance);



		}
	};
}
