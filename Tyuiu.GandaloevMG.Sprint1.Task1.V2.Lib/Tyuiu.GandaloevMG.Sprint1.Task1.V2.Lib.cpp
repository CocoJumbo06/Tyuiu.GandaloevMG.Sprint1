// Tyuiu.GandaloevMG.Sprint1.Task1.V2.Lib.cpp : Defines the functions for the static library.
//

#include "pch.h"
#include "framework.h"
#include "../../Tyuiu.GandaloevMG.Sprint0/Tyuiu.Cours.cpp/Tyuiu.Cours.cpp.cpp"

class Service :public ISprint1Task1
{
public:
	virtual int Logic(int a, int b) override 
	{
		return  a / b;
	};
};
