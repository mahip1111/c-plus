// KADANES ALGORITHM: it is the type of dynamic programming algorithm.

// M3. Maximun subarray sum using the kadanes algorithm. 

// write this code explanation on the dsa notebook from the lecture.

#include <iostream>
#include <climits>
using namespace std;

int main() {
    int arr[] = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    int n = sizeof(arr) / sizeof(arr[0]);

    int currentSum = 0;
    int maxSum = INT_MIN;

    for (int i = 0; i < n; i++) {
        currentSum += arr[i];

        // Update maxSum
        if (currentSum > maxSum) {
            maxSum = currentSum;
        }

        // If current sum goes negative, reset it
        if (currentSum < 0) {
            currentSum = 0;
        }
    }

    cout << "Maximum Subarray Sum = " << maxSum << endl;
    return 0;
}

// i got the code par fir bhi ek bar wapas ye wali video dekho in order to get clarity.  and also see how i can print that subarry wich is giving this sum.
