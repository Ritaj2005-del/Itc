#include<iostream>
using namespace std;

int main() {
    const int size = 12;
    int arr[size];

    // Taking input from the user
    cout << "Enter " << size << " elements for the array:" << endl;
    for (int i = 0; i < size; i++) {
        cout << "Enter element " << i + 1 << ": ";
        cin >> arr[i];
    }

    int min_index = 0, second_min_index = 1;
    int max_index = 0, second_max_index = 1;

    // Finding minimum and second minimum elements and their indexes
    if (arr[1] < arr[0]) {
        min_index = 1;
        second_min_index = 0;
    }

    for (int i = 2; i < size; i++) {
        if (arr[i] < arr[min_index]) {
            second_min_index = min_index;
            min_index = i;
        }
        else if (arr[i] < arr[second_min_index]) {
            second_min_index = i;
        }
    }

    // Finding maximum and second maximum elements and their indexes
    if (arr[1] > arr[0]) {
        max_index = 1;
        second_max_index = 0;
    }

    for (int i = 2; i < size; i++) {
        if (arr[i] > arr[max_index]) {
            second_max_index = max_index;
            max_index = i;
        }
        else if (arr[i] > arr[second_max_index]) {
            second_max_index = i;
        }
    }

    // Displaying the results
    cout << "Minimum element: " << arr[min_index] << " at index " << min_index << endl;
    cout << "Second Minimum element: " << arr[second_min_index] << " at index " << second_min_index << endl;

    cout << "Maximum element: " << arr[max_index] << " at index " << max_index << endl;
    cout << "Second Maximum element: " << arr[second_max_index] << " at index " << second_max_index << endl;

    return 0;
}
