#include "pch.h"
#include "CppUnitTest.h"
#include "../Tyuiu.GandaloevMG.Sprint1.Task2.V2.Lib/Tyuiu.GandaloevMG.Sprint1.Task2.V2.Lib.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest2
{
	TEST_CLASS(UnitTest2)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			ISprint1Task2* date = new Service();
			int a = 1000;
			
			int s;

			s = date->LogicLong(a);

			Assert::AreEqual(200, s);

		}
	};
}
