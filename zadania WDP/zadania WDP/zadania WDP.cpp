
#include <iostream>
#include <vector>
using namespace std;


//void zad3() {
//    int k = 1;
//    int j;
//    float wyn = 0.0;
//    cout << "Podaj 3 liczby calkowite" << endl;
//    for (int i = 0; i < 3; i++) {
//        cout << "Podaj " << k++ << " liczbe: ";
//        cin >> j;
//        wyn += j;
//    }
//    wyn = wyn / 3;
//    cout << "Wynik = " << wyn;
//
//}




//void zad17() {
//    int n;
//    int m;
//    cout << "Podaj liczbe: ";
//    cin >> n;
//    cout << "Podaj liczbe ile ma byc wieloktotnosci";
//    cin >> m;
//    int wyn = 0;
//    for (int i = 0; i <= m; i++) {
//        wyn = n * m;
//    }
//    cout << wyn;
//
//
//
//}


//void zad15() {
//	cout << "ZADANIE #15" << endl << endl;
//
//	int n, m;
//	cout << "Podaj liczbe n: ";
//	cin >> n;
//	cout << "Podaj liczbe m: ";
//	cin >> m;
//
//	cout << endl << "WYNIK:" << endl;
//
//	int wynik = 0;
//	for (int i = 1; wynik < m; i++)
//	{
//		cout << wynik << endl;
//		wynik = n * i;
//	}
//
//}



//void zad4() {
//    int c;
//    cout << "Wpisz stopnie Celszjusza: ";
//    cin >> c;
//    float f = 0.00;
//     f = (c * 1.8) + 32;
//     float k = 0.00;
//     k = (c + 273.15);
//    cout << "Farenheit = " << f << endl;
//    cout << "Kelvin = " << k;
//}


//void zad12() {
//    int n;
//    cout << "Wpisz liczbe: ";
//    cin >> n;
//    if (n < 0) {
//        cout << n * -1;
//    }
//    else {
//        cout << n;
//    }
//}


//void zad19() {
//    int n;
//    cout << "Podaj liczbe: ";
//    cin >> n;
//    if (n < 0) {
//        cout << "Liczba nie moze byc ujemna";
//    }
//    if (n <= 5) {
//        cout << "Brak rozwiazan ponizej liczby 5";
//    }
//    for (int a = 1; a < n; a++) {
//        for (int b = 1; b < n; b++) {
//            for (int c = 1; c < n; c++) {
//                if (a * a + b * b == c * c) {
//                    cout << a << "^2" << " + " << b << "^2" << " = " << c << "^2" << endl;
//                }
//            }
//        }
//    }
//
//
//	
//}

//void zad11() {
//    int d;
//    int m;
//    int r;
//    cout << "Podaj dzien: ";
//    cin >> d;
//    cout << "Podaj miesiac: ";
//    cin >> m;
//    cout << "Podaj rok: ";
//    cin >> r;
//
//    if (d > 0 and m > 0 and r > 0) {
//
//        if (m == 2 and d > 29) {
//            cout << "Bledna data";
//        }
//        else if (m == 4 and d > 30) {
//            cout << "Bledna data";
//        }
//        else if (m == 6 and d > 30) {
//            cout << "Bledna data";
//        }
//        else if (m == 9 and d > 30) {
//            cout << "Bledna data";
//        }
//        else if (m == 11 and d > 30) {
//            cout << "Bledna data";
//        }
//        else if (m > 12 or d > 31) {
//            cout << "Bledna data";
//        }
//        else {
//            cout << "Dzien: " << d << endl;
//            cout << "Miesac: " << m << endl;
//            cout << "Rok: " << r << endl;
//        }
//
//    }
//    else {
//        cout << "Data nie moze byc na  - ";
//    }
//}


//void zad13() {
//    int a;
//    int b;
//    cout << "Podaj a liczbe: ";
//    cin >> a;
//    cout << "Podaj b liczbe: ";
//    cin >> b;
//    int az = a;
//    int bz = b;
//    if (a < 0) {
//        az = a * -1;
//    }
//    if (b < 0) {
//        bz = b * -1;
//    }
//    if (az > bz) {
//        cout << "A jest wieksze";
//    }
//    else if (bz > az) {
//        cout << "B jest wieksze";
//    }
//}

//void zad10() {
//    int a;
//    cout << "Podaj rok: ";
//    cin >> a;
//    if (a % 4 == 0) {
//        cout << "Moze to byc rok przestepny";
//    }
//    else {
//        cout << "Nie moze byc";
//    }
//}

//void zad6() {
//    int a = 1;
//    int b = 2;
//    int c = 3;
//    int d = 4;
//    int x;
//    cout << "Podaj liczbe x: ";
//    cin >> x;
//    cout << "A(x) = " << a * (x * x * x) + b * (x * x) + c * x + d <<  endl;
//    cout << "B(x) = " << a * (x * x) + b * x + c;
//
//}

//int zad22(int n) {
//    if (n == 0) {
//        return 4;
//    }
//    if (n == 1) {
//        return 3;
//    }
//    if (n == 2) {
//        return 7;
//    }
//    else {
//
//        return zad22(n-2) + zad22(n-1);
//    }
//    
//}


//void zad18() {
//    int m;
//    int n;
//    cout << "Podaj m: ";
//    cin >> m;
//    cout << "Podaj n: ";
//    cin >> n;
//    int wyn = 0;
//    for (int i = 1; i <= n && i <= m; i++) {
//        if (n % i == 0 and m % i == 0) {
//            wyn = i;
//        }
//  }
//    cout << "Wynik: " << wyn;
//}

//void zad27() {
//    int ile;
//    cout << "Podaj ile ma byc liczb: ";
//        cin >> ile;
//        int counter = 1;
//        int wyn;
//        vector<int> vec = {};
//        for (int i = 0; i < ile; i++) {
//            cout << "Podaj " << counter++ << " liczbe: ";
//            cin >> wyn;
//            vec.push_back(wyn);
//        }
//        int sum = 0;
//        for (int j = 0; j < ile; j++) {
//            sum += vec[j];
//        }
//        cout << sum;
//
//}
// 

//void zad26() {
//    int ile;
//    cout << "Podaj ile ma byc liczb: ";
//        cin >> ile;
//        int counter = 1;
//        int wyn;
//        int sum = 0;
//        for (int i = 0; i < ile; i++) {
//            cout << "Podaj " << counter++ << " liczbe: ";
//            cin >> wyn;
//            sum += wyn;
//        }
//        cout << sum;
//
//}

//void zaddodatkowe(int n) {
//    int a = 3;
//    int b = 2;
//    int c = 9;
//       for (int i = 0;  i < n; i++) {
//           if ((a * a + b * b) == (c * c)) {
//               cout << a << "^2 " << "+" << b << "^2 " << "=" << c << "^2";
//          }
//    }
//
//
//}

void sumOfDivisibleBy3(int a, int b) {
    int sum = 0;
    for (int i = a; i <= b; i++) {
        if (i % 3 == 0) {
            sum += i;
        }
    }
    cout << "Suma z przedialu " << a <<"-" << b << " = " << sum;
}

int main()
{

    
   /* zad3();*/


  /*  zad17();*/

    /*zad15();*/
    
    /*zad4();*/

 /*   zad12();*/

   /* zad19();*/

   /* zad11();*/


    /*zad13();*/

 /*   zad10();*/

  /*  zad6();*/

    //int a = 3, b = 2, c = 4, d;
    //d = a++ + b - c % 3; //a= 4 ,b= 2 , c= 4 ,d=4
    //d = ++a + b - c % 3; //a= 5 ,b= 2 , c=4  ,d=6
    //d = (b = c) + 2; //a=5  ,b= 4 , c= 4 ,d=6

  /*  int y = 2;
    int d = 4;
    cout << zad22(y)<< endl;
    cout << zad22(d);*/




   /* zad18();*/


    /*zad27();*/

   /* zad26();*/

    //ZADANIE 32
  /*  int a;
    int b;
    int couter = 1;
    int con = 0;
    cout << "Podaj ile liczb: ";
    cin >> a;
    for (int i = 0; i < a; i++) {
        cout << "Podaj " << couter++ << " liczbe: ";
        cin >> b;
        if (b * b % 2 != 0) {
            con++;
        }
    }
    cout << con;*/


    //ZADANIE 33
   /* int a;
    int b;
    int counter = 1;
    cout << "Podaj liczbe: ";
    cin >> a;
    vector <int> vec = {};
    for (int i = 0; i < a; i++) {
        cout << "Podaj " << counter++ << " liczbe: ";
        cin >> b;
        if (b % 3 == 0 and b % 2 != 0) {
            vec.push_back(b);
        }
    }
    for (int j = 0; j < a; j++) {
        cout << vec[j] << ", ";
    }
 */

    
    /*int n = 4;
    zaddodatkowe(n);*/


    int a, b;
    cout << "Wpisz 2 liczby: ";
    cin >> a >> b;
    sumOfDivisibleBy3(a, b);
  


}

