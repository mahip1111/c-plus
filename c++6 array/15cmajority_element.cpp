// M2 Using the mix concept of sorting and loop to calculate the frequency

// total time complexity is nlogn

// ek bar ise code ko khud se explain karo agar nahi kar paye then again video dekho.

#include <iostream>
#include <algorithm>     // for sort()
using namespace std;

int main() {
    int arr[] = {2, 2, 1, 1, 1, 2, 2};
    int n = sizeof(arr) / sizeof(arr[0]);

    // Step 1: Sort the array  (O(n log n))
    sort(arr, arr + n);

    int count = 1;
    int majority = arr[0];

    // Step 2: Count frequency using loop (O(n))
    for (int i = 1; i < n; i++) {
        if (arr[i] == arr[i - 1]) {
            count++;
        } else {
            count = 1;
        }

        if (count > n / 2) {
            majority = arr[i];
            break;
        }
    }

    cout << majority;
}
