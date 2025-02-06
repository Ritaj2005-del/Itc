#include<iostream>
using namespace std;
int main()
{
	int size = 10;
	int arr[10] = { 23,45 ,67 ,78, 3 ,567, 0 ,-1, 4 ,67 };

	// to print the sum of even numbers in the array
	int sum = 0;
	double average;
	for (int i = 0; i < 10; i++)
	{

		if (arr[i] % 2 == 0)
		{
			sum += arr[i];
			average = sum / 3.00;
		}

	}

	cout << "The sum of even elements of array is:" << sum << endl;
	cout << "The average of even elements of the array is:" << average << endl;

	return 0;
}