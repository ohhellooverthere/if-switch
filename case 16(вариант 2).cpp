// case 16(вариант 2).cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	/*Дано целое число в диапазоне 20–69, определяющее возраст(в годах).

		Вывести строку - описание указанного возраста, обеспечив правильное со -
		гласование числа со словом «год», например: 20 — «двадцать лет», 32 —

		«тридцать два года», 41 — «сорок один год».*/
	setlocale(LC_ALL, "rus");
	int a;
	cout << "введите возвраст в диапазоне от 20 до 69"<<endl;
	cout << "ваш возвраст-";
	cin >> a;
	switch (a / 10) {
	case 2: {cout << "двадцать" << " "; break; }
	case 3: {cout << "тридцать" << " "; break; }
	case 4: {cout << "сорок" << " "; break; }
	case 5: {cout << "пятьдесят" << " "; break; }
	case 6: {cout << "шестьдесят"<<" "; break; }
	default:
		cout << "error";
	}
	switch (a % 10) {
	case 0: {cout << "лет"; break; }
	case 1: {cout << "один год"; break; }
	case 2: {cout << "два года"; break; }
	case 3: {cout << "три года"; break; }
	case 4: {cout << "четыре года"; break; }
	case 5: {cout << "пять лет"; break; }
	case 6: {cout << "шесть лет"; break; }
	case 7: {cout << "семь лет"; break; }
	case 8: {cout << "восемь лет"; break; }
	case 9: {cout << "девять лет"; break; }
	}
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
