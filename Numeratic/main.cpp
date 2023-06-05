#include <iostream>
using namespace std;

#define tab "\t"
//#define BINARY
//#define REPEAT
#define HEX
void main() {
	setlocale(LC_ALL, "");
#ifdef BINARY


	int decimal;
	cout << "Введите десятичное число: "; cin >> decimal;
	const int MAX_BIN_CAPACITY = 32; // максимально-возможная разрядность двоичного числа 
	bool bin[MAX_BIN_CAPACITY] = {}; // этот массив будет хранить разряды двочного числа
	int i = 0;
	while (decimal)
	{
		bin[i++] = decimal % 2; // получаем двоичный разряд числа, и сохраняем его в массив
		decimal /= 2; // убираем полученный двочный разряд из исходного числа
	}
	for (i--; i >= 0; i--)
	{
		cout << bin[i];
		if (i % 8 == 0)cout << " ";
		if (i % 4 == 0)cout << " ";
	}
#endif // BINARY



#ifdef REPEAT

	const int n = 10;
	int arr[n]{};

	for (int i = 0; i < n; i++)
	{
		arr[i]= rand() % 10;
	}

	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab;
	}
	cout << endl << endl;;


	for (int i = 0; i < n; i++)
	{
		bool met_before = false;
		
		for (int j = 0; j < i; j++)
		{
			if (arr[i] = arr[j])
			{
				met_before = true;
				break;
			}
		}
		if (met_before)continue;
	    int counter = 0;
		for (int j = i+1; j < n; j++)
		{
			if (arr[i] == arr[j])
			{
				counter++;
			}
		}
		if (counter)
		{
		cout << "Значение " << arr[i] << " повторяется: " << counter << " раз" << endl;;
		}
	}

#endif // REPEAT

#ifdef HEX
	int decimal;
	cout << "Введите десятичное число: "; cin >> decimal;
	const int MAX_HEX_CAPACITY = 8;
	int hex[MAX_HEX_CAPACITY] = {};
	int	i = 0;
	for (; decimal; decimal /= 16)
	{
		hex[i++] = decimal % 16;
	}

	for (i--; i >= 0; i--)
	{
		switch (hex[i])
		{
		case 10: cout << "A"; break;
		case 11: cout << "B"; break;
		case 12: cout << "C"; break;
		case 13: cout << "D"; break;
		case 14: cout << "E"; break;
		case 15: cout << "F"; break;
		default: cout << hex[i];
		}
	}
	cout << endl;
#endif // HEX


}