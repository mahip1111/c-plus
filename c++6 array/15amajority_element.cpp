// Q: Given an array nums of size n, return the majority element. Tbe majority element is the element that appears more thant [n/2] times. You may assume that the majority element always exist in the array.  (This is the MAJORITY ELEMENT PROBLEM.)

// NOTE: Majority element ek hi hota ha ya toh hota hi nahi hai.

// M1. Brut force method with the time complexity of O(n^2); (using the functions )
#include <iostream>
using namespace std;

int findMajorityElement(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        int count = 0;

        // Count how many times arr[i] appears
        for (int j = 0; j < n; j++) {
            if (arr[j] == arr[i])
                count++;
        }

        // Check if count > n/2
        if (count > n / 2)
            return arr[i];
    }

    // If no majority element found
    return -1;
}

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    int arr[n];
    cout << "Enter array elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int result = findMajorityElement(arr, n);

    if (result != -1)
        cout << "Majority element is: " << result << endl;
    else
        cout << "No Majority Element found" << endl;

    return 0;
}
