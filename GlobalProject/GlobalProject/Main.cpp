#include <iostream>
#include "funcs.h"
using namespace std;
int main()
{
	setlocale(LC_ALL, "rus");
	int n;
	cout << "1) Сумма" << endl;
	cout << "2) Разница" << endl;
	cout << "3) Умножение" << endl;
	cout << "4) Деление" << endl;
	cout << "Введите номер функции" << endl;
	cin >> n;
	switch (n)
	{ 
	case 1:
	{
		double a, b;
		cout << "Введите первый аргумент" << endl;
		cin >> a;
		cout << "Введите второй аргумент" << endl;
		cin >> b;
		cout << MySum(a, b) << endl;
		break;
	}
	case 2:
	{
		cout << "Функция в разработке" << endl;
		break;
	}
	case 3:
	{
		cout << "Функция в разработке" << endl;
		break;
	}
	case 4: 
	{
		double a1, b1;
		cout << "Введите первый аргумент" << endl;
		cin >> a1;
		cout << "Введите второй аргумент" << endl;
		cin >> b1;
		while (b1 == 0)
		{
			cout << "На ноль делить нельзя" << endl;
			cout << "Введите второй аргумент" << endl;
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