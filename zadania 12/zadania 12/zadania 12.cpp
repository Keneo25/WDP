

#include <iostream>
using namespace std;


//ZADANIE 3
void zamienPtr(int* a, int* b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
void zamien(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;
}





		//ZADANIE POWTÓRKOWE 
int sumOfArray(int tab[], int  rozmiar) {
	if (rozmiar <= 0)
        return 0;
    
	return tab[rozmiar - 1] + sumOfArray(tab, rozmiar - 1);
}



int main()
{

    int a = 4;
    int b = 3;
	zamienPtr(&a, &b);
    zamien(a, b);
    cout << a << " " << b << endl;
    cout << a << " " << b << endl;




    int tab[5];
    int getArrayLength = sizeof(tab) / sizeof(int);
	for (int i = 0; i < getArrayLength; i++)
	{
		tab[i] = i;
	} 

	cout << "Sum of array" << sumOfArray(tab, getArrayLength) << endl;






    



    //ZADANIE 1  (będzie error)
   /* int* ptr = 0;
    int a = 10;
    *ptr = a;
	cout << *ptr << endl;*/


    
	//ZADANNIE 2 (bedzie odpowiedz c) 
    /*float f = 10.5;
    float p = 2.5;
    float* ptr = &f;
	(*ptr)++;
    *ptr = p;
    cout << *ptr << " " << f << " " << p;*/









}
