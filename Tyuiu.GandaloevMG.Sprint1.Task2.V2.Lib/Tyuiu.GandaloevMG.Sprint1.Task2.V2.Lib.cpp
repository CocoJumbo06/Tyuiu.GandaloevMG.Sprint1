// Tyuiu.GandaloevMG.Sprint1.Task2.V2.Lib.cpp : Defines the functions for the static library.
//

#include "pch.h"
#include "framework.h"
#include "../../Tyuiu.GandaloevMG.Sprint0/Tyuiu.Cours.cpp/Tyuiu.Cours.cpp.cpp"

class Service :public ISprint1Task2
{
public:
	virtual int LogicLong(int a) override
	{
		return  a / 5;
	}
};
