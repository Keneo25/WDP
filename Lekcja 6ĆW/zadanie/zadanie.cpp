
#include <iostream>

using namespace std;
int main()
{



	//ZADANIE 1
	/*
	int b[5] = {1,2,3,4,5};
	 
	for (int i = 0; i < 5; i++) {
		cout << b[i];

	}
	*/


	//ZADANIE 2

	/*
	int parzyste[5] = { 2,4,6,8,10};

	int b = sizeof(parzyste) / sizeof(int);
	cout << "Length of an array:" <<" " <<b;
	*/
	

	//ZADANIE 3


	int b[20];
	srand(time(NULL));
	int sum = 0;
	for (int i = 0; i < 20;i++) {
		b[i] = rand() % 100 +1;
		
		cout << b[i]<< ",";
		sum += b[i];
		
	}
	cout << "Suma:"<< sum;
	





}

