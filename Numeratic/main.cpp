#include <iostream>
using namespace std;

#define tab "\t"
//#define BINARY
void main() {
	setlocale(LC_ALL, "");
#ifdef BINARY


	int decimal;
	cout << "������� ���������� �����: "; cin >> decimal;
	const int MAX_BIN_CAPACITY = 32; // �����������-��������� ����������� ��������� ����� 
	bool bin[MAX_BIN_CAPACITY] = {}; // ���� ������ ����� ������� ������� �������� �����
	int i = 0;
	while (decimal)
	{
		bin[i++] = decimal % 2; // �������� �������� ������ �����, � ��������� ��� � ������
		decimal /= 2; // ������� ���������� ������� ������ �� ��������� �����
	}
	for (i--; i >= 0; i--)
	{
		cout << bin[i];
		if (i % 8 == 0)cout << " ";
		if (i % 4 == 0)cout << " ";
	}
#endif // BINARY

	const int n = 10;
	int arr[n]{};

	for (int i = 0; i < n; i++)
	{
		arr[i]= rand() % 5;
	}

	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab;
	}
	cout << endl << endl;;

	int counter = 1;

	for (int i = 0; i < n; i++)
	{
		for (int j = i+1; j < n; j++)
		{
			if (arr[i] == arr[j])
			{
				counter++;
			}
		}
		if (counter > 1)
		{
		cout << "�������" << " " << i << " �����������: " << counter << " ����" << endl;;
		counter = 1;
		}
	}


}