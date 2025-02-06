#include<iostream>
using namespace std;
int main()
{
	const int size = 100;
	char array[size + 1];

	//Taking input from the user
	cout << "Enter a string:" << endl;
	cin.getline(array, size);
	int length;

	for (length = 0; array[length] != '\0'; length++)
	{
		cout << array[length];
	}
	cout << endl;

	cout << "The given characters are:" << endl;
	cout << length;
	return 0;
}