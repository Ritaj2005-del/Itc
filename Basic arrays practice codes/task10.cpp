#include <iostream>

int main() {
    int myArray[] = { 3, 5, 27, 5, 10, 12, 5, 153, 3 };
    int size = sizeof(myArray) / sizeof(myArray[0]);

    std::cout << "Array = ";
    for (int i = 0; i < size; ++i) {
        std::cout << myArray[i];
        if (i < size - 1) {
            std::cout << ", ";
        }
    }
    std::cout << std::endl;

    std::cout << "\nNumbers with at least two digits are: ";
    for (int i = 0; i < size; ++i) {
        if (myArray[i] >= 10) {
            std::cout << myArray[i] << " ";
        }
    }

    return 0;
}
