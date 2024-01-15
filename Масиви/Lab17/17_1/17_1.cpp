/* 14 елементів. Дійсний. Обчислити факторіал індексу максимального елемента */

#include <iostream>
using namespace std;

double factorial(double a[], int n) {
	int max = 0;
	int index = 0;
	int result = 1;
	for (int i = 0; i < n; i++)
		if (a[i] > max) {
			max = a[i]; index = i;
		}
	index++;
	for (int i = 1; i <= index; i++)
		result = result * i;
	return result;
}
int main()
{
	const int n = 14; double a[n];
	cout << "Enter 14 numbers: ";
	for (int i = 0; i < n; i++)
		cin >> a[i];
	cout << "Factorial of the max number index: " << factorial(a, n) << endl;
	return 0;
}
// 1 4 7 3 6 2 8 1 2 3 0 0 1 5 