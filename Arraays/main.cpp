//Arrays(масcив)
#include<iostream>
using namespace std;
using std::cout;
using std::endl;

#define ARRAYS

void main()
{
	setlocale(LC_ALL, "");
#ifdef ARRAYS
	//массивы:
	cout << "Hello Arrays"<<endl;
	const int SIZE = 5;
	int arr[SIZE] = { 3,5,8, };
	cout << int() << endl;
	cout << "введите элементы массива: ";
	for (int i = 0; i < SIZE; i++)
	{
		cin >> arr[i];
	}
	
	for (int i = 0; i < SIZE; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
	for (int i = SIZE - 1; i >= 0; i--)
	{
		cout << arr[i] << "\t";
	}
	//вычисление суммы элемента массива:
	int sum = 0;
	for (int i = 0; i < SIZE; i++)
	{
		sum += arr[i];

	}
	cout << "Сумма элементов массива: " << sum << endl;
	cout << "Среднее-арифметическое элементов массива: " << (double)sum / SIZE << endl;
	//поиск минимального,максимального значения:
	int min, max;
	min = max = arr[0];
	for (int i = 0; i < SIZE; i++)
	{
		if (arr[i] < min)min = arr[i];
		if (arr[i] > max)max = arr[i];

	}
	cout << "Минимальное значение в масиве: " << min << endl;
	cout << "Максимальное значение в масиве: " << max << endl;

#endif // ARRAYS


}