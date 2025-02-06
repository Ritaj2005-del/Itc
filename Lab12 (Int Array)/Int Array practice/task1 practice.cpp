#include<iostream>
using namespace std;
int main()
{
	const int size = 10;
	int arr[10];
	for (int i = 0; i < size; i++)
	{
		arr[i] = i;
	}
	//To print the elements of the array with space
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
