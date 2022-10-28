// WDP_ZADANIE_2_KT.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>
using namespace std;
int main()
{
	int year;
	cout << "Podaj rok" << endl;
	cin >> year;

	if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0) {
		cout << "Jest to rok przestepny";
	}
	else {
		cout << "Nie jest przestepny";
	}


}


