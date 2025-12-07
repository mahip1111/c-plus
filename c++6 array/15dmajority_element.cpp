// M3. Using the moore's method.

// moore's method say that ki majority element ki frequency sabse jyada hogi baki sabhi elements ma sa.

// ise code ko dry run kar ka apna dsa notes wali copy ma explain karo agar nhi kar paya then do watch the video again.

#include <iostream>
using namespace std;

int main() {
    int arr[] = {2, 2, 1, 1, 1, 2, 2};
    int n = sizeof(arr) / sizeof(arr[0]);

    int candidate = 0;
    int count = 0;

    // Step 1: Find candidate
    for (int i = 0; i < n; i++) {
        if (count == 0) {
            candidate = arr[i];
        }

        if (arr[i] == candidate)
            count++;
        else
            count--;
    }

    // Step 2: (Optional) verify candidate
    // Problem guarantee deta hai majority exist karti hai,
    // isliye directly print kar sakte ho.

    cout << candidate;
}

