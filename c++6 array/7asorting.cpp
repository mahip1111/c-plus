// Sorting an array means rearranging its elements so that they follow a defined order (either ascending or descending).

// There are many ways to sort to array in this file we are writing the code for "SELECTION SORT".

// CONCEPT OF SECLECTION SORT: find the minimum element in unsorted array(element at index 0 to element at index (n-1)) and swap it with the element at the begining which was assumed minimum initially. Bus yahi chiz apko bar bar karni hai jab tak arry puri tarha se sort na ho jaye.

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    int arr[n];

    // Taking input from user
    cout << "Enter the elements of the array:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Selection Sort
    for (int i = 0; i < n - 1; i++) {
        int minIndex = i; // assume current index is smallest

        // Find the index of minimum element in the remaining array
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }

        // Swap only once per iteration
        if (minIndex != i) {
            int temp = arr[i];
            arr[i] = arr[minIndex];
            arr[minIndex] = temp;
        }
    }

    // Output the sorted array
    cout << "Array after Selection Sort (Ascending Order): ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}

// ye code kis concept par run kar raha hai ye btaya hai dsa wali notebook ma.