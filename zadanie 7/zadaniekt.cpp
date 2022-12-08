// zadaniekt.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>
using namespace std;





//ZADANIE 1
/*
int zad1(int argument[],int size) {
	int sum = 0;
	for (int i = 0; i < 20; i++) 
		sum += argument[i];
	return sum;
	
	
}

int main(){

	srand(time(NULL));
	int tab[20], size;
	size = sizeof(tab) / sizeof(int);
	for (int i = 0; i < size; i++) {
		tab[i] = rand() % 101;
		cout << tab[i] << ",";


	}
	cout << endl;
	int suma = zad1(tab, size);
		cout<< "suma:" << suma << endl;

	
}
*/





//ZADANIE 2
/*
int zad2(int argument[], int size) {
	int licznik = 0;
	for (int i = 0; i < size; i++) {
		if(argument[i] % 2 == 0)
			licznik ++;
	}
	return licznik;
	

}

int main() {

	srand(time(NULL));
	int tab[20], size;
	size = sizeof(tab) / sizeof(int);
	for (int i = 0; i < size; i++) {
		tab[i] = rand() % 101;
		cout << tab[i] << ",";


	}
	cout << endl;
	int wynik = zad2(tab, size);
	cout << wynik << endl;

}
*/

//ZADANIE 2 zmiana 

string reversedText(string a) {
    string reversedResult = a;
    for (int i = 0, j = a.length() - 1; i < a.length(); i++, j--) {
        reversedResult[i] = a[j];
    }
    return reversedResult;
}

int main()
{
    string napis;
    cout << "Enter some string" << endl;
    cin >> napis;
    cout << reversedText(napis);
}











//ZADANIE 3

/*
int zad3(int argument[], int size) {
	int before = argument[0];
	for(int i = 1; i <= size; i++) {
		if (argument[i] > before) 
			before = argument[i];
		
	}
	return before;

}

int main() {

	srand(time(NULL));
	int tab[20], size;
	size = sizeof(tab) / sizeof(int);
	for (int i = 0; i < size; i++) {
		tab[i] = rand() % 101;
		cout << tab[i] << ",";


	}
	cout << endl;
	int wynik = zad3(tab, size);
	cout << wynik << endl;

}
*/

//ZADANIE 4

void zad4(int argument1[], int argument2[], int argument3[]) {
	for (int i = 0; i < 20; i++) {
		if (argument1[i] == argument2[i] or argument1[i] == argument3[i])
			cout << i << " ";
		
	}
}

int main() {

	srand(time(NULL));
	int tab[20];
	int tab1[20];
	int tab2[20];
	
	for (int i = 0; i < 20; i++) {
		tab[i] = rand() % 4;
		cout << tab[i] << ",";
	}

		for (int i = 0; i < 20; i++) {
			tab1[i] = rand() % 4;
			cout << tab1[i] << ",";
		}
	for (int i = 0; i < 20; i++) {
		tab2[i] = rand() % 4;
		cout << tab2[i] << ",";

	}


	cout << endl;
	zad4(tab,tab2,tab3);
	


}
