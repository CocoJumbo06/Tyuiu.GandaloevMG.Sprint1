#include "pch.h"
#include "CppUnitTest.h"
#include "../Tyuiu.GandaloevMG.Sprint1.Task0.V2.Lib/Tyuiu.GandaloevMG.Sprint1.Task0.V2.Lib.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest
{
	TEST_CLASS(UnitTest)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			ISprint1Task0V01* date = new Service();
			int a = 3;
			int b = 4;
			int c = 2;
			int s;

			s = date->Rezalt(a, b,c);

			Assert::AreEqual(28, s);

		}
	};
}
