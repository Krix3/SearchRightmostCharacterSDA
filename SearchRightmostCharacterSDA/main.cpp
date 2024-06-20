#include <iostream>
#include <windows.h>

using namespace std;

int findLastA(const char* text, int index)
{
    if (index < 0)
    { // базовый случай: если индекс вышел за пределы строки
        return -1;
    }

    if (text[index] == 'а')
    { // если нашли 'а', возвращаем его позицию
        return index;
    }

    return findLastA(text, index - 1); // рекурсивный вызов для предыдущего символа
}

int getSymbol(const char* text)
{
    int length = strlen(text); // получаем длину строки
    return findLastA(text, length - 1); // вызываем вспомогательную функцию
}

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    char text[] = "Мамамамамамамамама";
    cout << getSymbol(text) << endl; // на экране 3
    return 0;
}