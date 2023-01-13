

#include <iostream>
#include <vector>
using namespace std;

//ZAD 1
void printVector(vector<int> wektor) {
	for (int i = 0; i < wektor.size(); i++) {
		cout << wektor.at(i) << ",";
	}
}


//zad2
int onlyPositive(vector<int> wektor2) {
	int sum = 0;
	for (int i = 0; i < wektor2.size(); i++) {
		if (wektor2.at(i) > 0) {
			sum += wektor2.at(i);
		}
	}
	return sum;
}



//ZAD3
vector<int> evenVector(vector<int> wektor3) {
	vector<int> newVec;
	for (int i = 0; i < wektor3.size(); i++) {
		if (wektor3.at(i) % 2 == 0) {
			newVec.push_back(wektor3.at(i));
		}
	}
	return newVec;
}



int main()
{
	//zad1
	vector<int> wektor = { -3,4,5 };
	printVector(wektor);


	//zad2
	vector<int> wektor2 = {1,2,3,4,-4 ,5 ,0,-19};
	int wynik = onlyPositive(wektor2);
	cout << "\nzad2: " << wynik;
	


	//ZAD3
	vector<int> wektor3 = {1,2,3,4};
	cout << "\nZAD3" << endl;
	printVector(evenVector(wektor3));







	// vector<int> wektor = {1,2,3,4,5};
	// //wektor.push_back(15);
	//// wektor.pop_back();
	// wektor.clear();
	// for (int i = 0; i < wektor.size(); i++) {
	//     cout << wektor.at(i) << " ";
	// }


}





