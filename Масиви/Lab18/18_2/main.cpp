// Обчислити вектор як рядок матриці цілих чисел розміром 4x5 з найбільшою сумою елементів

#include <iostream>
using namespace std;

int main()
{
	const int n = 5;
	const int m = 4;
	int a[m][n];
	int Summain = 0, sum;
	int row = 0, Rowmain;
	cout << "Enter 4x5 matrix: " << endl;
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++) cin >> a[i][j];

	for (int i = 0; i < m; i++) {
		sum = 0;
		for (int j = 0; j < n; j++) {
			sum += a[i][j]; row = i;
		}
		if (sum > Summain) {
			Summain = sum; Rowmain = row;
		}
	}
	cout << "The biggest sum is " << Summain << " in the " << Rowmain + 1 << " row" << endl;
	cout << "The row: ";
	for (int i = 0; i < n; i++) cout << a[Rowmain][i] << " ";
	return 0;
}
/*
5 3 4 5 1
6 1 3 1 1
5 4 1 2 1
9 1 1 1 9
*/