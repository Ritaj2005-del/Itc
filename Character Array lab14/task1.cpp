#include<iostream>
using namespace std;
int main()
{
	const int size = 5;
	char array[size+1] = "Ritaj";
	int i = 0;
	while (array[i] != '\0')
	{
		cout << array[i];
		i++;
	}


	return 0;
}