#include <iostream>
using namespace std;
using std::cout;
using std::cin;
//#define RAND
//#define SORTING


#define tab "\t"


void main() {
	setlocale(LC_ALL, "");

#ifdef RAND
	const int n = 5;
	int arr[n];

	int minRand;
	int maxRand;

	/*do {
		cout << "Введите минимально возможное случайное число: "; cin >> minRand;
		cout << "Введите максимально возможное случайное число: "; cin >> maxRand;
		if (maxRand < minRand)
		{
			cout << "Error: Вы перепутали числа местами" << endl;
			system("PAUSE");
			system("CLS");
		}
	} while (maxRand < minRand);*/
	cout << "Введите минимально возможное случайное число: "; cin >> minRand;
	cout << "Введите максимально возможное случайное число: "; cin >> maxRand;
	int buffer;
	if (maxRand < minRand)
	{
		buffer = minRand;
		minRand = maxRand;
		maxRand = buffer;
 	}

	if (maxRand - minRand < 10)
	{
		maxRand = minRand + 10;
	}
	for (int  i = 0; i < n; i++)
	{
		arr[i] = rand()%(maxRand - minRand) + minRand;
	}

	for (int i = 0; i < n; i++)
	{
		if (arr[i + 1] < arr[i])
		{
			arr[i + 1] = arr[i];
		}

		cout << arr[i] << tab;
	}
	cout << endl;

#endif // RAND

#ifdef SORTING
	const int n = 5;
	int arr[n];

	for (int i = 0; i < n; i++)
	{
		arr[i] = rand()%100;
	}

	cout << "Массив заполенный случайными элементами:" << endl;

	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab;

	}
	cout << endl;

	for (int i = 0; i < n; i++)
	{
		for (int j = i+1; j < n; j++) {
			int buffer;
			if (arr[i] > arr[j])
			{
				buffer = arr[i];
				arr[i] = arr[j];
				arr[j] = buffer;
			}
		}
	}

	cout << "Осортированный массив по возрастанию:" << endl;

	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab;
	}
	cout << endl;
#endif // SORTING

	const int n = 5;
	int arr[n];

	for (int i = 0; i < n; i++)
	{
		arr[i] = rand()%(80-70)+70;
	}
	
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab;
	}
	cout << endl;
}
