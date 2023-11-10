#include "pch.h"
#include "CppUnitTest.h"
#include "../54/Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest54
{
	TEST_CLASS(UnitTest54)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			double t;
			t= S1(1,2,3);
			Assert::AreEqual(t, 0, 0.0001);
		}
	};
}
