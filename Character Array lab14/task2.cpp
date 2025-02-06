#include<iostream>
using namespace std;
int main()
{
	const int size = 9;
	char array[size + 1] = "Ritajaziz";
	for (int i = size; i >= 0; i--)
	{
		cout << array[i];
	}
	return 0;
}