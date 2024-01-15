// Обчислити суму елементів неголовної діагоналі матриці 5x5 цілих чисел

#include <iostream>
using namespace std;

int main() {
	const int n = 5;
	int a[n][n];
	int Sum;
	cout << "Enter 5x5 matrix: " << endl;
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++) cin >> a[i][j];
	Sum = a[4][0] + a[3][1] + a[2][2] + a[1][3] + a[0][4];
	cout << "Sum of the non - main diagonal " << Sum;
	return 0;
}
/*
5 3 4 5 1
6 1 3 1 1
5 4 1 2 1
9 1 1 1 9
6 1 3 1 1
*/