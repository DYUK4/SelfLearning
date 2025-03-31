#include<iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "");

	unsigned char a = 5;
	unsigned char b = ~a;
	cout << (int)b << endl;// инверсия
	cout << (5 | 6) << endl;//побитовое сложение
	cout << (5 & 6) << endl;//побитовое умножение
	cout << (5 ^ 7) << endl;//исключающее ИЛИ

	// Остатока от деления 
	cout << (50 & (16 - 1)) << endl;// остаток от деления на 16

}