#include <iostream>
using namespace std;

int first();
int second();

void main()
{
	setlocale(LC_CTYPE, "Russian");
	int a;
	cout << "�������� ������" << endl;
	cin >> a;
	switch (a) 
	{
	     case 1: first(); break;
		 case 2: second(); break;
		 default:cout << "������ ������ ���" << endl;
	}
	
}