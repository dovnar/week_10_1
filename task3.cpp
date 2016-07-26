#include <iostream>
#include <locale.h>

using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");

	int const size = 5;
	int arr[size][size]{ {5, 9, 3, 2, 0}, {4, 5, 3, 9, 1}, {1, 6, 8, 7, 3}, {2, 7, 4, 5, 0,}, {2, 8, 1, 7, 6} };
	int shift;
	int position;

	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}

	cout << "выберете куда сдвигать\nвлево = 1\nвправо = 2\nвверх = 3\nвниз = 4\n";
	cin >> position;
	cout << "на сколько клеток сдвигаем";
	cin >> shift;

	for (int l = 0; l < shift; l++)
	{
		for (int i = 0; i < size; i++)
		{
			for (int j = 1; j < size; j++)
			{
				int number;
				switch (position)
				{
				case 1:
				{
					number = arr[i][j];
					arr[i][j] = arr[i][j - 1];
					arr[i][j - 1] = number;
				}
				break;
				case 2:
				{
					number = arr[i][size - 1];
					arr[i][size - 1] = arr[i][j - 1];
					arr[i][j - 1] = number;
				}
				break;
				case 3:
				{
					number = arr[j][i];
					arr[j][i] = arr[j - 1][i];
					arr[j - 1][i] = number;
				}
				break;
				case 4:
				{
					number = arr[size - 1][i];
					arr[size - 1][i] = arr[j - 1][i];
					arr[j - 1][i] = number;
				}
				break;
				default:
					break;
				}
			}
		}
	}
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}
}