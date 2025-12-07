// Write a code to tell whether the character entered by the user is uppercase or lowercase?

#include <iostream>
using namespace std;

int main() {
    char k;
    cout << "Enter the character: ";
    cin >> k;

    if (k >= 'a' && k <= 'z') {
        cout << "You entered a lowercase character.\n";
    }
    else if (k >= 'A' && k <= 'Z') {
        cout << "You entered an uppercase character.\n";
    }
    else {
        cout << "It is not an alphabet character.\n";
    }

    return 0;
}

// same code can be done using the ascii value concept like: 

// #include <stdio.h>
// int main() {
//     int ascii;
//     printf("Enter an ASCII value: ");
//     scanf("%d", &ascii);
//     if (ascii >= 97 && ascii <= 122) {
//         printf("It is a lowercase character.\n");}
//     else if (ascii >= 65 && ascii <= 90) {
//         printf("It is an uppercase character.\n");}
//     else {
//         printf("It is neither uppercase nor lowercase alphabet.\n");}
//     return 0;}
