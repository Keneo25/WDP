// petle.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>
using namespace std;
int main()
{

	//ZADANIE 1


	/*
	int n = 51;
	for (int i = 0; i <= 50; i++) {
		cout << i << ", ";
	}
	while (n <= 100) {
		cout << n << ", ";
		n++;
	}*/



	//ZADANIE 2
	//int n;
	//int p = 1;
	//cout << "Wpisz liczbe: ";
	//cin >> n;

	//for (int i = n; i > 1; i--) 
	//	p = p * i;
	//	cout << "Rozwiazanie: " << n << "! = " << p;
	//	


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



