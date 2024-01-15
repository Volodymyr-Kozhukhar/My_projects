//Розмір 5х5, цілий. Обчислити вектор з елементів головної діагоналі матриці.

#include <iostream>
using namespace std;


void Vec_main_diagonale(int a[5][5], int b[5]) {
    for (int i = 0; i < 5; i++)
        b[i] = a[i][i];
}
int main()
{

    int a[5][5];
    int b[5];
    cout << " Enter 5x5 matris: " << endl;
    for (int i = 0; i < 5; i++)
        for (int j = 0; j < 5; j++)
        {
            cin >> a[i][j];
        }
    Vec_main_diagonale(a, b);
    cout << "Replaced matrix: " << endl;
    for (int i = 0; i < 5; i++) {
        cout << b[i] << " ";
    }
}
/*
5 3 4 5 10
6 1 3 11 7
5 4 1 8 20
9 1 1 11 3
5 1 2 4 42
*/