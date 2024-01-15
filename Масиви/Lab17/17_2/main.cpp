/*14 елементів. Цілий. Поміняти місцями максимальний елемент з мінімальним */

#include <iostream>
using namespace std;

void maxmin(int a[], int n) {
	int mx = 0, mn = 10000;
	int max = 0, min = 0;
	for (int i = 0; i < n; i++)
		if (a[i] > mx) {
			mx = a[i]; max = i;
		}
	for (int i = 0; i < n; i++)
		if (a[i] < mn) {
			mn = a[i]; min = i;
		}
	int temp;
	temp = a[max];
	a[max] = a[min];
	a[min] = temp;
}
int main()
{
	const int n = 14; int a[n];
	cout << "Enter 14 numbers: ";
	for (int i = 0; i < n; i++)
		cin >> a[i];
	maxmin(a, n);
	for (int i = 0; i < n; i++)
		cout << a[i] << " ";
}
// 2 4 7 3 6 2 8 1 2 3 2 2 2 5 