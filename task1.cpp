#include <iostream>
#include <locale.h>

using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");

	// Имя переменной не отражает ее предназначения
	int const size = 10;
	// Имя переменной не отражает ее предназначения
	int const two = 2;
	int arr[two][size];
	// Имя переменной не отражает ее предназначения
	int variable;
	for (int i = 0, j = 0; i < size; i++)
	{
		cout << "введите значения масива №" << i + 1 << " = ";
		cin >> variable;
		arr[j][i] = variable;
		j++;
		arr[j][i] = variable * two;
		j = 0;
	}
	for (int j = 0; j < two; j++)
	{
		for (int i = 0; i < size; i++)
		{
			cout << arr[j][i] << "\t";
		}
		cout << endl;
	}
	return 0;
}
