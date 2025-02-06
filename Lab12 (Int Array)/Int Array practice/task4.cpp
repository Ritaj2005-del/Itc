#include<iostream>
using namespace std;

int main() {
    const int size = 10;
    int arr[size];

    for (int i = 0; i < size; i++) {
        if (i % 2 == 1) {
            cout << "Enter an even value for the index:" << endl;
            cin >> arr[i];
        }
        else if (i % 2 == 0) {
            cout << "Enter an odd value for the index:" << endl;
            cin >> arr[i];
        }
    }

    // Calculating the odd and even index sums
    int oddindexsum = 0;
    int evenindexsum = 0;

    for (int i = 0; i < size; i++) {
        if (i % 2 == 1) {
            oddindexsum += arr[i];
        }
        else if (i % 2 == 0) {
            evenindexsum += arr[i];
        }
    }

    cout << "The odd index sum is:" << oddindexsum << endl;
    cout << "The even index sum is:" << evenindexsum << endl;

    // Printing the elements of the array
    cout << "The elements of array are given as:" << endl;
    for (int i = 0; i < size; i++) {
        cout << arr[i];
        if (i < size - 1) {
            cout << " ";
        }
    }
    return 0;
}
