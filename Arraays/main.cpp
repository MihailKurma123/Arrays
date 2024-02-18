//Arrays
#include<iostream>
using namespace std;
using std::cout;
using std::endl;

void main()
{
	setlocale(LC_ALL, "");
		//Массивы:
		cout << "Hallo Arrays" << endl;
		const int SIZE = 5;
		int arr[SIZE] = { 3,5,8 };
		cout << int() << endl;
		//Ввод элемента с клавиатуры:
		cout<<"Введите элементы массива: ";
		for (int i = 0; i < SIZE; i++)
		{
			cin >> arr[i];
		}
		for (int i = 0; i < SIZE; i++)
		{
			cout << arr[i] << "\t";
		}
		cout << endl;
		//Ввывод массива на экран в оюратном порядке:
		for (int i = SIZE - 1; i >= 0; i--)
		{
			cout << arr[i] << "\t";
		}
		//Вычисление суммы элимеинта:
		int sum = 0;
		for (int i = 0; i < SIZE; i++)
		{
			sum = +arr[i];
		}
		cout << " Сумма элементов массива: " << sum << endl;
		cout << "Средне арифметическое элементов массива: " << (double)sum / SIZE << endl;
		// Поиск мининмального,максимадьного значения;
		int min, max;
		min = max = arr[0];
		for (int i = 0; i < SIZE; i++)
		{
			if (arr[i] < min)min = arr[i];
			if (arr[i] > max)max = arr[i];
		}
		cout << "Минимальное значение в массиве:" << min << endl;
		cout << "Максимальное значение в массиве:" << max << endl;


}