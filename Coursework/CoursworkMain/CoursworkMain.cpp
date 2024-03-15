// CoursworkMain 

#include <iostream>
#include <cstring>
#include <map>


using namespace std;

/*          8 варіант таблиця 1
а) Обчислити кількість показників вимірювань датчиків (елементів матриці), більших за 1.
б) * Елемент матриці називається локальним мінімумом, якщо він строго менше всіх сусідів нього (ліворуч, праворуч, зверху і знизу), які є у нього. Підрахувати кількість локальних мінімумів заданої матриці.
в) Обчислити вектор як суми від’ємних елементів стовпців матриці.
г) * Створити динамічний масив із ненульових показників усіх датчиків.
д) ** Характеристикою рядка матриці назвемо квадрат суми його елементів. Переставляючи рядки заданої матриці, розташувати їх відповідно до зростання характеристик.
*/
void view_file(char* name);
void array_RowsColumns(char* name, int& n ,int& m);
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


int main()
{
    
    int n, m;
    system("chcp 1251 > null");

    char name[] = "d:\\Лабораторні, проекти, інше\\My_repo_proj\\Coursework\\F1.txt";
    char name1[] = "d:\\Лабораторні, проекти, інше\\My_repo_proj\\Coursework\\F2.txt";
    char name2[] = "d:\\Лабораторні, проекти, інше\\My_repo_proj\\Coursework\\F3.txt";
    char name3[] = "d:\\Лабораторні, проекти, інше\\My_repo_proj\\Coursework\\F4.txt";

    /*
    char name[] = "c:\\Prog\\Py_labs\\Coursework\\F1.txt";
    char name1[] = "c:\\Prog\\Py_labs\\Coursework\\F2.txt";
    char name2[] = "c:\\Prog\\Py_labs\\Coursework\\F3.txt";
    char name3[] = "c:\\Prog\\Py_labs\\Coursework\\F4.txt";
    */

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

    for (int i = 0; i < n; i++)                                     // Видалення динамічного масиву матриці для звільнення використанної пам'яті
        delete[] matrix[i];
    delete[] matrix;

    cout << "\n\n";
    view_file(name2);
    cout << "\n\n";

    NumsInRows(name2, name3);

    SortByAlphabet(name2, name3);

    view_file(name3);

    cout << "\n\n";
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
    cout << "\nПерегляд файлу " << name << "\n--------------------------------------------------------------------------------------\n";
    while (fgets(s, 100, f))
    {
        cout << s;
    }
    cout << "\n--------------------------------------------------------------------------------------\n";
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
        cout << "\n";
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
    fprintf(f,"\nКількість показників вимірювань датчиків (елементів матриці), більших за 1: ");
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
    fprintf(f, "\nКількість локальних мінімумів: ");
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
        cout << "\n";
        it++;
    }
    fclose(f);
}


void NumsInRows(char* name2, char* name3)       //функція визначає, чи є у рядках цифри, виводить їх та записує результат у файл F4
{
    char s[200] = { '\0' };
    int k = 0;
    FILE* f1, *f2;
    fopen_s(&f1, name2, "r");
    fopen_s(&f2, name3, "w");
    if (f1 == NULL || f2 == NULL)
    {
        cout << "Cannot open file to veiw\n";
        return;
    }
    //cout << "Цифри у файлі " << name2 << " -> ";
    fprintf(f2, "Цифри у файлі %s -> ", name2);
    while (fgets(s, 200, f1))
    {
        for (int i = 0; s[i] != '\0'; i++)
        {
            if (s[i] >= '0' && s[i] <= '9')
            {
                fprintf(f2, "%c ", s[i]);
                //cout << s[i] << " ";
                k++;
            }
        }
    }
    if (k == 0)
    {
        cout << "Немає жодної цифри у файлі" << "\n\n";
        fprintf(f2, "Немає жодної цифри у файлі\n");
    }
    else
        //cout << "\n\n";
        fprintf(f2, "\n");
    fclose(f1);
    fclose(f2);
}


void SortByAlphabet(char* name2, char* name3)           //функція, що сортує слова за алфавітом в кожному рядку та записує результат у файл F4
{
    char s[200] = { '\0' };
    char tmp[100] = { '\0' };
    map <string, int> words;               //створення map для записування слів у ключі та їх автоматичне сортування за алфавітом
    map <string, int> ::iterator it;
    FILE* f1, * f2;
    fopen_s(&f1, name2, "r");
    fopen_s(&f2, name3, "a");
    if (f1 == NULL || f2 == NULL)
    {
        cout << "Cannot open file to veiw\n";
        return;
    }
    //cout << "Відсортовані рядки за алфавітом:\n\n";
    fprintf(f2, "\nВідсортовані рядки за алфавітом:\n\n");
    while (fgets(s, 200, f1))
    {
        int amount = 0;
        for (int i = 0; s[i] != '\0'; i++)
        {
            if (s[i] >= 'а' && s[i] <= 'я' || s[i] >= 'А' && s[i] <= 'Я' || s[i] == 'і' || s[i] == 'І' || s[i] == 'ї' || s[i] == 'Ї' || s[i] == 'є' || s[i] == 'Є' || s[i] == 'ґ' || s[i] == 'Ґ')
            {
                int k;
                for (k = 0; s[i] != ' '; k++) 
                {
                    if (s[i] != '\0' && s[i] != '\n' && s[i] != '.' && s[i] != ',' && s[i] != '!' && s[i] != '?' && s[i] != ';' && s[i] != ':')
                        tmp[k] = s[i++];
                    else
                    {
                        break;
                    }
                }
                if (k > 0)
                {
                    tmp[k] = '\0';
                }
                words[tmp]++;
            }
        }
        amount = words.size();
        it = words.begin();
        for (int i = 0; i < amount; i++)
        {
            int tmp = it->second;
            char word[50] = { '\0' };
            for (int j = 0; it->first[j] != '\0'; j++)
                word[j] = it->first[j];
            for (int j = 0; j < tmp; j++)
            {
                //cout << it->first << ' ';
                fprintf(f2, "%s ", word);
            }
            it++;
        }
        words.clear();
        //cout << "\n";
        fprintf(f2, "\n");
    }
    cout << "\n";
    fclose(f1);
    fclose(f2);
}