
#include <iostream>
#include <vector>
using namespace std;
void zad2() {
	cout << "Zadanie 2" << endl;
	int a;
	cout << "Podaj liczbe: ";
    cin >> a;
	for (int i = 1; i <= a; i++) {
		if (i % 2 == 0) {
			cout << i << ", ";
		}
	}
}
string zad3(int n) {
	cout << endl;
	if (n == 0)
		return "2";
	else
		return zad3(n - 1) + "2";
	
}
int zad4(int tab[],int n, int m) {
	cout << "\n zadanie4" << endl;
	int counter = 0;
	for (int i = 0; i < m; i++) {
		if (n < tab[i]) {
			counter++;
		}
	}
	return counter;
}
void zad5() {
	cout << "\n Zadanie6" << endl;
	cout << "Podaj 10 liczb"<<endl;
	int a;
	int counter = 1;
	vector <int> vec = {};
	for (int i = 0; i < 10; i++) {
		cout << "Podaj " << counter++ << " liczb";
		cin >> a;
		vec.push_back(a);
	}
	reverse(vec.begin(),vec.end());
	for (int j = 0; j < vec.size(); j++) {
		cout << vec[j] << ",";
	}
	
}
int zad6(int n) {
	cout << "\n Zadanie 6" << endl;
	int l = n;
	int z;
	int k = 0;
	while (n != 0) {
		z = n % 10;
		k = k * 10 + z;
		n /= 10;
	}
	if (l == k) {
		return 1;
	}
	return 0;


}


int main()
{
	zad2();

	int n = 3;
	cout << zad3(n);
	int k[4] = { 11,2,3,4 };
	int w =5;
	int j =5;
	cout << zad4(k,w,j);

	zad5();
	int l = 12321;
	cout << zad6(l);
}
