#include <iostream>
using namespace std;
int main()
{
    int size = 10;
    int a[10];
    cout << "Enter 10 elements of the array:" << endl;
    for (int i = 0; i < size; ++i) {
        cout << "Enter element " << i + 1 << ": ";
        cin >> a[i];
    }
    for (int i = 0; i < size - 1; ++i) {
        for (int j = 0; j < size - i - 1; ++j) {
            if (a[j] > a[j + 1]) {
                int temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }

    int sum = 0;
    for (int i = 0; i < size; ++i) {
        sum += a[i];
    }
    double mean = sum / size;
    int median;
    if (size % 2 == 0) {
        median = (a[size / 2 - 1] + a[size / 2]) / 2;
    }
    else {
        median = a[size / 2];
    }
    cout << "\nSorted Array: ";
    for (int i = 0; i < size; ++i) {
        cout << a[i] << " ";
    }
    cout << "\nMean: " << mean << "\n";
    cout << "Median: " << median << "\n";

    return 0;
}
