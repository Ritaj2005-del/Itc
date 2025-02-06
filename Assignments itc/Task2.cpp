#include <iostream>
using namespace std;
int main() {
    int shift = 3;
    char input[100];
    cout << "Enter a string: ";
    cin.getline(input, sizeof(input));
    for (int i = 0; input[i] != '\0'; ++i) {
        if ('A' <= input[i] && input[i] <= 'Z') {
            input[i] = input[i] - 'A' + 'a';
        }
    }
    for (int i = 0; input[i] != '\0'; ++i) {
        if ('a' <= input[i] && input[i] <= 'z') {
            input[i] = 'a' + (input[i] - 'a' + shift) % 26;
        }
    }
    cout << "Output: " << input << endl;
    return 0;
}
