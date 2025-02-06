#include<iostream>
using namespace std;

int main() {
    const int size = 12;
    int arr[12];
    int max = arr[0], min = arr[0];  // Fix the declaration of variables

    // Taking input from the user
    cout << "Enter " << size << " elements for the array:" << endl;
    for (int i = 0; i < size; i++) {
        cout << "Enter element " << i + 1 << ": " << endl;
        cin >> arr[i];
    }

    // For finding the min and max values of indexes
    for (int i = 0; i < size; i++) {
        if (min> arr[i])
        {
            min = arr[i];

        }
        else if (max < arr[i])
        {
            max = arr[i];
        }

    }

    cout << "Highest value of the index is: " << max << endl;
    cout << "Smallest value of the index is: " << min << endl;

    return 0;
}
