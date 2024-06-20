#include <iostream>
#include <windows.h>

using namespace std;

int findLastA(const char* text, int index)
{
    if (index < 0)
    { // ������� ������: ���� ������ ����� �� ������� ������
        return -1;
    }

    if (text[index] == '�')
    { // ���� ����� '�', ���������� ��� �������
        return index;
    }

    return findLastA(text, index - 1); // ����������� ����� ��� ����������� �������
}

int getSymbol(const char* text)
{
    int length = strlen(text); // �������� ����� ������
    return findLastA(text, length - 1); // �������� ��������������� �������
}

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    char text[] = "������������������";
    cout << getSymbol(text) << endl; // �� ������ 3
    return 0;
}