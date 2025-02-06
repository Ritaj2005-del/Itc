#include<iostream>
using namespace std;
int main()
{
	const int size = 10;
	int arr[10];
	for (int i = 0; i < size; i++)
	{
		if (i % 2 == 1)
		{
			cout << "Enter an odd value for the index:" << endl;
			cin >> arr[i];
		}
		else if (i % 2 == 0)
		{
			cout << "Enter any value for the index:" << endl;
			cin >> arr[i];
		}

	}
	//To print the elements of the array
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
