#include<iostream>
using namespace std;
int main()
{
	const int size = 10;
	int a[10];
	//To take inout from the user

	cout << "Enter " << size << " elements for the array:" << endl;
	for (int i = 0; i < 10; i++)
	{
		cout << "Enter number" << i + 1 << ":" << endl;
		cin >> a[i];
	}
	
	for (int i = 0; i < 10; i++)
	{
		if (a[i] > 10 && a[i] < 100)
		{
			cout <<"The numbers greater than 10 and lesser than 100 are:"<< a[i] << endl;
		}
	}
	
	return 0;
}