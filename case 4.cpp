// case 4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
		//Дан номер месяца — целое число в диапазоне 1–12 (1 — январь, 2 - февраль и т.д.).Определить количество дней в этом месяце для невисокосного года.
		int A;
		cout << "введите месяц в формате от одного до 12" << endl;
		cin >> A;
		cout << "номер месяца=" << A << endl;
		
		switch (A) {
		case 1: {cout << "В январе 30 дней\n"; break; }
		case 2: {cout << "В феврале 28 дней\n"; break; }
		case 3: {cout << "В марте 31 день\n"; break; }
		case 4: {cout << "В апреле 30 дней\n"; break; }
		case 5: {cout << "В мае 31 день\n"; break; }
		case 6: {cout << "В июне 30 дней\n"; break; }
		case 7: {cout << "В июле 31 день\n"; break; }
		case 8: {cout << "В августе 31 дeнь\n"; break; }
		case 9: {cout << "В сентябре 30 дней\n"; break; }
		case 10: {cout << "В октябре 31 день\n"; break; }
		case 11: {cout << "В ноябре 30 дней\n"; break; }
		case 12: {cout << "В декабре 31 день\n"; break; }
			 default:
				 cout << "error";
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
