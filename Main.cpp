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
		cout << "������� ������:" << endl;
		cin >> string;
		cout << "������� �������� ��������� ������:" << endl;
		cin >> K;
		if (IsKPeriodic(string, K))
			cout << "������ " << string << " ������ " << K << "." << endl;
		else
			cout << "������ " << string << " �� ������ " << K << "." << endl;
	}

	return 0;
}