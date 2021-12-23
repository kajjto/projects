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
		cout << "¬ведите название текстового файла\n(путь к нему, если он не находитс€ в той же директории что и прога)" << endl;
		cin >> fileName;

		fin.open(fileName, ios::in);
		if (!fin.is_open()) {
			cout << "‘айл не найден" << endl;
		}
		else {
			while (!fin.eof()) {
				c = fin.get();
				if (c != '€')
					cout << c;
			}
			cout << endl << endl;
			fin.close();
		}
	}
}
