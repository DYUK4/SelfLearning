#include<iostream>
using namespace std;


void main()
{
	setlocale(LC_ALL, "");
	
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << "0 ";
		}
		cout << endl;
	}

}