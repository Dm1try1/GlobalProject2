#include <iostream>
#include "funcs.h"
using namespace std;
int main()
{
	setlocale(LC_ALL, "rus");
	int n;
	cout << "1) �����" << endl;
	cout << "2) �������" << endl;
	cout << "3) ���������" << endl;
	cout << "4) �������" << endl;
	cout << "������� ����� �������" << endl;
	cin >> n;
	switch (n)
	{ 
	case 1:
	{
		double a, b;
		cout << "������� ������ ��������" << endl;
		cin >> a;
		cout << "������� ������ ��������" << endl;
		cin >> b;
		cout << MySum(a, b) << endl;
		break;
	}
	case 2:
	{
		cout << "������� � ����������" << endl;
		break;
	}
	case 3:
	{
		cout << "������� � ����������" << endl;
		break;
	}
	case 4: 
	{
		double a1, b1;
		cout << "������� ������ ��������" << endl;
		cin >> a1;
		cout << "������� ������ ��������" << endl;
		cin >> b1;
		while (b1 == 0)
		{
			cout << "�� ���� ������ ������" << endl;
			cout << "������� ������ ��������" << endl;
			cin >> b1;

		}
		cout << MySub(a1, b1) << endl;
		break;
	}
	default:
		break;
	}
	system("pause");
	return 0;
}