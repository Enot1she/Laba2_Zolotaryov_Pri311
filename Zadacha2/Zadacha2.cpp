#include <iostream>
#include <cmath>
#include <clocale>
#include "Factrorial.h"

using namespace std;

void main()
{
    setlocale(LC_ALL, "Russian");
    int x = 0;
    cout << "���������� ����������." << endl;
    cout << "������� ����� �������������� �����:" << endl;
    cin >> x;
    cout << fact(x);
}