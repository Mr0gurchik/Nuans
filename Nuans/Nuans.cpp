#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int proverkanasimvoli(const string& text, char cel) 
{
    int count = 0;
    for (char i : text) 
    {
        if (i == cel) 
        {
            count++;
        }
    }
    return count;
}


int main()
{
    setlocale(LC_ALL, "Russian");

    string text;
    char cel;

    cout << "Введите текст: ";
    getline(cin, text);
    cout << "Введите цель для поиска: ";
    cin >> cel;

    int otvet = proverkanasimvoli(text, cel);
    cout << "Цель встречается " << otvet << " раз" << endl;
}
