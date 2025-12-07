// Q: Given an integer array nums, find the contiguous subarray (containing at least one number) which has the largest sum, and return its sum. just print the sum subarray print nahi karna hai.

// total number of subarray possible for the given array is n(n+1)/2.

// M1. BRUT FORCE METHOD.   time complexity O(n^3).

#include <iostream>
#include <vector>
#include <climits>   // used to add the INT_MIN
using namespace std;

int maxSubArray(vector<int>& nums) {
    int n = nums.size();
    int maxSum = INT_MIN;     // used to give min value to the maxsum variable from all the elements of the array.

    for (int start = 0; start < n; start++) {   // this line is used to find the starting index of the subarray
        for (int end = start; end < n; end++) {    // this line is used to find the ending index of the subarray
            int currSum = 0;
            for (int k = start; k <= end; k++) {  // ye loop starting index se ending index tak chal raha hai to store the elements of the subarray.
                currSum += nums[k];
            }
            maxSum = max(maxSum, currSum);
        }
    }

    return maxSum;
}

int main() {
    vector<int> nums = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    cout <<"The maximum sum possible from all the possible subarray is: "<< maxSubArray(nums);
}
