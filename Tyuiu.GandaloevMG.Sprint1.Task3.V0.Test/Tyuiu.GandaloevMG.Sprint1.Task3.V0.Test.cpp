#include "pch.h"
#include "CppUnitTest.h"
#include "../Tyuiu.GandaloevMG.Sprint1.Task3.V0.Lib/Tyuiu.GandaloevMG.Sprint1.Task3.V0.Lib.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest3
{
	TEST_CLASS(UnitTest3)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			ISprint1Task3* date = new Service();
			int a = 1220;
			int b;
			b = date->LogicLong(a);
			Assert::AreEqual(2440, b);
		};
	};
}
