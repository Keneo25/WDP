

#include <iostream>
#include <vector>
using namespace std;


//void zad2() {
//	int a;
//	int b;
//	int c;
//	float zm = 0.0 ;
//	cout << "Podaj 3 liczby:" << endl;
//	cout << "Podaj a: ";
//	cin >> a;
//	cout << "Podaj b: ";
//	cin >> b;
//	cout << "Podaj c: ";
//	cin >> c;
//	 zm += b + c;
//	 zm = zm / 2;
//	 if (a > zm) {
//		 cout << "Liczba a jest wieksza";
//	 }
//	 else {
//		 cout << "Liczb a jest mniejsza";
//	 }
//}


//void zad3(int n) {
//	
//	vector<int> vec = {3};
//	
//	for (int i = 1; i < n; i++) {
//		vec.push_back(vec[i-1]+3);
//	}
//	for (int j = 0; j < n; j++) {
//		if (j % 2 != 0) {
//			vec[j] = vec[j] * (-1);
//		}
//		cout << vec[j] << ", ";
//	}
//}

//int zad4(int tab[],int n,int m) {
//	int counter = 0;
//	for (int i = 1; i < n;i++) {
//		if ((2 * m) >= tab[i]) {
//			counter++;
//		}
//
//	}
//	return counter;
//}

//void zad5() {
//	cout << "Podaj 5 liczb" << endl;
//	int a;
//	int counter = 1;
//	vector <int> vec = {};
//	for (int i = 0; i < 5; i++) {
//		cout << "Podaj " << counter++ << " liczb: ";
//		cin >> a;
//		vec.push_back(a);
//
//	}
//	reverse(vec.begin(), vec.end());
//	vector<int> vecto = vec;
//	for (int j = 0; j < 5; j++) {
//		cout << vecto[j] << ", ";
//	}
//	
//}

//int zad6(int n) {
//		if (n == 0) {
//			return 1;
//		}
//		else if (n == 1) {
//			return 2;
//		}
//		else if (n % 2 == 0) {
//			return zad6(n - 2) + 2;
//	}
//		else{
//			return 2 * zad6(2 * n - 1 )-1;
//		}
//
//}


int main()
{

	/*zad2();*/


	int n = 5;
    zad3(n);

	/*int tab[4] = { 1,2,3,4 };
	int n = 3;
	int m = 3;
	cout << zad4(tab, n, m);*/

	/*zad5();*/

	/*int k = 4;
	cout << zad6(k);*/


}

