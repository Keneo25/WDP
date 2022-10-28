// WDP_ZADANIE_3_KT.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>
using namespace std;
int main()
{
 

	int hour;
	string godz;
	string am = "am";
	string pm = "pm";
	int licznik;
	cout << "Wpisz godzine miedzy 1 a 12: ";
	cin >> hour;

	if (hour < 0 || hour > 12) {
		cout << "Zla liczba ";
		return 1;
	}

	cout << "am czy pm?";
	cin >> godz;
	if (godz.compare(am) == 0 || godz.compare(pm) == 0) {

		cout << "Ile godzin w przod?";
		cin >> licznik;

		int end = hour + licznik;

		if (end > 12) {
			cout << end % 12;
		}
		int day = end / 12;
		if (godz == "am") {
			if (day % 2 == 0) {
				cout << "am";
			}
			else {
				cout << "pm";
			}
		}
		if (godz == "pm") {
			if (day % 2 != 0) {
				cout << "am";
			}
			else {
				cout << "pm";
			}
		}
	}
	else {
		cout << "Zla wartosc";
	}

}


