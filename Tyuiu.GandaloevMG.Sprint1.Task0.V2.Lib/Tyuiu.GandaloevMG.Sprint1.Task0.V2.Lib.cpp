// Tyuiu.GandaloevMG.Sprint1.Task0.V2.Lib.cpp : Defines the functions for the static library.
//

#include "pch.h"
#include "framework.h"
#include "../../Tyuiu.GandaloevMG.Sprint0/Tyuiu.Cours.cpp/Tyuiu.Cours.cpp.cpp"

class Service :public ISprint1Task0V01
	
{
public:
	virtual int Rezalt(int a, int b, int c) override
	{
		return  2 * (a * c + b * c);
	};
};