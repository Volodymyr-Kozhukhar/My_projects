/* до 14 елементів. Дійсний. Ввести масив і число L. Створити новий масив з елементів,
менших за L, і впорядкувати новий масив за спаданням */

#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    system("chcp 1251 > null");
    const int n = 14; int amount = 0;
    double a[n], L; int i;
    cout << "Введіть число L: "; cin >> L;
    cout << "Введіть " << n << " чисел:\n";
    for (i = 0; i < n; i++)
        cin >> a[i];
    for (i = 0; i < n; i++)
    {
        if (a[i] < L)
            amount++;
    }
    double* mas = new double[amount];
    for (int a1 = 0, i = 0; i < n; i++)
        if (a[i] < L) {
            mas[a1] = a[i]; a1++;
        }
    for (i = 0; i < amount - 1; i++)
        for (int j = i + 1; j < amount; j++)
            if (mas[i] < mas[j])
            {
                double temp = mas[i];
                mas[i] = mas[j];
                mas[j] = temp;
            }
    for (i = 0; i < amount; i++)
        cout << mas[i] << " ";
    cout << endl;
    delete[] mas;
    nullptr;
    return 0;
}
