#include<iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "");

	unsigned char a = 5;
	unsigned char b = ~a;
	cout << (int)b << endl;// ��������
	cout << (5 | 6) << endl;//��������� ��������
	cout << (5 & 6) << endl;//��������� ���������
	cout << (5 ^ 7) << endl;//����������� ���

	// �������� �� ������� 
	cout << (50 & (16 - 1)) << endl;// ������� �� ������� �� 16

}