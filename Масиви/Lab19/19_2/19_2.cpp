//Розмір масиву 5х3, цілий. Замінити всі непарні елементи матриці одиницями.

#include <iostream>
using namespace std;

void replacement(int a[5][3]) {
    for (int i = 0; i < 5; i++)
        for (int j = 0; j < 3; j++)
            if (a[i][j] % 2 != 0) a[i][j] = 1;
}
int main()
{
    int a[5][3];
    cout << " Enter 5x3 matris: " << endl;
    for (int i = 0; i < 5; i++)
        for (int j = 0; j < 3; j++)
        {
            cin >> a[i][j];
        }
    replacement(a);
    cout << "Replaced matris: " << endl;
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 3; j++)
        {
            cout << a[i][j] << "\t";
        }
        cout << endl;
    }
}
/*
5 3 4
6 1 3
5 4 1
9 1 1
5 1 2
*/