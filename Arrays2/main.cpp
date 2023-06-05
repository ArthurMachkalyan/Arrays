#include <iostream>
using namespace std;
using std::cin;
using std::cout;
using std::endl;

#define tab "\t"

void main() {
	setlocale(LC_ALL, "");

	const int ROWS = 4;
	const int COLS = 5;
	int arr[ROWS][COLS] = {};

	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			arr[i][j] = rand() % 100;
		}
	}

	for (int i = 0; i < ROWS; i++) //  i - нумерует строки массива
	{
		for (int j = 0; j < COLS; j++) // j - нумерует элементы строки (столбики)
		{
			cout << arr[i][j] << tab;
		}
		cout << endl;
	}
	cout << endl;

	int sum = 0;
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			sum += arr[i][j];
		}
	}
	cout << "Сумма элементов массива: " << sum << endl;
	cout << "Среднее-арифметическое элементов массива: " << double(sum) / (ROWS * COLS) << endl;

	int min = arr[0][0];
    int max = arr[0][0];

	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			if (min > arr[i][j])
			{
				min = arr[i][j];
			}
			if (max < arr[i][j])
			{
				max = arr[i][j];
			}
		}
	}
	cout << "Минимальное значение в массиве: " << min << endl;
	cout << "Максимальное значение в массиве: " << max;
	cout << endl;

	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			for (int k = i;k < ROWS; k++)
			{
				for (int l = k == i ? j + 1 : 0; l < COLS; l++)
				{
					if (arr[k][l] < arr[i][j])
					{
						int buffer = arr[i][j];
						arr[i][j] = arr[k][l];
						arr[k][l] = buffer;
					}
				}
			}
		}
	}

	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0;  j < COLS;  j++)
		{
			for (int k = i; k < ROWS; k++)
			{
				for (int l = k == i ? j + 1 : 0; l < COLS; l++)
				{
					if (arr[k][l] < arr[i][j])
					{
						int buffer = arr[i][j];
						arr[i][j] = arr[k][l];
						arr[k][l] = buffer;
					}
				}
			}
		}
	}

	cout << endl;

	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			cout << arr[i][j] << tab;
		}
		cout << endl;
	}



}


