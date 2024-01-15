// Упорядкувати за зростанням (зліва направо) елементи всіх рядків матриці дійсних чисел розміром 4x4, а тоді за зростанням (зверху вниз) – елементи  всіх стовпців

#include <iostream>
using namespace std;

int main()
{
	const int n = 4;
	double a[n][n];
	cout << "Enter 4x4 matrix: " << endl;
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++) cin >> a[i][j];
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			for (int b = 0; b < n; b++)
				if (a[i][j] < a[i][b]) {
					double temp = a[i][j];
					a[i][j] = a[i][b];
					a[i][b] = temp;
				}
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			for (int b = 0; b < n; b++)
				if (a[j][i] > a[b][i]) {
					double temp = a[j][i];
					a[j][i] = a[b][i];
					a[b][i] = temp;
				}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) cout << a[i][j] << "\t";
		cout << endl;
	}
}

/*
5 3 4 5
6 1 3 1
5 4 1 2
9 1 1 1
*/