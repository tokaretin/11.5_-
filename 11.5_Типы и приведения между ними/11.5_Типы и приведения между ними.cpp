#include <iostream>
using namespace std;

int main() {
    {
        int a = 10;
        float b = (float)a;

        cout << b << '\n'; // Вывод на экран: 10
    }

    {
        int c = 'a';
        int x = (int)c;

        cout << x << '\n'; // Вывод на экран: 97 (Таблица ASCII)
    }

    {
        int x = 98;
        char c = (char)x;

        cout << c << '\n'; // Вывод на экран: b (Таблица ASCII)
    }

    {
        bool b = true; // true always 1 and false always 0
        int x = (int)b;

        cout << x << '\n'; // Вывод на экран: 1
    }

    {
        int x = 0;
        bool b = (bool)x;

        cout << b << '\n'; // Вывод на экран: 0
    }

    {
        int x = -100; // если число с минусом, оно тоже является true = 1
        bool b = (bool)x;
         
        cout << b << '\n'; // Вывод на экран: 1
    }
    
}