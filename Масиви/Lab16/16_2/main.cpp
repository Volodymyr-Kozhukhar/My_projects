/* 14 елементів. Дійсний. Обчислити кількість елементів, що перевищують середнє
арифметичне всіх елементів*/

#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    system("chcp 1251 > null");
    const int n = 14;
    double a[n], sum = 0, av = 0; int i, k = 0;
    cout << "Введіть " << n << " чисел:\n";
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
        sum += a[i];
    }
    av = sum / n;
    for (int i = 0; i < n; i++)
    {
        if (a[i] > av) k++;
    }
    cout << "Клькість елементів що перевищують середне арифметичне:\n";
    cout << k << endl;
    return 0;
}
