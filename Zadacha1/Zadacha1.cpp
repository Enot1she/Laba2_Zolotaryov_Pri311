#include <iostream>
#include <cmath>
#include <clocale>
#include "Sphere.h"

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    int r = 0;
    cout << "������� ������ �����:" << endl;
    cin >> r;
    cout << "����� ���������� == " << len_okr(r) << endl;
    cout << "������� ���������� == " << sq_okr(r) << endl;
    cout << "������� ������. ��. == " << sq_okr_sf(r) << endl;
    cout << "����� ���� == " << ob_shara(r) << endl;
    return 0;
}
