#pragma once
#include <iostream>

bool IsKPeriodic(std::string str, int K)
{
	if (K <= 0 ) // значение К д.б. больше 0
		return 0;
	int size = str.size();
	if (size == K) // если длина входящей строки равна значению K, то возвращаем "верно" 
		return 1;
	else if (size % K != 0) // иначе длина входящей строки д.б. кратна значению К
		return 0;
	std::string str0 = str.substr(0, K); // формируем временную строку равную первым К символам входящей строки
	for (int j = K; j < size; j += K) // если входящая строка состоит только из повторяющейся временной, то выводим "верно", иначе "ложь"
	{
		if (str.substr(j, K) != str0)
			return 0;
	}
	return 1;
}
