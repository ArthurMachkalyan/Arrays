#include <iostream>
using namespace std;
//#define SHIFT_LEFT
#define SHIFT_RIGHT
#define tab "\t"

void main()
{
	setlocale(LC_ALL, "");
#ifdef SHIFT_LEFT
	int number_of_shifts;
	cout << "¬ведите число сдвига: "; cin >> number_of_shifts;
	const int n = 10;
	int arr[n] = { 0,1,2,3,4,5,6,7,8,9 };
	for (int i = 0; i < number_of_shifts; i++)
	{
		int buffer = arr[0];
		for (int i = 0; i < n; i++)
		{
			arr[i] = arr[i + 1];
		}
		arr[n - 1] = buffer;
	}
	
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab;
	}
	cout << endl;
#endif // SHIFT_LEFT

#ifdef SHIFT_RIGHT

	int number_of_shifts;
	cout << "¬ведите число сдвига: "; cin >> number_of_shifts;
	const int n = 10;
	int arr[n] = { 0,1,2,3,4,5,6,7,8,9 };
	for (int i = 0; i < number_of_shifts; i++)
	{
		int buffer = arr[n-1];
		for (int i = n-2; i >= 0; i--)
		{
			arr[i+1] = arr[i];
		}
		arr[0] = buffer;

	}

	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab;
	}


#endif // SHIFT_RIGHT


}