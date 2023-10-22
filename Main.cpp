#include <iostream>
#include "IsKPeriodic.h"
using namespace std;

int main()
{
	setlocale(LC_ALL, "");
	string string;
	int K = 0;
	while (string != "exit")
	{
		cout << "Введите строку:" << endl;
		cin >> string;
		cout << "Введите значение кратности строки:" << endl;
		cin >> K;
		if (IsKPeriodic(string, K))
			cout << "Строка " << string << " кратна " << K << "." << endl;
		else
			cout << "Строка " << string << " не кратна " << K << "." << endl;
	}

	return 0;
}