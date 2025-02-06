#include<iostream>
using namespace std;
int main()
{
	const int size = 10;
	int arr[10];

	cout << "Enter " << size << " elememts of the array" << endl;

	for (int i = 0; i < 10; i++)
	{
		cout << "Enter elements" << i + 1 << ":" << endl;
		cin >> arr[i];

	}

	for (int i = 0; i < 10; i++)
	{
		if (arr[i] % 2 == 0)
		{
			cout << arr[i] + 1 << endl;
		}

		else if (arr[i] % 2 == 1)
		{
			cout << arr[i] - 1 << endl;
		}
	}
	return 0;
}