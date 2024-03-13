// CoursworkMain 

/*          8 варіант таблиця 1
а) Обчислити кількість показників вимірювань датчиків (елементів матриці), більших за 1.
б) * Елемент матриці називається локальним мінімумом, якщо він строго менше всіх сусідів нього (ліворуч, праворуч, зверху і знизу), які є у нього. Підрахувати кількість локальних мінімумів заданої матриці.
в) Обчислити вектор як суми від’ємних елементів стовпців матриці.
г) * Створити динамічний масив із ненульових показників усіх датчиків.
д) ** Характеристикою рядка матриці назвемо квадрат суми його елементів. Переставляючи рядки заданої матриці, розташувати їх відповідно до зростання характеристик.
*/

#include <iostream>
#include <string.h>
#include <map>

using namespace std;

void view_file(char* name);
void array_RowsColumns(char* name, int& n ,int& m);
void make_array(char* name, int** matrix);
void make_output3(char* name1, int** matrix, int& n, int& m);
int BiggerThanOne(int** matrix, char* name1, int& n, int& m);
int LocalMinimum(char* name1, int** matrix, int& n, int& m);
void VectorNegativeNumbersColumns(char* name1, int** matrix, int& n, int& m, int* vector);
void DynamicArrayNonZero(char* name1, int** matrix, int& n, int& m);
void SortBySumSquares(char* name1, int** matrix, int& n, int& m);


int main()
{   
    int n, m;
    system("chcp 1251 > null");
    char name[] = "d:\\Лабораторні, проекти, інше\\My_repo_proj\\Coursework\\F1.txt";
    char name1[] = "d:\\Лабораторні, проекти, інше\\My_repo_proj\\Coursework\\F2.txt";
 
    view_file(name);
    cout << "\n\n";

    array_RowsColumns(name, n, m);

    int** matrix = new int* [n];             // Створення динамічного
    for (int i = 0; i < n; i++)              // двомірного масиву
        matrix[i] = new int[m];              // за допомогою new та (n,m)
    make_array(name, matrix);

    make_output3(name1, matrix, n, m);
    
    int AmountOfBiggerThanOne = BiggerThanOne(matrix, name1, n, m);
    cout << "\n\nКількість елементів більших за 1: " << AmountOfBiggerThanOne << "\n\n";

    int LocalMinimumAmount = LocalMinimum(name1, matrix, n, m);
    cout << "\n\nКількість локальних мінімумів по вертикалі та горизонталі матриці: " << LocalMinimumAmount << "\n\n";

    int* vector = new int[m];                // Створення динамічного масиву для вектора
    VectorNegativeNumbersColumns(name1, matrix, n, m, vector);

    DynamicArrayNonZero(name1, matrix, n, m);

    SortBySumSquares(name1, matrix, n, m);
}




void view_file(char* name)      //функція для виведення вмісту файлу
{
    char s[100];
    FILE* f;
    fopen_s(&f, name, "rt");
    if (f == NULL) 
    { 
        cout << "Cannot open file to veiw\n"; 
        return; 
    }
    cout << "\nПерегляд файлу " << name << endl;
    while (fgets(s, 100, f))
    {
        puts(s);
    }
    fclose(f);
}


void array_RowsColumns(char* name, int& n, int& m)      //функція, що обчислює рядки та стовпчики у файлі F1 та передає їх за адресою
{
    n = 0;
    char s[100] = { '0' };
    FILE* f;
    fopen_s(&f, name, "rt");
    if (f == NULL) 
    { 
        cout << "Cannot open file to veiw\n"; 
        return; 
    }
    while (fgets(s, 100, f))
    {
        int len = strlen(s);
        m = 0;
        for (int i = 0; s[i] != '\0'; i++)
        {
            if ((i + 1) != len && isdigit(s[i]) && !isdigit(s[i + 1]))
                m++;
            else if ((i + 1) >= len && isdigit(s[i]))
                m++;
        }
        if (s[len] == '\0' || s[len] == '\n')
            n++;
    }
    fclose(f);
}


void make_array(char* name, int** matrix)         //функція, що створює динамічний двомірний масив з показників вимірювань у файлі F1
{
    int row = 0;
    char s[100] = { '0' };
    FILE* f;
    fopen_s(&f, name, "rt");
    if (f == NULL)
    {
        cout << "Cannot open file to veiw\n";
        return;
    }
    while (fgets(s, 100, f))
    {
        int column = 0;
        int len = strlen(s);
        for (int i = 0; i < len; i++)
        {
            if (s[i] != ' ' && s[i] != '\0' && s[i] != '\n' && s[i] != '\t')
            {
                char number[10] = { '\0' };
                int j;
                for (j = 0; s[i] != ' '; j++)
                {
                    if (s[i] != '\n' && s[i] != '\0' && s[i] != '\t')
                        number[j] = s[i++];
                    else break;
                }
                matrix[row][column++] = atoi(number);
            }
        }
        row++;
    }
    fclose(f);
}


void make_output3(char* name1, int** matrix, int& n, int& m)            //функція, що виводить створенну матрицю в консоль, а також записує в файл F2
{
    FILE* f;
    fopen_s(&f, name1, "wt");
    if (f == NULL)
    {
        cout << "Cannot open file to veiw\n";
        return;
    }
    cout << "Перегляд матриці:\n";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            fprintf(f, "%i\t\t", matrix[i][j]);
            cout << matrix[i][j] << "\t\t";
        }
        fprintf(f, "\n");
        cout << "\n\n";
    }
    fclose(f);
}


int BiggerThanOne(int** matrix, char* name1,int& n, int& m)           //функція, що обчислює кількість елементів більших за 1 в матриці та записує в файл F2
{
    int amount = 0;
    FILE* f;
    fopen_s(&f, name1, "at");
    if (f == NULL)
    {
        cout << "Cannot open file to veiw\n";
        return -1;
    }
    fprintf(f,"\n Кількість показників вимірювань датчиків (елементів матриці), більших за 1: ");
    for(int i = 0; i < n; i++)
        for(int j = 0; j < m; j++)
        {
            if (matrix[i][j] > 1)
                amount++;
        }
    fprintf(f, "%i\n", amount);
    fclose(f);
    return amount; 
}


int LocalMinimum(char* name1, int** matrix, int& n, int& m)             //функція, що обчислює кількість локальних мінімумів матриці по вертикалі та горизонталі і записує результат у файл F2
{
    int amount = 0;
    FILE* f;
    fopen_s(&f, name1, "at");
    if (f == NULL)
    {
        cout << "Cannot open file to veiw\n";
        return -1;
    }
    fprintf(f, "\n Кількість локальних мінімумів: ");
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
        {
            if (i == 0 && j == 0)
            {
                if (matrix[i][j] < matrix[i + 1][j] && matrix[i][j] < matrix[i][j + 1])
                    amount++;
            }
            else if (i == 0 && j > 0 && j < m - 1)
            {
                if (matrix[i][j] < matrix[i + 1][j] && matrix[i][j] < matrix[i][j - 1] && matrix[i][j] < matrix[i][j + 1])
                    amount++;
            }
            else if (i == 0 && j == m - 1)
            {
                if (matrix[i][j] < matrix[i + 1][j] && matrix[i][j] < matrix[i][j - 1])
                    amount++;
            }
            else if (i > 0 && i < n - 1 && j == 0)
            {
                if (matrix[i][j] < matrix[i + 1][j] && matrix[i][j] < matrix[i - 1][j] && matrix[i][j] < matrix[i][j + 1])
                    amount++;
            }
            else if (i == n - 1 && j == 0)
            {
                if (matrix[i][j] < matrix[i - 1][j] && matrix[i][j] < matrix[i][j + 1])
                    amount++;
            }
            else if (i == n - 1 && j > 0 && j < m - 1)
            {
                if (matrix[i][j] < matrix[i][j - 1] && matrix[i][j] < matrix[i - 1][j] && matrix[i][j] < matrix[i][j + 1])
                    amount++;
            }
            else if (i == n - 1 && j == m - 1)
            {
                if (matrix[i][j] < matrix[i - 1][j] && matrix[i][j] < matrix[i][j - 1])
                    amount++;
            }
            else if (i > 0 && i < n - 1 && j == m - 1)
            {
                if (matrix[i][j] < matrix[i + 1][j] && matrix[i][j] < matrix[i - 1][j] && matrix[i][j] < matrix[i][j - 1])
                    amount++;
            }
            else if (matrix[i][j] < matrix[i - 1][j] && matrix[i][j] < matrix[i + 1][j] && matrix[i][j] < matrix[i][j - 1] && matrix[i][j] < matrix[i][j + 1])
                    amount++;
        }
    fprintf(f, "%i\n", amount);
    fclose(f);
    return amount;
}


void VectorNegativeNumbersColumns(char* name1, int** matrix, int& n, int& m, int* vector)           //функція для обчислення вектора за сумою від'ємних елементів стовпців матриці та записує результат у файл F2
{
    int sum = 0;;
    FILE* f;
    fopen_s(&f, name1, "at");
    if (f == NULL)
    {
        cout << "Cannot open file to veiw\n";
        return;
    }
    cout << "\nВектор суми від'ємних елементів стовпців матриці:\n";
    fprintf(f, "\nВектор суми від'ємних елементів стовпців матриці:\n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (matrix[j][i] < 0)
                sum += matrix[j][i];
        }
        vector[i] = sum;
        sum = 0;
    }
    for (int i = 0; i < m; i++)
    {
        fprintf(f, "%i\t", vector[i]);
        cout << vector[i] << '\t';
    }
    cout << '\n';
    fclose(f);
}


void DynamicArrayNonZero(char* name1, int** matrix, int& n, int& m)             //функція створює динамічний масив з ненульових елементів матриці та записує результат у файл F2
{   
    int index = 0;
    FILE* f;
    fopen_s(&f, name1, "at");
    if (f == NULL)
    {
        cout << "Cannot open file to veiw\n";
        return;
    }
    cout << "\nДинамічний масив ненульових показників датчиків:\n";
    fprintf(f, "\n\nДинамічний масив ненульових показників датчиків:\n");
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            if (matrix[i][j] != 0)
                index++;
    int* vector = new int[index];
    int k = 0;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            if (matrix[i][j] != 0)
            {
                vector[k] = matrix[i][j];
                k++;
            }
    for (int i = 0; i < index; i++)
    {
        fprintf(f, "%i  ", vector[i]);
        cout << vector[i] << "  ";
    }
    cout << '\n';
    fclose(f);
}


void SortBySumSquares(char* name1, int** matrix, int& n, int& m)            //функція, що розташовує рядки матриці сортуючи за квадратом суми та записує результат у файл F2
{
    int sum = 0;
    map < int, int> sums;               //створення map з ключем та значенням для записування квадратів сум елементів та номер рядка
    map <int, int> :: iterator it;      //створення ітератора для map sums
    FILE* f;
    fopen_s(&f, name1, "at");
    if (f == NULL)
    {
        cout << "Cannot open file to veiw\n";
        return;
    }
    cout << "\nВідсортована матриця за сумою квадратів рядків(показників датчиків):\n";
    fprintf(f, "\n\nВідсортована матриця за сумою квадратів рядків(показників датчиків):\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            sum += matrix[i][j];
        }
        sum *= sum;
        sums[sum] = i;
        sum = 0;
    }
    it = sums.begin();
    for (int i = 0; i < n; i++)
    {   
        int j = it->second;
        for (int k = 0; k < m; k++)
        {
            cout << matrix[j][k] << "\t\t";
            fprintf(f, "%i\t", matrix[j][k]);
        }
        fprintf(f, "\n");
        cout << "\n\n";
        it++;
    }
    fclose(f);
}