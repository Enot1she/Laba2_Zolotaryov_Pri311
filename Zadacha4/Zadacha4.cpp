import Convert;
#include <iostream>


using namespace std;


int main()
{
	setlocale(LC_ALL, "Russian");

	int x, chose = 0;

	while (chose == 0 || chose > 6 || chose < 0)
	{
		cout << "1. ���� � ���\n2. ��� � ����\n3. ��� � ������\n4. ���� � ������\n5. ���� � �������\n6. ������ � �������\n�������� ��������: ";
		cin >> chose;
	}


	if (chose == 1)
	{
		cout << "\n���� == ";
		cin >> x;
		cout << YTD(x) << " ����\n";
	}
	else if (chose == 2)
	{
		cout << "\n��� == ";
		cin >> x;
		cout << DTH(x) << " �����\n";
	}
	else if (chose == 3)
	{
		cout << "\n��� == ";
		cin >> x;
		cout << DTM(x) << " �����\n";
	}
	else if (chose == 4)
	{
		cout << "\n���� == ";
		cin >> x;
		cout << HTM(x) << " �����\n";
	}
	else if (chose == 5)
	{
		cout << "\n���� == ";
		cin >> x;
		cout << HTS(x) << " ������\n";
	}
	else if (chose == 6)
	{
		cout << "\n������ == ";
		cin >> x;
		cout << MTS(x) << " ������\n";
	}


	return 0;
}