#include <iostream>
#include <string>
#include <map>
#include <fstream>

using namespace std;

int main()
{
    system("chcp 1251 > null");
    ifstream f1("d:\\Лабораторні, проекти, інше\\My_repo_proj\\stringtest\\F3.txt");
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
    cout << "Enter line to search: ";
    getline(cin, toFind);
    cout << "Enter line to change: ";
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
    ofstream f2("d:\\Лабораторні, проекти, інше\\My_repo_proj\\stringtest\\F3.txt");
    for (int i = 0; i < k; i++)
    {
        f2 << words[i];
        f2 << "\n";
    }
    f2.close();
}