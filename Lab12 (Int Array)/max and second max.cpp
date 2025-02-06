#include<iostream>
using namespace std;

int main() {
    const int size = 12;
    int arr[12];
    int max = arr[0];
    int second_max = arr[1];

    // Taking input from the user
    cout << "Enter " << size << " elements for the array:" << endl;
    for (int i = 0; i < size; i++) {
        cout << "Enter element " << i + 1 << ": " << endl;
        cin >> arr[i];
    }
    //For finding max and second max value
    if (arr[1] > arr[0])
    {
        max = arr[1];
        second_max = arr[0];
    }
    for (int i = 2; i < size; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
            second_max = max;

        }
        else if (arr[i] > second_max)
        {
            second_max = arr[i];
        }
    }
    cout << "Highest value:" << max << endl;
    cout << "Secong highest value:" << second_max << endl;
    return 0;
}