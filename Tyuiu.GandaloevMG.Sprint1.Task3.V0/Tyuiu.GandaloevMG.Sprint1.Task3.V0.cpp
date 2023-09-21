// Tyuiu.GandaloevMG.Sprint1.Task3.V0.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "../Tyuiu.GandaloevMG.Sprint1.Task3.V0.Lib/Tyuiu.GandaloevMG.Sprint1.Task3.V0.Lib.cpp"
using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");
    ISprint1Task3* date = new Service();
    cout << "Gandaloev\n";
    int a;
    cout << "¬ведите четырехзначное число:";
    cin >> a;
    int b;
    if (a != 1000 and (a % 4) == 0 and  a % 2 == 0)
    {
        b = a * 2;
        cout << b<<endl;
        
    }
    else
    {
         b = a / 5;
         cout << b<<endl;
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
