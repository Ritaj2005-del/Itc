#include<iostream>
using namespace std;
int main()
{
	int student[7] = { 10,20,28,30,40,50,60 };
	cout << "The last roll number is:" << student[6] << endl;

	// for printing the whole array
	for (int i = 0; i < 7; i++)
	{
		{
			cout << student[i] << endl;
		}
	}






	return 0;
}