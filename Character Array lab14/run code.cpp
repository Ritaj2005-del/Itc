#include<iostream>
using namespace std;
int main()
{
    const int size = 5;
    int arr[size + 1];
    int sum = 0;
    for (int x = 0; x < 5; x++)
    {
        sum += arr[x];
        cout << sum << endl;
    }

    return 0;
}