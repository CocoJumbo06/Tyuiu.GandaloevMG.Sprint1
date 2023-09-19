#include "pch.h"
#include "CppUnitTest.h"
#include "../Tyuiu.GandaloevMG.Sprint1.Task1.V2.Lib/Tyuiu.GandaloevMG.Sprint1.Task1.V2.Lib.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			ISprint1Task1* date = new Service();
			int a = 26;
			int b = 13;
			int s;

			s = date->Logic(a, b);

			Assert::AreEqual(2, s);

		}
	};
}
