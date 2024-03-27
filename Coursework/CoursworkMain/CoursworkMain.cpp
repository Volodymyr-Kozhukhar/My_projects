﻿// CoursworkMain 

#include <iostream>
#include <cstring>
#include <map>
#include "MyFunctions.h"

using namespace std;

int main()
{
    int n, m;
    system("chcp 1251 > null");

    char name[] = "F1.txt";
    char name1[] = "F2.txt";
    char name2[] = "F3.txt";
    char name3[] = "F4.txt";

    view_file(name);
    cout << "\n\n";

    array_RowsColumns(name, n, m);

    int** matrix = new int* [n];                                    // Створення динамічного
    for (int i = 0; i < n; i++)                                     // двомірного масиву
        matrix[i] = new int[m];                                     // за допомогою new та (n,m)
    make_array(name, matrix);

    make_output3(name1, matrix, n, m);
    
    int AmountOfBiggerThanOne = BiggerThanOne(matrix, name1, n, m);
    cout << "\n\nКількість елементів більших за 1: " << AmountOfBiggerThanOne << "\n";

    int LocalMinimumAmount = LocalMinimum(name1, matrix, n, m);
    cout << "\nКількість локальних мінімумів по вертикалі та горизонталі матриці: " << LocalMinimumAmount << "\n";

    int* vector = new int[m];                                       // Створення динамічного масиву для вектора
    VectorNegativeNumbersColumns(name1, matrix, n, m, vector);
    delete[] vector;                                                // Видалення динамічного масиву вектора для звільнення використанної пам'яті

    DynamicArrayNonZero(name1, matrix, n, m);

    SortBySumSquares(name1, matrix, n, m);

    cout << "\n\n";
    view_file(name2);
    cout << "\n\n";

    NumsInRows(name2, name3);

    SortByAlphabet(name2, name3);

    view_file(name3);

    PrintRowByNum(name2);
    view_file(name2);

    PrintRowByText(name2);
    view_file(name2);

    DeleteRowByNum(name2);
    view_file(name2);

    DeleteRowByText(name2);
    view_file(name2);

    cout << "\n\n";
}