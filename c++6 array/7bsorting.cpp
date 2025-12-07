// This is another method of selection sorting but it is insufficient bcz it can do more swaps then required.

// i am not getting the reason why it is unefficient.

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

        // Find the index of minimum element in the remaining array
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[i]) {
                int temp=arr[j];
                arr[j]=arr[i];
                arr[i]=temp;
            }
        }
    }

    // Output the sorted array
    cout << "Array after Selection Sort (Ascending Order): ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}


