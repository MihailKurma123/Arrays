//Arrays(масcив)
#include<iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "");
	cout << "Hello Arrays" << endl;
	const int SIZE = 5;
	int arr[SIZE] = { 3,5,8 };
	cout << int() << endl;
	for (int i = 0; i < SIZE; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
}