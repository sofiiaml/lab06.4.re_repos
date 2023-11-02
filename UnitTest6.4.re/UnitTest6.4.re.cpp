#include "pch.h"
#include "CppUnitTest.h"
#include "../PR6.4.rek/PR6.4.rek.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest64re
{
	TEST_CLASS(UnitTest64re)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			const int n = 4;
			double a[n] = { 3.0, 1.0, 5.0, -2.0 };
			int count=CountPositiveElements(a, n,0);
			Assert::AreEqual(count,3);
		}
		TEST_METHOD(TestMethod2)
		{
			const int n= 5;
			double a[n] = { 3.0 ,6.0 ,0 ,4.0 ,2.0 };
			double sum = SumAfterLast0(a, n,0,0);
			Assert::AreEqual(sum,6,0.0000001);
		}
	};
}
