#include <iostream>
#include <cstring>
#include <map>
#include <string>
#include <fstream>
#include "MyFunctions.h"

using namespace std;

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
    cout << "\nПерегляд файлу " << name << "\n------------------------------------------------------------------------------------------------\n";
    while (fgets(s, 100, f))
    {
        cout << s;
    }
    cout << "\n------------------------------------------------------------------------------------------------\n";
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


int BiggerThanOne(int** matrix, char* name1, int& n, int& m)           //функція, що обчислює кількість елементів більших за 1 в матриці та записує в файл F2
{
    int amount = 0;
    FILE* f;
    fopen_s(&f, name1, "at");
    if (f == NULL)
    {
        cout << "Cannot open file to veiw\n";
        return -1;
    }
    fprintf(f, "\nКількість показників вимірювань датчиків (елементів матриці), більших за 1: ");
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
        {
            if (matrix[i][j] > 1)
                amount++;
        }
    fprintf(f, "%i\n", amount);
    fclose(f);
    return amount;
}


int LocalMinimum(char* name1, int** matrix, int& n, int& m) {
    int amount = 0;
    FILE* f;
    fopen_s(&f, name1, "at");
    if (f == NULL) {
        cout << "Cannot open file to view\n";
        return -1;
    }
    fprintf(f, "\nКількість локальних мінімумів: ");

    // Масиви для перевірки умов
    int dx[] = { 0, 1, 0, -1 };
    int dy[] = { 1, 0, -1, 0 };

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            bool is_min = true;
            for (int k = 0; k < 4; k++) {
                int ni = i + dx[k];
                int nj = j + dy[k];
                if (ni >= 0 && ni < n && nj >= 0 && nj < m) {
                    if (matrix[ni][nj] <= matrix[i][j]) {
                        is_min = false;
                        break;
                    }
                }
            }
            if (is_min) {
                amount++;
            }
        }
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
    map <int, int> ::iterator it;      //створення ітератора для map sums
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
        sum *= 2;
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
    for (int i = 0; i < n; i++)                                     // Видалення динамічного масиву матриці для звільнення використанної пам'яті
        delete[] matrix[i];
    delete[] matrix;
    fclose(f);
}


void NumsInRows(char* name2, char* name3)       //функція визначає, чи є у рядках цифри, виводить їх та записує результат у файл F4
{
    char s[200] = { '\0' };
    int k = 0;
    FILE* f1, * f2;
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
    map <string, int> words;                            //створення map для записування слів у ключі та їх автоматичне сортування за алфавітом
    map <string, int> ::iterator it;
    FILE* f1, * f2;
    fopen_s(&f1, name2, "r");
    fopen_s(&f2, name3, "a");
    if (f1 == NULL || f2 == NULL)
    {
        cout << "Cannot open file to veiw\n";
        return;
    }
    fprintf(f2, "\nВідсортовані рядки за алфавітом:\n\n");
    while (fgets(s, 200, f1))
    {
        memset(tmp, 0, 100);
        int amount = 0;
        int size = strlen(s);
        for (int i = 0; i < size; i++)
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
                fprintf(f2, "%s ", word);
            }
            it++;
            memset(word, 0, 50);
        }
        words.clear();
        fprintf(f2, "\n");
    }
    cout << "\n";
    fclose(f1);
    fclose(f2);
}


void PrintRowByNum(char* name2)               //функція, що замінює введений рядок на введений текст у файлі F3
{
    int InputRow;
    char InputText[200];
    cout << "\n\nВведіть номер рядка для заміни: ";
    cin >> InputRow;
    cout << "\nВведіть текст для заміни -> ";
    cin.ignore();
    cin.getline(InputText, 200);

    map <int, char[200]> words;               //створення map для записування речень у значення та їх номери у ключі
    map <int, char[200]> ::iterator it;

    char s[200];
    FILE* f1, * f2;
    fopen_s(&f1, name2, "r");
    if (f1 == NULL)
    {
        cout << "Cannot open file to veiw\n";
        return;
    }
    int k = 1;
    while (fgets(s, 200, f1))
    {
        strcpy_s(words[k], 200, s);
        k++;
    }
    fclose(f1);
    fopen_s(&f2, name2, "w");
    if (f2 == NULL)
    {
        cout << "Cannot open file to veiw\n";
        return;
    }
    it = words.begin();
    for (int i = 0; i < k - 1; i++)
    {
        if (it->first == InputRow)
        {
            fprintf(f2, "%s\n", InputText);
            it++;
        }
        else
        {
            fprintf(f2, "%s", it->second);
            it++;
        }
    }
    fclose(f2);
}


void PrintRowByText(char* name2)              //функція, що замінює введений текст у рядку іншим введеним текстом у файлі F3
{
    char name[] = "F3.txt";
    system("chcp 1251 > null");
    ifstream f1(name);
    string toFind;
    string change;
    string s;
    map <int, string> words;
    map <int, string> ::iterator it;
    int k = 0;
    while (getline(f1, s))
    {
        words[k] = s;
        k++;
    }
    cout << "\n\nВведіть текст для пошуку у файлі: ";
    getline(cin, toFind);
    cout << "\nВведіть текст для заміни -> ";
    getline(cin, change);
    int len = toFind.length();
    bool x;
    for (int i = 0; i < k; i++)
    {
        x = true;
        while (x)
        {
            int index = words[i].find(toFind);
            if (index == -1)
            {
                x = false;
                break;
            }
            words[i].erase(index, len);
            words[i].insert(index, change);
        }
    }
    f1.close();
    ofstream f2(name);
    for (int i = 0; i < k; i++)
    {
        f2 << words[i];
        f2 << "\n";
    }
    f2.close();
}


void DeleteRowByNum(char* name2)              //функція, що видаляє введений рядок у файлі F3
{
    int InputRow;
    cout << "\n\nВведіть номер рядка для видалення: ";
    cin >> InputRow;

    map <int, char[200]> words;               //створення map для записування речень у значення та їх номери у ключі
    map <int, char[200]> ::iterator it;

    char s[200];
    FILE* f1, * f2;
    fopen_s(&f1, name2, "r");
    if (f1 == NULL)
    {
        cout << "Cannot open file to veiw\n";
        return;
    }
    int k = 1;
    while (fgets(s, 200, f1))
    {
        strcpy_s(words[k], 200, s);
        k++;
    }
    fclose(f1);
    fopen_s(&f2, name2, "w");
    if (f2 == NULL)
    {
        cout << "Cannot open file to veiw\n";
        return;
    }
    it = words.begin();
    for (int i = 0; i < k - 1; i++)
    {
        if (it->first == InputRow)
        {
            it++;
        }
        else
        {
            fprintf(f2, "%s", it->second);
            it++;
        }
    }
    fclose(f2);
}


void DeleteRowByText(char* name2)             //функція, що видаляє рядок з введеним текстом у файлі F3
{
    char SearchText[200];
    cout << "\n\nВведіть текст для пошуку у файлі: ";

    cin.ignore();
    cin.getline(SearchText, 200);

    char firstlet = SearchText[0];

    map <int, char[200]> words;               //створення map для записування речень у значення та їх номери у ключі
    map <int, char[200]> ::iterator it;

    char s[200];
    FILE* f1, * f2;
    fopen_s(&f1, name2, "r");
    if (f1 == NULL)
    {
        cout << "Cannot open file to veiw\n";
        return;
    }
    int k = 1;
    while (fgets(s, 200, f1))
    {
        strcpy_s(words[k], 200, s);
        k++;
    }
    fclose(f1);
    fopen_s(&f2, name2, "w");
    if (f2 == NULL)
    {
        cout << "Cannot open file to veiw\n";
        return;
    }
    it = words.begin();
    bool compared = true;
    for (int i = 0; i < k - 1; i++)
    {
        for (int j = 0; j < strlen(it->second); j++)
        {
            if (it->second[j] == firstlet)
            {
                int n = j;
                compared = true;
                for (int t = 0; t < strlen(SearchText); t++)
                {
                    if (it->second[n] != SearchText[t])
                    {
                        compared = false;
                        break;
                    }
                    n++;
                }
                if (compared)
                {
                    it->second[0] = '\0';
                }
            }
        }
        fprintf(f2, "%s", it->second);
        it++;
    }
    fclose(f2);
}
