#include<iostream>
using namespace std;
int main()
{
	int Array[10] = { 23,45,67,78,3,567,0,-1,4,67 };

	// to print the array in reverse order

	for (int i = 9; i >= 0; i--)
	{

		{
			cout << Array[i] << endl;
		}
	}
	return 0;
}