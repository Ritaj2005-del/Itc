#include<iostream>
using namespace std;
int main()
{
	const int size = 10;
	int arr[10];
	for (int i = 0; i < size; i++)
	{
		cout << "Enter element" << i + 1 << ":" << endl;
		cin >> arr[i];
	}
	cout << "Printing elments with spaces:" << endl;
	//To print the arrays on screen 
	for (int i = 0; i < size; i++)
	{
		cout << arr[i];
		if (i < size - 1)
		{
			cout << " ";
		}
	}
	return 0;
}