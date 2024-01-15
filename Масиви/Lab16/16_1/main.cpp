/* 14 елементів. Дійсний. Розмістити елементи масиву у порядку зростання значень їх модулів */

#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    system("chcp 1251 > null");
    const int n = 14;
    double a[n]; int i;
    cout << "Введіть " << n << " чисел:\n";
    for (i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < n - 1; i++)
        for (int j = i + 1; j < n; j++)
            if (fabs(a[i]) > fabs(a[j]))
            {
                double temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
    cout << "Впорядкований масив за модулями:\n";
    for (i = 0; i < n; i++)
        cout << a[i] << " ";
    cout << endl;
    return 0;
}
