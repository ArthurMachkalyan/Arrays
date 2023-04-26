//Arrays
#include <iostream>
using namespace std;
#define delimetr "---------------------"
void main()
{
	setlocale(LC_ALL, "");
	
	const int SIZE = 5;
	int arr[SIZE];
	cout << "Введите элементы массива: " << endl;

	for (int i = 0; i < SIZE; i++)
	{
		cin >> arr[i];
	}
	cout << delimetr << endl;

	// Показывает под каким номером находятся элементы массива

	for (int i = 0; i < SIZE; i++)
	{
		cout << "Элемент массива " << i << ": ";
		cout << arr[i] << endl;
	}

	cout << delimetr << endl;

	// Выводит массив на экран в прямом порядке

	cout << "Прямой порядок: ";
	for (int i = 0; i < SIZE; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;

	cout << delimetr << endl;

	// Выводит массив на экран в обратном порядке

	cout << "Обратный порядок: ";
	for (int i = SIZE - 1; i >= 0; i--)
	{
		cout << arr[i] << " ";
	}
	cout << endl;

	cout << delimetr << endl;

	// Вычисляет сумму элементов массива

	int sum = 0;
	for (int i = 0; i < SIZE; i++)
	{
		sum += arr[i];
	}
	cout <<"Сумма элементов массива: " << sum << endl;

	cout << delimetr << endl;

	// Вычисляет среднее-арифметическое элементов массива

	double sum1, sr_arf;
	sum1= 0;
	for (int i = 0; i < SIZE; i++)
	{
		sum1 += arr[i];
	}
	sr_arf = sum1 / SIZE;
	cout << "Среднее-арифметическое: " << sr_arf << endl;

	cout << delimetr << endl;

	// Находит максимальное значение массива

	int max = 0;
	for (int i = 0; i < SIZE; i++)
	{
		if (max < arr[i])
		{
			max = arr[i];
		}
	}
	cout << "Максимальное значение в массиве: " << max;
	cout << endl;
	cout << delimetr << endl;

	// Находит минимальное значение массива

	int min = arr[1];
	for (int i = 0; i < SIZE; i++)
	{
		if (min > arr[i])
		{
			min = arr[i];
		}
	}
	cout << "Минимальное значение в массиве: " << min;
	cout << endl;
	cout << delimetr << endl;
}