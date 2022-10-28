// WDP_2_KT.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>
using namespace std;
int main()
{


	////0-100%, 50% włącznie
	//int num;
	//cout << "Enter a precentage (0-100) to check if you've passed." << endl;
	//cin >> num;

	//if (num < 0 || num > 100) {
	//	cout << "Wrong number";
	//}
	//else {
	//	if (num < 50) {
	//		cout << "You've failed the exam";
	//	}
	//	else{
	//		cout << "You've pass the exam";
	//	}
	//}


	/*
	ZADANIE 1
	
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
			cout << "Zysk: " << cena* -1;
		 }
		else {
			cout << "Nic nie zarobiles";

		}
	}*/



	/*
	ZADANIE 2
	
	int year;
	cout << "Podaj rok" << endl;
	cin >> year;

	if(year % 4 == 0  && year % 100 != 0 || year % 400 == 0 ){
		cout << "Jest to rok przestepny";
	}
	else{
		cout << "Nie jest przestepny";
	}*/





	int hour;
	string godz;
	int licznik;
	cout << "Wpisz godzine miedzy 1 a 12: ";
	cin >> hour;
	
	cout << "am czy pm?";
	cin >> godz;

	cout << "Ile godzin w przod?";
	cin >> licznik;

	int end = hour + licznik;

	if ( end > 12) {
		cout << end - 12;
	}

}
