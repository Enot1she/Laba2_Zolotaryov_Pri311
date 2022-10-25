#include <iostream>
#include <cmath>
#include "Equation.h"
#include <clocale>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    double a, b, c, d, x1, x2;

    cout << "������� a:" << endl;
    cin >> a;
    cout << "������� b:" << endl;
    cin >> b;
    cout << "������� c:" << endl;
    cin >> c;

    d = b * b - 4 * a * c;
    if (d > 0){
        cout << "x1 = " << getRoot1(a, b, c, d) << endl;
        cout << "x2 = " << getRoot2(a, b, c, d) << endl;
    }
    if (d == 0) {
        cout << "x1 = " << getRoot1(a, b, c, d) << endl;
    }
    if (d < 0) {
        cout << "������������ ������ ����, �������������� ������ ���!" << endl;
    }
}
