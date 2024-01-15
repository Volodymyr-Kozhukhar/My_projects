// Розмір масиву 3х4, цілий. Визначити найменший серед парних додатних елементів.
#include <iostream>
using namespace std;

int fun_min(int a[3][4]) {
    size_t min = 1e10;
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 4; j++) {
            if (a[i][j] % 2 == 0 && a[i][j] > 0 && a[i][j] < min) min = a[i][j];
        }
    return min;
}
int main()
{
    int a[3][4];
    cout << " Enter 3x4 matris: " << endl;
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 4; j++)
        {
            cin >> a[i][j];
        }
    cout << "Minimal, positive, pair number: " << fun_min(a);
}

/*
10 3 8 5
6 4 3 2
5 4 1 10
*/

