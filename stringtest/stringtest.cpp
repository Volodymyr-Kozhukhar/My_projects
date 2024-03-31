#include <iostream>
#include <string>
#include <map>
#include <fstream>

using namespace std;

int main()
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
    while(getline(f1, s))
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