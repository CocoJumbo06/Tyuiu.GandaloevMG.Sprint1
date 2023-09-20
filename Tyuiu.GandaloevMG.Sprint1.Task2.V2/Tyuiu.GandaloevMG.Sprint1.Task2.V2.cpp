// Tyuiu.GandaloevMG.Sprint1.Task2.V2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "../Tyuiu.GandaloevMG.Sprint1.Task2.V2.Lib/Tyuiu.GandaloevMG.Sprint1.Task2.V2.Lib.cpp"
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	ISprint1Task2* date = new Service();
	cout << "Gandalow " << "Muhammad " << "Ahmetovich\n";
	int a;
	int b;
	int s;
	cout << "Введите четырехзначное число:";
	cin >> a;
	b = a % 10 + a / 10 % 10 + a / 100 % 10 + a / 1000;
	cout <<"Сумма цифр: "<< b << endl;
	s = b / 5;
	if ((b % 5)==0 )
	{
		cout << "Сумма цифр числа кратно 5\n" << "Ответ: " << s << endl;

	}
	else
	{
		cout << "Сумма цифр веденного вами числа не кратно 5\n"<<"Попробуйте снова"<<endl;
	}
	cout << "END";
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
