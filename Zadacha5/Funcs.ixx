#include <iostream>
export module Funcs;

using namespace std;

export int Select() {
	int c;
	cout << "1. ��������\n2. ���������\n3. ���������\n4. �������\n �������� ��������: ";
	cin >> c;
	if (c < 1 || c > 4) {
		return Select();
	}
	else
	{
		return c;
	}
}