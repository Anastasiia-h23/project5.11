#include "pch.h"
#include "CppUnitTest.h"
#include "../5.1/5.1.cpp"


using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest51
{
	TEST_CLASS(UnitTest51)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			double c;
			c = h(2,3);
			Assert::AreEqual(c, 0.162162, 0.00001);

		}
	};
}
