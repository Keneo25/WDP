
#include <iostream>
#include <vector>
using namespace std;

void zad2() {
	int a;
	int b;
	int c;
	cout << "Zadanie2" << endl;
	cout << "Podaj 3 liczby: " << endl;
	cin >> a;
	cin >> b;
	cin >> c;
	if ((a == b) and (a != c) and (b != c)) {
		cout << " Liczba 1 i 2 sa takie same";
	}
	else if (a == c and (a != b) and (b != c)) {
		cout << " Liczba 1 i 3 sa takie same";
	}
	else if (b == c and a != c and (a != b)) {
		cout << " Liczba 2 i 3 sa takie same";
	}
	else if ((b == c) and (b == a) and a == c) {
		cout << " Wszystkie sa takie same";
	}
	else {
		cout << " Zadna z liczb nie jest taka sama";
	}

}
int zad3(int n) {
	cout <<  "\n Zadanie 3" << endl;
	int wyn = 0;
	for (int i = 1; i <= n; i++) {
		if (i % 2 != 0) {
			wyn += i;
		}
	}
	return wyn;
}

int zad4(int tab[], int n, int m) {
	cout << "\n Zadanie4" << endl;
	int counter = 0;
	for (int i = 0; i <= m; i++) {
		if (n == tab[i]) {
			counter++;	
		}
	}
	return counter;
	for (int i = 0; i <= m; i++) {
		if (n != tab[i]) {
			return 0;
		}
	}

}

void zad5() {
	cout << "\n Zadanie 5" << endl;
	int counter = 1;
	int n;
	vector <int> vec = {};
	for (int i = 0; i < 10; i++) {
		cout << "Podaj " << counter++ << " liczbe";
		cin >> n;
		vec.push_back(n);
	}
	float sum = 0.0;
	for (int j = 0; j < vec.size(); j++) {
		sum +=  vec[j];
	}
	sum = sum / 10;
	int licznik = 0;
	for (int k= 0; k < vec.size(); k++) {
		if (sum < vec[k]) {
			licznik++;
		}
	}

	cout << sum << endl;
	cout << licznik;
	
}

int zad6(int tab[], int n) {
	cout << "\n Zadanie 6" << endl;
		for (int i = 0; i < n-1; i++) {
		if (tab[i] < tab[i+1]) {
			return 0;
		}
		return 1;
	}
}




int main()
{
	zad2();
	int k = 12;
	cout << zad3(k);

	int tab[4] = { 2,3,3,3 };
	int n = 5;
	int m = 5;
	cout << zad4(tab,n,m);

	zad5();
	int d = 5;
	int y[] = { 1,2,3,4,5 };
	cout << zad6(y, d);
}

