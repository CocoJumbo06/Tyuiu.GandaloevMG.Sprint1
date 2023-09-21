// Tyuiu.GandaloevMG.Sprint1.Task3.V0.Lib.cpp : Defines the functions for the static library.
//

#include "pch.h"
#include "framework.h"
#include"../../Tyuiu.GandaloevMG.Sprint0/Tyuiu.Cours.cpp/Tyuiu.Cours.cpp.cpp"
// TODO: This is an example of a library function
class Service :public ISprint1Task3
{
	virtual int LogicLong(int a) override
	{
		return a * 2;
	};
};
