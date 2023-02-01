#include <vector>
#include <iostream>
using namespace std;

void zad2() {
    int sum = 0;
    for (int i = -100; i <= 0; i++) {
        if (i % 2 != 0) {
            sum += i;
        }
    }
    cout << sum;
}
int zad3(int n) {
    cout << "\n Czy liczba " << n << " jest liczba pierwsza" << endl;
    cout << "1 jak tak /// 0 jak nie" << endl;
    if (n < 2) {
        return 0;
   }
    for (int i = 2; i*i <= n; i++) {
        if (n % i == 0) {
            return 0;
        }
    }
    return 1;
}
int zad4(int arr[], int size)
{
    cout << "\n Zadanie4" << endl;
    int maxOdd = -1;
    int maxOddIndex = -1;

    for (int i = 0; i < size; i++)
    {
        if (arr[i] % 2 != 0 && arr[i] > maxOdd)
        {
            maxOdd = arr[i];
            maxOddIndex = i;
        }
    }

    return maxOddIndex;
}
void zad5() {
    int a;
    int c = 0;
    cout << "\n zadanie 5" << endl;
    cout << "Podaj 10 liczb:"<< endl;
    vector<int>vec = {};
    for (int i = 0; i < 10; i++) {
        c++;
        cout << "Podaj " << c << " liczbe:";
        cin >> a;
        vec.push_back(a);
    }
    for (int i = 0; i < vec.size(); i++) {
        cout << (vec[i]* vec[i]) << " ";
    }
}

int zad6(int n) {
    int units = n % 10;
    int tens = n / 10 % 10;
    return (units == tens) ? 1 : 0;
}
int main()
{
    zad2();

    int n = 6;
    cout << zad3(n);

    int arr[] = { 2, 4, 6, 13, 10,11 };
    int size = sizeof(arr) / sizeof(arr[0]);
    int result = zad4(arr, size);
    if (result != -1)
        cout << "Największy nieparzysty element znajduje się na indeksie: " << result << endl;
    else
        cout << "Nie znaleziono nieparzystych elementów." << endl;
 

    zad5();

    int v = 11;
    int cos = zad6(v);
    cout << endl;
    cout << "Czy cyfra jednostek i dziesiątek liczby " << v << " jest taka sama? ";
    if (cos)
        cout << "Tak." << endl;
    else
        cout << "Nie." << endl;

    return 0;

}

