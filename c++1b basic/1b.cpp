// another method to solve the above problem. 

#include <iostream>
using namespace std;

int main() {
    int decimal;
    cout << "Enter a decimal number: ";
    cin >> decimal;

    int num = decimal;
    int binary[32];   // Array to store binary digits
    int index = 0;

    // Convert decimal to binary
    while (num > 0) {
        binary[index] = num % 2;
        num = num / 2;
        index++;
    }

    cout << "Binary equivalent of " << decimal << " is: ";

    // Print array in reverse order
    for (int i = index - 1; i >= 0; i--) {
        cout << binary[i];
    }

    return 0;
}
