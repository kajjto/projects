#include <iostream>
#include <fstream>
#include <string>
#include <windows.h>

using namespace std;


int first()
{
	setlocale(LC_CTYPE, "Russian");
	string fileName;
	ifstream fin;
	char c;

	while (true) {
		cout << "������� �������� ���������� �����\n(���� � ����, ���� �� �� ��������� � ��� �� ���������� ��� � �����)" << endl;
		cin >> fileName;

		fin.open(fileName, ios::in);
		if (!fin.is_open()) {
			cout << "���� �� ������" << endl;
		}
		else {
			while (!fin.eof()) {
				c = fin.get();
				if (c != '�')
					cout << c;
			}
			cout << endl << endl;
			fin.close();
		}
	}
}
