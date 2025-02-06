#include<iostream>
using namespace std;
int main()
{
	int size = 10;
	int arr[10] = { 23,45 ,67 ,78, 3 ,567, 0 ,-1, 4 ,67 };

	//to print the sum 
	int sum = 0;
	for (int i = 0; i < 10; i++)
	{
		sum += arr[i];
	}
	//now to display the average

	double average = sum / size;

	for (int i = 0; i < 10; i++)
	{
		{
			cout << arr[i] << endl;
		}
	}
	cout << "The sum of the elements of array is:" << sum << endl;
	cout << "The average of elements of the array is:" << average << endl;


	return 0;
}
