#include<iostream>
using namespace std;

int main() {
    const int size = 12;
    int arr[size];

    // Taking input from the user
    cout << "Please enter 12 numbers:" << endl;
    for (int i = 0; i < size; i++) {
        cout << "Enter element " << i + 1 << ": ";
        cin >> arr[i];
    }

    // Perform one-step right rotation
    int temp = arr[size - 1];
    for (int i = size - 1; i > 0; i--) {
        arr[i] = arr[i - 1];
    }
    arr[0] = temp;

    // Display the updated array
    cout << "Array after one right rotation is:" << endl;
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
