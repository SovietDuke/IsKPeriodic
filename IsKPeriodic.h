#pragma once
#include <iostream>

bool IsKPeriodic(std::string str, int K)
{
	if (K <= 0 ) // �������� � �.�. ������ 0
		return 0;
	int size = str.size();
	if (size == K) // ���� ����� �������� ������ ����� �������� K, �� ���������� "�����" 
		return 1;
	else if (size % K != 0) // ����� ����� �������� ������ �.�. ������ �������� �
		return 0;
	std::string str0 = str.substr(0, K); // ��������� ��������� ������ ������ ������ � �������� �������� ������
	for (int j = K; j < size; j += K) // ���� �������� ������ ������� ������ �� ������������� ���������, �� ������� "�����", ����� "����"
	{
		if (str.substr(j, K) != str0)
			return 0;
	}
	return 1;
}
