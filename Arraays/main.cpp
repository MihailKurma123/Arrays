//Arrays(масcив)
#include<iostream>
using namespace std;
using std::cout;
using std::endl;
//#define ARRAYS


void main()
{
	setlocale(LC_ALL, "");
#ifdef ARRAYS
	
	cout << "Hello Arrays"<<endl;
	const int SIZE = 5;
	int arr[SIZE] = { 3,5,8,10,7 };
	cout << int() << endl;
	for (int i = 0; i < SIZE; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
#endif // ARRAYS

}