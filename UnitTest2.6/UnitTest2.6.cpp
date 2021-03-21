#include "pch.h"
#include "CppUnitTest.h"
#include "../2.6/Date.h"
#include "../2.6/Date.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest26
{
	TEST_CLASS(UnitTest26)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Date::Triad a(5, 5, 5), b(5, 5, 5);
			Assert::AreEqual(a == b, true);

		}
	};
}
