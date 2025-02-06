#include<iostream>
using namespace std;
int main()
{
	const int size = 100;
	char array[size + 1];

	//Taking input from the user

	cout << "Enter a string:" << endl;
	cin.getline(array, size);

	int length = 0;
	while (array[length] != '\0')
	{
		length++;
	}
	cout << "The number of characters is given as:" << length;

	for (int i = 0;array[i]!='\0';i++)
	{
		if (i % 2 == 0)
		{
			cout << array[i];
		}

		cout << endl;
	}



	return 0;
}