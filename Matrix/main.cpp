#include <iostream>
using namespace std;

#define tab "\t"

void main() {
	setlocale(LC_ALL, "");

		const int COLS = 3;
		const int ROWS = 3;
		int MATRIX1[COLS][ROWS] = {};
		int MATRIX2[COLS][ROWS] = {};
		int MATRIX3[COLS][ROWS] = {};

		for (int i = 0; i < ROWS; i++)
		{
			for (int j = 0; j < COLS; j++)
			{
				MATRIX1[i][j] = rand() % 10;
				MATRIX2[i][j] = rand() % 10;
			}
		}

		for (int i = 0; i < ROWS; i++)
		{
			for (int j = 0; j < COLS; j++)
			{
				cout << MATRIX1[i][j] << tab;
			}
			cout << endl;
		}

		cout << endl;

		for (int i = 0; i < ROWS; i++)
		{
			for (int j = 0; j < COLS; j++)
			{
				cout << MATRIX2[i][j] << tab;
			}
			cout << endl;
		}

		cout << endl;
		cout << "Сложение матриц: " << endl << endl;
		//Сложение матриц

		for (int i = 0; i < ROWS; i++)
		{
			for (int j = 0; j < COLS; j++)
			{
				MATRIX3[i][j] = MATRIX1[i][j] + MATRIX2[i][j];
			}
		}

		for (int i = 0; i < ROWS; i++)
		{
			for (int j = 0; j < COLS; j++)
			{
				cout << MATRIX3[i][j] << tab;
			}
			cout << endl;
		}

		cout << endl;
		cout << "Вычитание матриц: " << endl << endl;
	
		//Вычитание матриц

		for (int i = 0; i < ROWS; i++)
		{
			for (int j = 0; j < COLS; j++)
			{
				MATRIX3[i][j] = MATRIX1[i][j] - MATRIX2[i][j];
			}
		}

		for (int i = 0; i < ROWS; i++)
		{
			for (int j = 0; j < COLS; j++)
			{
				cout << MATRIX3[i][j] << tab;
			}
			cout << endl;
		}

		cout << endl;
		cout << "Умножение матриц: " << endl << endl; //  Умножение матриц не получилось 

		for (int i = 0; i < ROWS; i++)
		{
			for (int j = 0; j < COLS; j++)
			{
				for (int k = 0;  k < ROWS;  k++)
				{
					MATRIX3[i][j] += MATRIX1[j][k] * MATRIX2[k][j];
				}
			}
		}

		for (int i = 0; i < ROWS; i++)
		{
			for (int j = 0; j < COLS; j++)
			{
				cout << MATRIX3[i][j] << tab;
			}
			cout << endl;
		}
}