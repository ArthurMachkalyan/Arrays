//Arrays
#include <iostream>
using namespace std;
#define delimetr "---------------------"
void main()
{
	setlocale(LC_ALL, "");
	
	const int SIZE = 5;
	int arr[SIZE];
	cout << "������� �������� �������: " << endl;

	for (int i = 0; i < SIZE; i++)
	{
		cin >> arr[i];
	}
	cout << delimetr << endl;

	// ���������� ��� ����� ������� ��������� �������� �������

	for (int i = 0; i < SIZE; i++)
	{
		cout << "������� ������� " << i << ": ";
		cout << arr[i] << endl;
	}

	cout << delimetr << endl;

	// ������� ������ �� ����� � ������ �������

	cout << "������ �������: ";
	for (int i = 0; i < SIZE; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;

	cout << delimetr << endl;

	// ������� ������ �� ����� � �������� �������

	cout << "�������� �������: ";
	for (int i = SIZE - 1; i >= 0; i--)
	{
		cout << arr[i] << " ";
	}
	cout << endl;

	cout << delimetr << endl;

	// ��������� ����� ��������� �������

	int sum = 0;
	for (int i = 0; i < SIZE; i++)
	{
		sum += arr[i];
	}
	cout <<"����� ��������� �������: " << sum << endl;

	cout << delimetr << endl;

	// ��������� �������-�������������� ��������� �������

	double sum1, sr_arf;
	sum1= 0;
	for (int i = 0; i < SIZE; i++)
	{
		sum1 += arr[i];
	}
	sr_arf = sum1 / SIZE;
	cout << "�������-��������������: " << sr_arf << endl;

	cout << delimetr << endl;

	// ������� ������������ �������� �������

	int max = 0;
	for (int i = 0; i < SIZE; i++)
	{
		if (max < arr[i])
		{
			max = arr[i];
		}
	}
	cout << "������������ �������� � �������: " << max;
	cout << endl;
	cout << delimetr << endl;

	// ������� ����������� �������� �������

	int min = arr[1];
	for (int i = 0; i < SIZE; i++)
	{
		if (min > arr[i])
		{
			min = arr[i];
		}
	}
	cout << "����������� �������� � �������: " << min;
	cout << endl;
	cout << delimetr << endl;
}