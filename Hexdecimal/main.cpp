#include <iostream>
using namespace std;
void main()
{
	setlocale(LC_ALL, "");
		int decimal;
		cout << "������� ���������� �����: "; cin >> decimal;
		const int n = 8;
		char hex[n] = {};
		int i = 0;
		for (; decimal; hex[i++] = decimal % 16, decimal /= 16);
		for (--i; i >= 0; i--)
		{
			cout << char(hex[i] < 10 ? hex[i] + '0' : hex[i] + 'A' - 10);
		}
		cout << endl;
}