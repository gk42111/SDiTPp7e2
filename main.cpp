#include "Complex.h"
#include <iostream>
#include <string>
#include <cmath>
#include<vector>
using namespace std;
int main() {
	Complex c1(1,2),c2(3,4),c3(5,6),c4(7,8),c5(9,10);
	vector<Complex> acomplex;
	vector<int> moj_wektor;
	vector<vector<double>> Tab2D;
	for (int i = 0; i < 10; i++) {
		moj_wektor.push_back(i);
	}
		for (int i = 0; i < 10; i++)
	{
		vector<double> row;
		for (int j = 0; j < 20; j++)
		{
			row.push_back(0);
		}
		Tab2D.push_back(row);
	}	//punkt 1	acomplex.push_back(c1);
	acomplex.push_back(c2);
	acomplex.push_back(c3);
	acomplex.push_back(c4);
	acomplex.push_back(c5);
	//punkt 2
	int s = acomplex.size();
	for (int i = 0; i < s; i++) {
		cout <<"Complex "<<i<< "\tRe: " << acomplex[i].Re << "\tIm: " << acomplex[i].Re << endl;
	}
	//punkt 3
	double wynik = 0;
	for (int i = 0; i < moj_wektor.size(); i++) {
		wynik += moj_wektor[i];
	}
	cout << "srednia arytmetyczna elementow wektora: " << wynik / moj_wektor.size() << endl;
	system("pause");
	return 0;
}