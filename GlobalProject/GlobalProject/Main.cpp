#include <iostream>
using namespace std;
int main()
{
	int n;
	cout << "1) Сумма" << endl;
	cout << "1) Разница" << endl;
	cout << "1) Умножение" << endl;
	cout << "1) Деление" << endl;
	cout << "Введите номер функции" << endl;
	cin >> n;
	switch (n)
	{ 
	case 1:
	case 2:
	case 3:
	case 4:
	default:
		break;
	}
	system("pause");
	return 0;
}