#include <iostream>
#include <vector>
#include <set>
using namespace std;

int foo(int a)
{
	if (a == 0 || a == 1)
		return 2;
	return foo(a - 2)+1;
}
int a;
int b;
int c;

void zad1() {
	cout << "\n Zadanie 1" << endl;
	cout << "Podaj pierwsza liczba:";
	cin >> a;
	cout << "Podaj druga liczba:";
	cin >> b;
	cout << "Podaj trzecia liczba:";
	cin >> c;
	
	if ((a * a) + (b * b) == (c * c)) {
		cout << "Jest to pitagoras";
	}
	else {
		cout << "Nie jest to pitagoras";
	}
	cout << (a*a) + (b*b) << "="  <<(c * c);

}

int zad2(int n) {
	cout << "\n Zadanie 2" << endl;;
		for (int i = 1; i*i <= n; i++) 
		{
			if (i * i == n) 
				return 1;
		}
		return 0;
}

void zad3(int arg[], int rozmiar) {
	cout << "\n Zadanie 3" << endl;       //h sie zwieksza co przejscie petli 
	int h = 0;
	for (int i = 0; i < rozmiar; i++) {
		if (arg[i] % 2 == 0) {
			h++;
			
		}
	}
	
	cout << h;
}
void zad4() {
	cout << "\n Zadanie 4";
	int n;
	cout << "\n Podaj liczbe";
	cin >> n;
	vector<double> numbers;
	double number;
	for (int i = 0; i < n; i++) {
		cin >> number;
		if (number == (int)number) {
			numbers.push_back(number);
		}
	}
	for (int i = 0; i < numbers.size(); i++) {
		cout << numbers[i] << " ";
	}
}


void zad5(int n) {
	cout << "\n Zadanie 5";
	for (int i = n; i > 0; i--) {
		for (int k = n; k > i; k--) {
			if ((i * i) + (k * k) == n) {
				cout<< i << " oraz " << k;
			}
		}
	}
}


int main()
{
	int a = 7; //a= 7
	int b = (a += 6); // a= 13  , b=13
	int c = (b *= 2) / 3; // a= 13, b= 26 , c=8
	b = foo(a);  // a=13  , b= 8 , c=8
	c = ++b;  // a=13  , b= 9 , c=9

	zad1();
	int n = 2;
	cout << zad2(n);
	
	int tab[] = {1,2,3,4,5,6,8,10,12,11,18,24};
	int size = sizeof(tab) / sizeof(int);
	zad3(tab, size);

	zad4();

	int n1 = 4;
	 zad5(n1);
}