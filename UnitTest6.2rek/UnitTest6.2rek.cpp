#include "pch.h"
#include "CppUnitTest.h"
#include "../lab_6.2rek/lab_6.2rek.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest62rek
{
	TEST_CLASS(UnitTest62rek)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int a[5];
			Create(a, 5, -10, 10, 0);
			Assert::AreEqual(a[0], 10, 0);

		}
	};
}
