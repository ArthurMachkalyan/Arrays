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
		cout << "Элемент" << " " << i << " встречается: " << counter << " раза" << endl;;
		counter = 1;
		}
	}

#endif // REPEAT

#ifdef HEX
	int decimal;
	cout << "Введите десятичное число: "; cin >> decimal;
	const int MAX_HEX_CAPACITY = 8;
	int hex[MAX_HEX_CAPACITY] = {};
	int	i = 0;
	for (; decimal; i++)
	{

	}




#endif // HEX


}