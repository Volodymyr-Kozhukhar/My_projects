#pragma once

/*          8 варіант таблиця 1
а) Обчислити кількість показників вимірювань датчиків (елементів матриці), більших за 1.
б) * Елемент матриці називається локальним мінімумом, якщо він строго менше всіх сусідів нього (ліворуч, праворуч, зверху і знизу), які є у нього. Підрахувати кількість локальних мінімумів заданої матриці.
в) Обчислити вектор як суми від’ємних елементів стовпців матриці.
г) * Створити динамічний масив із ненульових показників усіх датчиків.
д) ** Характеристикою рядка матриці назвемо квадрат суми його елементів. Переставляючи рядки заданої матриці, розташувати їх відповідно до зростання характеристик.
*/
void view_file(char* name);
void array_RowsColumns(char* name, int& n, int& m);
void make_array(char* name, int** matrix);
void make_output3(char* name1, int** matrix, int& n, int& m);
int BiggerThanOne(int** matrix, char* name1, int& n, int& m);
int LocalMinimum(char* name1, int** matrix, int& n, int& m);
void VectorNegativeNumbersColumns(char* name1, int** matrix, int& n, int& m, int* vector);
void DynamicArrayNonZero(char* name1, int** matrix, int& n, int& m);
void SortBySumSquares(char* name1, int** matrix, int& n, int& m);

/*      8 варіант таблиці 2,3
	2) Визначити, чи є у рядках цифри. Якщо так, то вивести їх
	3) Відсортувати слова за абеткою у кожному рядку
*/
void NumsInRows(char* name2, char* name3);
void SortByAlphabet(char* name2, char* name3);
void PrintRowByNum(char* name2);
void PrintRowByText(char* name2);
void DeleteRowByNum(char* name2);
void DeleteRowByText(char* name2);