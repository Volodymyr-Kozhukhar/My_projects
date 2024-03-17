#pragma once

/*          8 ������ ������� 1
�) ��������� ������� ��������� ��������� ������� (�������� �������), ������ �� 1.
�) * ������� ������� ���������� ��������� �������, ���� �� ������ ����� ��� ����� ����� (������, ��������, ������ � �����), �� � � �����. ϳ��������� ������� ��������� ������ ������ �������.
�) ��������� ������ �� ���� �䒺���� �������� �������� �������.
�) * �������� ��������� ����� �� ���������� ��������� ��� �������.
�) ** ��������������� ����� ������� ������� ������� ���� ���� ��������. ������������� ����� ������ �������, ����������� �� �������� �� ��������� �������������.
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

/*      8 ������ ������� 2,3
	2) ���������, �� � � ������ �����. ���� ���, �� ������� ��
	3) ³���������� ����� �� ������� � ������� �����
*/
void NumsInRows(char* name2, char* name3);
void SortByAlphabet(char* name2, char* name3);
void PrintRowByNum(char* name2);
void PrintRowByText(char* name2);
void DeleteRowByNum(char* name2);
void DeleteRowByText(char* name2);