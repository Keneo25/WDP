// WDP_ZADANIE_1_KT.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>
using namespace std;
int main()
{
	
	int product;
	cout << "Wpisz cene produktu" << endl;
	cin >> product;
	int sold;
	cout << "Wpisz cene sprzedazy" << endl;
	cin >> sold;
	int cena = product - sold;
	if (cena > 0) {
		cout << "Strata: " << cena ;

	}
	else {
		if(cena < 0) {
			cout << "Zysk: " << cena * -1;
		 }
		else {
			cout << "Nic nie zarobiles";

		}
	}
}

