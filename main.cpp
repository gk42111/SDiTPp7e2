#include "Complex.h"
#include <iostream>
#include <string>
#include <cmath>
#include<vector>
using namespace std;
int main() {
	Complex c1(1, 2), c2(3, 4), c3(5, 6), c4(7, 8), c5(9, 10);
	vector<Complex> acomplex;	//punkt 1	acomplex.push_back(c1);
	acomplex.push_back(c2);
	acomplex.push_back(c3);
	acomplex.push_back(c4);
	acomplex.push_back(c5);
	
	//punkt 2
	int s = acomplex.size();
	for (int i = 0; i < s; i++) {
		cout <<"Complex "<<i<< "\tRe: " << acomplex[i].Re << "\tIm: " << acomplex[i].Im << endl;
	}
	//punkt 3
	double wynik = 0;
	for (int i = 0; i < acomplex.size(); i++) {
		int wynikMC = acomplex[i].Im + acomplex[i].Re;
		wynik = +wynikMC;
	}


	
	cout << "srednia arytmetyczna elementow wektora: " << wynik / acomplex.size() << endl;
	system("pause");
	return 0;
}