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
	cout << "The length of the string is:" << length << endl;
	char vowels;

	for (vowels = 0; array[vowels] != '\0'; vowels++)
	{
		if (vowels=='a'||vowels=='A'||vowels=='e'||vowels=='E'||vowels=='i'||vowels=='I'|| vowels=='o'|| vowels=='O'||vowels=='u'||vowels=='U')
		{
			cout << array[vowels];
		}
	}
	cout << "The values at odd indexes are:" << array[vowels] << endl;
	return 0;
}
