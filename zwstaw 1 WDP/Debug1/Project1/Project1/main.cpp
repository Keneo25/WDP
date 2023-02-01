#include <iostream>
#include <vector>
using namespace std;


void zad2() {
	int o = 0;
	int k[4] = {};
	int sump = 0;
	int sumn = 0;
	for (int i = 0; i < 4; i++) {
		cout << "Podaj " << o++<< " liczby:";
		cin >> k[i];
	}
	for (int j = 0; j < 4; j++) {
		if (k[j] % 2 == 0) {
			sump += k[j];
		}
		else {
			sumn += k[j];
		}
	}
	cout << "Suma patrzystych: " << sump;
	cout << endl;
	cout << "Suma nie patrzystych: " << sumn;
	
	cout << endl;
}
int f(int n);
int f(int n)
{
	if (n == 0)
	{
		return 0;
	}
	if (n == 1)
	{
		return 1;
	}
	return f(n - 1) + 2 * f(n - 2);
}
int zad4(int arg[], int size) {
	cout << "\n Zadanie 4" << endl;
	int min = 0;
	for (int i = 0; i < size; i++) {
		if (arg[i] < 0 && (arg[i] > min || min == 0))
		{
			min = arg[i];
			
		}

	}
	return min;
}
void zad5() {
	cout << "\n Zadanie 5" << endl;
	int n;
	int counter = 1;
	vector<int> numbers;
	int number;
	cout << "Wpisz liczbe ciagu: ";
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cout << "Liczba " << counter++ << " :";
	    cin >> number;                                       
		if ((number % 3 == 0) and (number % 2 != 0)) {
			numbers.push_back(number);
		}
	}
	cout << endl;
	for (int i = 0; i < numbers.size(); i++) {    // wstawianie liczb do wektora
		cout << numbers[i] << " ";
	}
	
}
int funkcja(int n);
int zad5(int n);
int funkcja(int n) {
	int i = 0;
	while (i * i <= n) {
		i++;
	}
	return i - 1;
}
int zad5(int n) {
	int zmien = 0;
	for (int i = 0; i <= n; i++) {
		zmien += funkcja(i);
	}
	return zmien;
}


int main()
{
	int tab[5] = { -3,4,-2,8,9 };
	int a = tab[2]; //a= -2
	int b = (a += 6); // a= 4  , b= 4
	int c = (b *= 2) / 3; // a= 4  , b= 8   , c= 2
	b = c ^ a;  // a= 4 , b= 6  , c= 2
 	c = ++b;  // a=4  , b=7  , c= 7

	zad2();
	int n = 0;
	cout << "\n Zadanie 3" << endl;
	cout << f(0) << endl;;
	cout << f(1) << endl;;
	cout << f(2) << endl;;
	cout << f(3) << endl;;

	int tablica[5] = { 2,4,3,5,-7 };
	int rozmiar = sizeof(tablica) / sizeof(int);

	cout << zad4(tablica, rozmiar);
	cout << "\n Zadanie 5" << endl;

	int q;
	cout << "Podaj liczbe: ";
	cin >> q;
	cout << zad5(q);

	return 0;
}