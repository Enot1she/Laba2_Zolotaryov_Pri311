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
    d = getDiscriminant(a, b, c);

    if (d > 0){
        cout << "x1 = " << getRoot1(a, b, c) << endl;
        cout << "x2 = " << getRoot2(a, b, c) << endl;
    }
    if (d == 0) {
        cout << "x1 = " << getRoot1(a, b, c) << endl;
    }
    if (d < 0) {
        cout << "������������ ������ ����, �������������� ������ ���!" << endl;
    }
}
