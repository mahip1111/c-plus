#include <iostream>
using namespace std;

int main() {
    char k;
    cout << "Enter the character: ";
    cin >> k;

    if (k >= 97 && k <= 122) {
        cout << "You entered a lowercase character.\n";
    }
    else if (k >= 65 && k <= 90) {
        cout << "You entered an uppercase character.\n";
    }
    else {
        cout << "It is not an alphabet character.\n";
    }

    return 0;
}