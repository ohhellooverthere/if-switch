// if 22.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;


int main()
{
	setlocale(LC_ALL, "rus");
	//Даны координаты точки, не лежащей на координатных осях OX и OY. Номер координатной четверти, в которой находится данная точка.//
	int x, y;
	cout << "x=";
	cin >> x;
	cout << "y=";
	cin >> y;
	if ((x > 0) && (y > 0))
		cout << "Точка лежит в первой четверти";
	if ((x < 0) && (y > 0))
		cout << "Точка лежит во второй четверти";
	if ((x < 0) && (y < 0))
		cout << "Точка лежит в третей четверти";
	if ((x > 0) && (y < 0))
		cout << "Точка лежит в четвертой четверти"; 
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
