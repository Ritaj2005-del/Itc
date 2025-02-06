#include<iostream>
using namespace std;
int main()
{
	int size = 10;
	int arr[10] = { 23,45 ,67 ,78, 3 ,567, 0 ,-1, 4 ,67 };

	for (int i = 0; i < 10; i++)
	{
		if (arr[i] % 5 ==0|| arr[i]%3==0)
		{
			cout << arr[i] << endl;
		}
	}
	return 0;
}
