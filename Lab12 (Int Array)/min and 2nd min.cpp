#include<iostream>
using namespace std;

int main() {
    const int size = 12;
    int arr[12];
    int min = arr[0];
    int second_min = arr[1];

    // Taking input from the user
    cout << "Enter " << size << " elements for the array:" << endl;
    for (int i = 0; i < size; i++) {
        cout << "Enter element " << i + 1 << ": " << endl;
        cin >> arr[i];
    }
    // For finding the min and second minimum
    int i;
    if (arr[1] < arr[0])
    {
        min = arr[1];
        second_min = arr[0];
    }
    for (int i = 2; i < size; i++)
    {
        if (arr[i] < min)
        {
            second_min = min;
            min = arr[i];
        }
        else if (arr[i] < second_min)
        {
            second_min = arr[i];
        }
    }
    cout << "Smallest number:" << min << endl;
    cout << "second smallest number:" << second_min << endl;
    return 0;
}
