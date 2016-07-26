#include <iostream>
#include <locale.h>

using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");

	int const size1 = 3;
	int const size = 10;
	int arr[size1][size];
	int variable;

	for (int i = 0; i < size; i++)
	{
		cout << "введите заначение №" << i + 1 << " = ";
		cin >> variable;
		for (int j = 0; j < size1; j++)
		{
			arr[j][i] = variable + j;
		}
	}

	for (int j = 0; j < size1; j++)
	{
		for (int i = 0; i < size; i++)
		{
			cout << arr[j][i] << "\t";
		}
		cout << endl;
	}
}