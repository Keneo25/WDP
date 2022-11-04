// k2.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>
using namespace std;
int main()
{


	// ZADANIE 3 ciąg fibonacciego
    
	cout << "Wpisz liczbe: ";
	int n = 0;
	cin >> n;
	if (n <= 0) {
		cout << " Wynik: 0";

	}

	int prev = 1;
	int prev2 = 0;
	cout << "Wynik: 0, 1, ";
	int i = 2;
	while (i < n) {

		int sum = prev2 + prev;
		prev2 = prev;
		prev = sum;
		cout << sum << ", ";
		i++;



	}




}


