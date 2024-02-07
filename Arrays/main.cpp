#include <iostream>
using namespace std;
void main()
{
	setlocale(LC_ALL, "");
	//cout << "Hello Arrays" << endl;
	//const int SIZE = 5;
	//int arr[SIZE];
	//
	////arr[2] = 2048;
	////cout << arr[2] << endl;
	//for (int i = 0; i < SIZE; i++)
	//{
	//	cout << arr[i] << "\t";
	//}
	//cout << endl;

	const int SIZE = 5;
	int i, m[SIZE]; // Объявляем целочисленную переменную и один массив.

	for (i = 0; i < SIZE; i++)
	{
		cin >> m[i]; // Вводим с клавиатуры значение ячейки массива
	}

	for (i = 0; i < SIZE; i++)
	{
		cout << "m[" << i << "]= " << m[i] << "\n";
	}
	cout << endl;
	///
	for (i = 4; i  >= 0; i--)
	{
		cout << "m[" << i << "]= " << m[i] << "\n";
	}
	cout << endl;
	///
	int sum = 0;
	for ( i = 0; i < SIZE; i++)
	{
  sum = sum + m[i];
	}
	cout <<"Сумма массивов = " << sum;
	cout << endl;
	int sum1 = 0;
	for (i = 0; i < SIZE; i++)
	{
		sum1 = sum1 + m[i];
	}
	cout << "Среднее арифметическое элементов массива = " << sum / SIZE;
	cout << endl;
	int max_el = m[0];
	int min_el = m[0];
	if (max_el > m[i])
	{
		max_el = i;
	}
	if (min_el < m[i])
	{
		min_el = i;
	}
	cout << "Максимальное значение = " << max_el << "\n";
	cout << "Минимальное значение = " << min_el << "\n";
	
}