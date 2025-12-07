// wite a code to revese an array entered by the user.

// M1. (using the swaping concept) Two pointer approach to revrse the array.

#include <iostream>
using namespace std;

int main() {

    int arr[] = {1, 2, 3, 4, 5};
    int size = 5;

    int start = 0;          // Pointer at the beginning
    int end = size - 1;     // Pointer at the end

    while (start < end) {
        // Swap arr[start] and arr[end]
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;

        // Move the pointers
        start++;
        end--;
    }

    cout << "Reversed array: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}


// M2. (using the common method (reversing the array),)

// #include <iostream>
// using namespace std;

// int main() {

//     int arr[] = {1, 2, 3, 4, 5};
//     int size = 5;

//     cout << "Reversed array: ";
//     for (int i = size - 1; i >= 0; i--) {
//         cout << arr[i] << " ";
//     }

//     return 0;
// }

